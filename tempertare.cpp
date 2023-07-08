#include <iostream>

// Function to convert temperature from Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert temperature from Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

// Function to convert temperature from Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert temperature from Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert temperature from Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    double celsius = fahrenheitToCelsius(fahrenheit);
    return celsiusToKelvin(celsius);
}

// Function to convert temperature from Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    double celsius = kelvinToCelsius(kelvin);
    return celsiusToFahrenheit(celsius);
}

int main() {
    double temperature;
    int choice;

    std::cout << "Temperature Converter\n";
    std::cout << "---------------------\n";
    std::cout << "1. Celsius to Fahrenheit\n";
    std::cout << "2. Fahrenheit to Celsius\n";
    std::cout << "3. Celsius to Kelvin\n";
    std::cout << "4. Kelvin to Celsius\n";
    std::cout << "5. Fahrenheit to Kelvin\n";
    std::cout << "6. Kelvin to Fahrenheit\n";
    std::cout << "Enter your choice (1-6): ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            std::cout << "Temperature in Fahrenheit: " << celsiusToFahrenheit(temperature) << std::endl;
            break;
        case 2:
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> temperature;
            std::cout << "Temperature in Celsius: " << fahrenheitToCelsius(temperature) << std::endl;
            break;
        case 3:
            std::cout << "Enter temperature in Celsius: ";
            std::cin >> temperature;
            std::cout << "Temperature in Kelvin: " << celsiusToKelvin(temperature) << std::endl;
            break;
        case 4:
            std::cout << "Enter temperature in Kelvin: ";
            std::cin >> temperature;
            std::cout << "Temperature in Celsius: " << kelvinToCelsius(temperature) << std::endl;
            break;
        case 5:
            std::cout << "Enter temperature in Fahrenheit: ";
            std::cin >> temperature;
            std::cout << "Temperature in Kelvin: " << fahrenheitToKelvin(temperature) << std::endl;
            break;
        case 6:
            std::cout << "Enter temperature in Kelvin: ";
            std::cin >> temperature;
            std::cout << "Temperature in Fahrenheit: " << kelvinToFahrenheit(temperature) << std::endl;
            break;
        default:
            std::cout << "Invalid choice. Please enter a number from 1 to 6." << std::endl;
            break;
    }

    return 0;
}
