#include <iostream>
#include <string>

class Employee {
private:
    std::string name;
    int employeeID;
    double salary;

public:
    // Constructor to initialize the member variables
    Employee(const std::string& empName, int empID, double empSalary) 
        : name(empName), employeeID(empID), salary(empSalary) {
    }

    // Member function to display employee information
    void displayEmployeeInfo() const {
        std::cout << "Employee ID: " << employeeID << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Salary: $" << salary << std::endl;
    }

    // Member function to set salary based on performance
    void setSalaryBasedOnPerformance(double performanceScore) {
        // Assuming a simple formula for salary adjustment based on performance
        salary = salary * (1 + performanceScore / 100.0);
    }
};

int main() {
    // Creating an Employee object using the constructor
    Employee emp1("John Doe", 1001, 50000.0);

    // Displaying initial employee information
    std::cout << "Initial Employee Information:" << std::endl;
    emp1.displayEmployeeInfo();

    // Setting salary based on performance
    double performanceScore;
    std::cout << "Enter performance score (in percentage): ";
    std::cin >> performanceScore;

    emp1.setSalaryBasedOnPerformance(performanceScore);

    // Displaying updated employee information
    std::cout << "\nUpdated Employee Information:" << std::endl;
    emp1.displayEmployeeInfo();

    return 0;
}

