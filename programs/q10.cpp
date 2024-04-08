
// #include <iostream>
// #include <graphics.h>

// void reflectRectangle(int x1, int y1, int x2, int y2) {
//     int gd = DETECT, gm;
//     initgraph(&gd, &gm, "");
//     outtextxy(2, 2, "Q10. Reflect the object, developed by Simranjit Singh, BCA 6th, Roll no. 219922");

//     // Draw the original rectangle
//     rectangle(x1, y1, x2, y2);

//     // Draw the reflected rectangle
//     int x1_reflect = getmaxx() - x1;
//     int y1_reflect = y1;
//     int x2_reflect = getmaxx() - x2;
//     int y2_reflect = y2;
//     rectangle(x1_reflect, y1_reflect, x2_reflect, y2_reflect);

//     getch();
//     closegraph();
// }

// int main() {
//     int x1 = 100; // X coordinate of the top-left corner
//     int y1 = 100; // Y coordinate of the top-left corner
//     int x2 = 300; // X coordinate of the bottom-right corner
//     int y2 = 200; // Y coordinate of the bottom-right corner

//     reflectRectangle(x1, y1, x2, y2);

//     return 0;
// }
#include <iostream>
#include <graphics.h>

void reflectCircle(int x, int y, int radius) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    outtextxy(2, 2, "Q10. Reflect the object, developed by Simranjit Singh, BCA 6th, Roll no. 219922");

    // Draw the original circle
    setcolor(RED);
    circle(x, y, radius);

    // Reflect the circle horizontally
    setcolor(GREEN);
    circle(getmaxx() - x, y, radius); // Reflecting the circle horizontally by mirroring it across the y-axis

    getch();
    closegraph();
}

int main() {
    int x = 200; // X coordinate of the center
    int y = 200; // Y coordinate of the center
    int radius = 50; // Radius of the circle

    reflectCircle(x, y, radius);

    return 0;
}
