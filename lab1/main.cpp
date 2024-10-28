#include <iostream>
#include "./src/convertTo24HourFormat.cpp"
#include "./src/parse12HourFormat.cpp"

int main() {
    std::string time12h = "8:30 pm";
    int hours, mins;
    std::string period;

    std::cout << "Enter 12-hour format time (e. g. \"8:30 pm\"): ";
    std::getline(std::cin, time12h);

    parseTime12Hour(time12h, hours, mins, period);

    std::string time24h = convertTo24HourFormat(hours, mins, period);

    std::cout << "24-hour format: " << time24h << std::endl;

    return 0;
}
