// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program calculates the area and perimeter of the rectangle

#include <iostream>

// This function calculates the area and perimeter of the rectangle
int main() {
    // These are the variables
    int length;
    int width;
    int area;
    int perimeter;

    // This is where the user inputs the length and width
    std::cout << "Enter the length of the rectangle: " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle here: " << std::endl;
    std::cin >> width;

    // This is the math for the area and perimeter
    area = length*width;
    perimeter = 2*(length+width);

    // This outputs the answer to the user
    std::cout << "" << std::endl;
    std::cout << "Area is: " << area << "cm^2" << std::endl;
    std::cout << "Perimeter is: " << perimeter << "cm" << std::endl;
}
