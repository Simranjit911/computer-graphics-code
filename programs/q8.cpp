
#include <iostream>
#include <graphics.h>
#include <cmath>

void rotateCircle(int x, int y, int radius, int angle) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Calculate the coordinates of the new position after rotation
    float newX = x + radius * cos(angle * M_PI / 180);
    float newY = y + radius * sin(angle * M_PI / 180);
    outtextxy(2, 2, "Q8.Rotate an object from one position to another, developed by Simranjit Singh, BCA 6th, Rollno.219922");

    // Draw the circle at the new position
    circle(newX, newY, radius);

    // Draw a line connecting the old and new positions for visualization
    line(x, y, newX, newY);

    getch();
    closegraph();
}

int main() {
    int x = 200; // X coordinate of the center
    int y = 200; // Y coordinate of the center
    int radius = 50; // Radius of the circle
    int angle = 45; // Angle of rotation in degrees

    rotateCircle(x, y, radius, angle);

    return 0;
}
