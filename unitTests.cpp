#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// ----------------------------------------------------
// SIMULATED LOGIC BASED ON YOUR JAVASCRIPT CODE
// ----------------------------------------------------

// JS logic: icon chosen based on weather.main
string getWeatherIcon(string mainWeather) {
    if (mainWeather == "Clouds") return "assets/clouds.png";
    if (mainWeather == "Clear")  return "assets/clear.png";
    if (mainWeather == "Rain")   return "assets/rain.png";
    if (mainWeather == "Drizzle")return "assets/drizzle.png";
    if (mainWeather == "Mist")   return "assets/mist.png";
    return "assets/default.png";
}

// JS logic: temperature rounding
string formatTemperature(float temp) {
    int rounded = round(temp);
    return to_string(rounded) + "°C";
}

// JS logic: humidity formatting
string formatHumidity(int h) {
    return to_string(h) + "%";
}

// JS logic: wind formatting
string formatWind(float w) {
    return to_string((int)w) + " km/h";
}

// JS logic: API error condition
bool isError(string cod) {
    return cod == "404";
}

// ----------------------------------------------------
// TEST FUNCTIONS
// ----------------------------------------------------

void testWeatherIcon() {
    cout << "\n[TEST] Weather Icon Selection\n";

    cout << (getWeatherIcon("Clouds") == "assets/clouds.png"
        ? "PASS Clouds" : "FAIL Clouds") << endl;

    cout << (getWeatherIcon("Clear") == "assets/clear.png"
        ? "PASS Clear" : "FAIL Clear") << endl;

    cout << (getWeatherIcon("Rain") == "assets/rain.png"
        ? "PASS Rain" : "FAIL Rain") << endl;

    cout << (getWeatherIcon("Drizzle") == "assets/drizzle.png"
        ? "PASS Drizzle" : "FAIL Drizzle") << endl;

    cout << (getWeatherIcon("Mist") == "assets/mist.png"
        ? "PASS Mist" : "FAIL Mist") << endl;

    cout << (getWeatherIcon("Random") == "assets/default.png"
        ? "PASS Default" : "FAIL Default") << endl;
}

void testTemperatureFormat() {
    cout << "\n[TEST] Temperature Formatting\n";

    cout << (formatTemperature(21.6f) == "22°C"
        ? "PASS Round Up" : "FAIL Round Up") << endl;

    cout << (formatTemperature(21.4f) == "21°C"
        ? "PASS Round Down" : "FAIL Round Down") << endl;

    cout << (formatTemperature(-2.4f) == "-2°C"
        ? "PASS Negative Round" : "FAIL Negative Round") << endl;
}

void testHumidityFormat() {
    cout << "\n[TEST] Humidity Formatting\n";

    cout << (formatHumidity(76) == "76%"
        ? "PASS Humidity 76" : "FAIL Humidity 76") << endl;

    cout << (formatHumidity(0) == "0%"
        ? "PASS Humidity 0" : "FAIL Humidity 0") << endl;
}

void testWindFormat() {
    cout << "\n[TEST] Wind Formatting\n";

    cout << (formatWind(5.8f) == "5 km/h"
        ? "PASS Wind 5.8" : "FAIL Wind 5.8") << endl;

    cout << (formatWind(12.0f) == "12 km/h"
        ? "PASS Wind 12" : "FAIL Wind 12") << endl;
}

void testErrorCondition() {
    cout << "\n[TEST] API Error Handling\n";

    cout << (isError("404") == true
        ? "PASS Error 404" : "FAIL Error 404") << endl;

    cout << (isError("200") == false
        ? "PASS Error 200" : "FAIL Error 200") << endl;
}

// ----------------------------------------------------
// MAIN TEST RUNNER
// ----------------------------------------------------

int main() {
    cout << "===== WEATHER APP LOGIC TESTS (C++) =====\n";

    testWeatherIcon();
    testTemperatureFormat();
    testHumidityFormat();
    testWindFormat();
    testErrorCondition();

    cout << "\n===== ALL TESTS FINISHED =====\n";
    return 0;
}
