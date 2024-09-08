//********************************************************
// fracturing.c
// Author: Christian Hernandez, UCF ID: 5298570
// Date: 9/8/24
// Class: COP 3223C, Professor Parra
//
// Purpose: This program calculates distance, perimeter, area, width, and height based on given points.
// The main purpose of this assignment is to familiarize myself with fracturing my code in C.
// 
// Input: Enter x1: ___, Enter y1: ___, Enter x2: ___, Enter y2: ___
//
// Output: Point #1 entered: x1 = ___; y1= ___, Point #2 entered: x2 = ___; y2= ___,
// The distance between the two points is ___, The perimeter of the city encompassed by your request is ___,
// The area of the city encompassed by your request is ___, The width of the city encompassed by your request is ___
// The height of the city encompassed by your request is ___
// //***

#include <stdio.h>
#include <math.h>

double calculateDistance(){
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter y2: ");
    scanf("%d", &y2);

    int diff_x = x2 - x1;
    int diff_y = y2 - y1;
    int square_x = pow(diff_x,2);
    int square_y = pow(diff_y,2);
    int sum = square_x + square_y;
    double distance = sqrt(sum);

    printf("Point #1 entered: x1 = %d; y1= %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2= %d\n", x2,y2);
    printf("The distance between the two points is %lf\n", distance);

    return distance;
}

double calculatePerimeter(){
    double distance = calculateDistance();
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter y2: ");
    scanf("%d", &y2);

    int height = y1 + y2;
    int width = x1 + x2;
    double perimeter = height + width + distance;


    printf("Point #1 entered: x1 = %d; y1= %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2= %d\n", x2,y2);
    printf("The perimeter of the city encompassed by your request is %lf\n", perimeter);

    return 3;
}

double calculateArea(){
    double diameter = calculateDistance();
    double pi =  3.14159;
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter y2: ");
    scanf("%d", &y2);

    double area = diameter * pi; 

    printf("Point #1 entered: x1 = %d; y1= %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2= %d\n", x2,y2);
    printf("The area of the city encompassed by your request is %lf\n", area);

    return 3;
}

double calculateWidth(){
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter y2: ");
    scanf("%d", &y2);

    int width = x1 + x2;

    printf("Point #1 entered: x1 = %d; y1= %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2= %d\n", x2,y2);
    printf("The width of the city encompassed by your request is %d\n", width);

    return 2;
}

double calculateHeight(){
    int x1 = 0;
    int y1 = 0;
    int x2 = 0;
    int y2 = 0;

    printf("Enter x1: ");
    scanf("%d", &x1);

    printf("Enter x2: ");
    scanf("%d", &x2);

    printf("Enter y1: ");
    scanf("%d", &y1);

    printf("Enter y2: ");
    scanf("%d", &y2);

    int height = y1 + y2;

    printf("Point #1 entered: x1 = %d; y1= %d\n", x1,y1);
    printf("Point #2 entered: x2 = %d; y2= %d\n", x2,y2);
    printf("The height of the city encompassed by your request is %d\n", height);
    
    return 2;
}

int main(int argc, char **argv)
{

    calculateDistance () ;
    calculatePerimeter () ;
    calculateArea () ;
    calculateWidth () ;
    calculateHeight () ;
    
    return 0;
}