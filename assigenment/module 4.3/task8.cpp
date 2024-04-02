#include <iostream>
#include <string>

// Address class to represent the address of a student
class Address {
public:
    std::string street;
    std::string city;
    std::string state;
    std::string zipCode;

    // Constructor to initialize address
    Address(const std::string& street, const std::string& city, const std::string& state, const std::string& zipCode)
        : street(street), city(city), state(state), zipCode(zipCode) {}
};

// Student class with aggregation of Address
class Student {
private:
    std::string name;
    std::string studentClass;
    int rollNumber;
    int marks;
    char grade;
    Address address;  // Aggregation of Address class

public:
    // Constructor to initialize student information and address
    Student(const std::string& name, const std::string& studentClass, int rollNumber, int marks,
            const std::string& street, const std::string& city, const std::string& state, const std::string& zipCode)
        : name(name), studentClass(studentClass), rollNumber(rollNumber), marks(marks),
          address(street, city, state, zipCode) {
        calculateGrade();  // Calculate grade during initialization
    }

    // Function to calculate grade based on marks
    void calculateGrade() {
        if (marks >= 90) {
            grade = 'A';
        } else if (marks >= 80) {
            grade = 'B';
        } else if (marks >= 70) {
            grade = 'C';
        } else if (marks >= 60) {
            grade = 'D';
        } else {
            grade = 'F';
        }
    }

    // Function to display student information
    void displayInfo() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Class: " << studentClass << std::endl;
        std::cout << "Roll Number: " << rollNumber << std::endl;
        std::cout << "Marks: " << marks << std::endl;
        std::cout << "Grade: " << grade << std::endl;

//        // Display address information
//        std::cout << "Address: " << std::endl;
//        std::cout << "Street: " << address.street << std::endl;
//        std::cout << "City: " << address.city << std::endl;
//        std::cout << "State: " << address.state << std::endl;
//        std::cout << "Zip Code: " << address.zipCode << std::endl;
    }
};

int main() {
    // Creating a student object with address using aggregation
    Student student1("Aarohi Gadhavi", "12th Grade", 101, 85, "123 Main St", "Cityville", "Stateville", "12345");

    // Displaying student information
    student1.displayInfo();

    return 0;
}

