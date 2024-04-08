
#include <iostream>
#include <cmath>
#include <graphics.h>

void drawLineDDA(int x0, int y0, int x1, int y1) {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Calculate dx and dy
    float dx = x1 - x0;
    float dy = y1 - y0;

    // Determine the number of steps to take
    float steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy);

    // Calculate the increments
    float xIncrement = dx / steps;
    float yIncrement = dy / steps;

    // Initialize starting point
    float x = x0;
    float y = y0;

    // Draw the line
    for (int i = 0; i <= steps; i++) {
        putpixel(round(x), round(y), WHITE); // Round the coordinates to nearest integer
        x += xIncrement;
        y += yIncrement;
    }

    // Display equation of the line
      outtextxy(2, 2, "Q1.Draw a line using DDA Algorithm,developed by Simranjit Singh,BCA 6th,Roll no.219922");


    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();
}

int main() {
    // Coordinates of the endpoints of the line
    int x0 = 100, y0 = 100, x1 = 300, y1 = 200;

    // Draw line using DDA algorithm
    drawLineDDA(x0, y0, x1, y1);

    return 0;
}
