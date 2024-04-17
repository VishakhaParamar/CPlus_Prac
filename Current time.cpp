//1st type
#include <iostream>
#include <chrono>
#include <iomanip>

int main() {
    // Get the current time point
    auto now = std::chrono::system_clock::now();

    // Convert to IST (add 5 hours and 30 minutes to UTC)
    auto ist_time = now + std::chrono::hours(5) + std::chrono::minutes(30);

    // Convert to time_t for localtime
    std::time_t ist_time_t = std::chrono::system_clock::to_time_t(ist_time);

    // Convert to tm struct for local time
    std::tm *ist_tm = std::localtime(&ist_time_t);

    // Output the current date and time in IST
    std::cout << "Current Date and Time in India (IST): ";
    std::cout << std::put_time(ist_tm, "%d-%m-%Y %H:%M:%S") << std::endl;

    return 0;
}
//2nd type
#include <iostream>
#include <ctime>

int main() {
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "IST Time: ";
    std::cout << ltm->tm_hour + 5 << ":" << ltm->tm_min+28 << ":" << ltm->tm_sec << std::endl;

    return 0;}
//3rd type
#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Get current time
    time_t currentTime = time(nullptr);
    
    // Convert time to Indian time
    tm* Time = localtime(&currentTime);
    Time->tm_hour += 5; // Add 5 hours for Indian time
    Time->tm_min += 30; // Add 30 minutes for Indian time
    
    // Correct for overflow
    if (Time->tm_min >= 60) {
        Time->tm_min -= 60;
        Time->tm_hour += 1;
    }
    if (Time->tm_hour >= 24) {
        Time->tm_hour -= 24;
    }
    
    // Display Indian date
    cout << "Date: ";
    cout << Time->tm_mday << "-" << (Time->tm_mon + 1) << "-" << (Time->tm_year + 1900) << endl;
    
    // Display Indian time
    cout << "Time: ";
    cout << Time->tm_hour << ":" << Time->tm_min << ":" << Time->tm_sec << endl;

    return 0;
}
