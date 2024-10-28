#include "../include/convertTo24HourFormat.h"

std::string convertTo24HourFormat(int hours, int mins, const std::string& period) {
    if (period == "pm" && hours != 12) {
        hours += 12;
    } else if (period == "am" && hours == 12) {
        hours = 0;
    }

    std::ostringstream stream;
    stream << (hours < 10 ? "0" : "") << hours << ":" 
           << (mins < 10 ? "0" : "") << mins;

    return stream.str();
}