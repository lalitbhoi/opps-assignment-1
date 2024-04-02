#include <iostream>

class Triangle {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor to initialize the sides
    Triangle(double s1, double s2, double s3) : side1(s1), side2(s2), side3(s3) {}

    // Member function to determine if the triangle is equilateral
    bool isEquilateral() const {
        return (side1 == side2) && (side2 == side3);
    }

    // Member function to determine if the triangle is isosceles
    bool isIsosceles() const {
        return (side1 == side2) || (side1 == side3) || (side2 == side3);
    }

    // Member function to determine if the triangle is scalene
    bool isScalene() const {
        return (side1 != side2) && (side1 != side3) && (side2 != side3);
    }
};

int main() {
    // Example usage
    double side1, side2, side3;

    // Input the lengths of the sides from the user
    std::cout << "Enter the length of side 1: ";
    std::cin >> side1;

    std::cout << "Enter the length of side 2: ";
    std::cin >> side2;

    std::cout << "Enter the length of side 3: ";
    std::cin >> side3;

    // Create a Triangle object
    Triangle myTriangle(side1, side2, side3);

    // Check and display the type of the triangle
    if (myTriangle.isEquilateral()) {
        std::cout << "The triangle is equilateral." << std::endl;
    } else if (myTriangle.isIsosceles()) {
        std::cout << "The triangle is isosceles." << std::endl;
    } else if (myTriangle.isScalene()) {
        std::cout << "The triangle is scalene." << std::endl;
    } else {
        std::cout << "Invalid triangle." << std::endl;
    }

}

