#include <iostream>
#include <graphics.h>

void drawLineDirect(int x0, int y0, int x1, int y1) {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the line
    line(x0, y0, x1, y1);

    // Display "hello" on the screen
    outtextxy(2, 2, "Q2.Draw a line using Direct Method,developed by Simranjit Singh,BCA 6th,Roll no.219922");

    // Wait for a key press
    getch();

    // Close graphics mode
    closegraph();
}

int main() {
    // Coordinates of the endpoints of the line
    int x0 = 100, y0 = 100, x1 = 300, y1 = 200;

    // Draw line using Direct Method and display "hello"
    drawLineDirect(x0, y0, x1, y1);

    return 0;
}
