#include "../include/parse12HourFormat.h"

void parseTime12Hour(const std::string& time12h, int& hours, int& mins, std::string& period) {
    std::istringstream stream(time12h); // 
    
    char colon; // for ":"
    
    stream >> hours >> colon >> mins >> period;
}