// // Program to change the size of an object

// #include <iostream>
// #include <graphics.h>

// void scaleObject(int x[], int y[], int n, float scaleX, float scaleY) {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");
//     int xc = 0, yc = 0;
//     for (int i = 0; i < n; i++) {
//         x[i] = xc + (x[i] - xc) * scaleX;
//         y[i] = yc + (y[i] - yc) * scaleY;
//     }
//     drawpoly(n, x);
//     outtextxy(2, 2, "Q9.Change the size of an object,developed by Simranjit Singh,BCA 6th,Roll no.219922");
//     getch();
//     closegraph();
// }

// int main() {
//     int x[] = {100, 200, 300, 100};
//     int y[] = {100, 200, 100, 100};
//     int n = sizeof(x) / sizeof(x[0]);
//     float scaleX = 1.5, scaleY = 0.5;
//     scaleObject(x, y, n, scaleX, scaleY);
//     return 0;
// }
#include <iostream>
#include <graphics.h>

void resizeCircle(int x, int y, int radius, int newSize) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    outtextxy(2, 2, "Q9.Change the size of an object,developed by Simranjit Singh,BCA 6th,Roll no.219922");

    // Draw the original circle
    circle(x, y, radius);

    // Draw the resized circle
    circle(x, y, newSize);

    getch();
    closegraph();
}

int main() {
    int x = 200; // X coordinate of the center
    int y = 200; // Y coordinate of the center
    int radius = 50; // Original radius of the circle
    int newSize = 100; // New size of the circle

    resizeCircle(x, y, radius, newSize);

    return 0;
}
