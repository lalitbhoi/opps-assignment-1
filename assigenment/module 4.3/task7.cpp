#include <iostream>

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Constructor to initialize the date
    Date(int d, int m, int y) : day(d), month(m), year(y) {}

    // Setter functions
    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    // Getter functions
    int getDay() const {
        return day;
    }

    int getMonth() const {
        return month;
    }

    int getYear() const {
        return year;
    }

    // Function to validate if the date is valid
    bool isValidDate() const {
        if (year < 0 || month < 1 || month > 12 || day < 1 || day > daysInMonth()) {
            return false;
        }
        return true;
    }

private:
    // Helper function to get the number of days in the current month
    int daysInMonth() const {
        const int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days = daysInMonth[month];
        // Adjust for leap year if it's February
        if (month == 2 && isLeapYear()) {
            days++;
        }
        return days;
    }

    // Helper function to check if the year is a leap year
    bool isLeapYear() const {
        return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
    }
};

int main() {
    // Example usage
    Date myDate(12, 1, 2024);

    // Setting and getting date components
    myDate.setDay(28);
    myDate.setMonth(2);
    myDate.setYear(2022);

    std::cout << "Updated Date: " << myDate.getDay() << "/" << myDate.getMonth() << "/" << myDate.getYear() << std::endl;

    // Checking if the date is valid
    if (myDate.isValidDate()) {
        std::cout << "The date is valid." << std::endl;
    } else {
        std::cout << "The date is invalid." << std::endl;
    }

    return 0;
}

