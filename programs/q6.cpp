// Program to draw an ellipse using Midpoint algorithm

#include <iostream>
#include <graphics.h>

void drawEllipseMidpoint(int xc, int yc, int rx, int ry) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 0, y = ry;
    float p = ry * ry - rx * rx * ry + 0.25 * rx * rx;
    while (2 * rx * rx * y >= 2 * ry * ry * x) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        if (p < 0)
            p += 2 * ry * ry * (2 * x + 3);
        else {
            p += 2 * ry * ry * (2 * x + 3) - 4 * rx * rx * (y - 1);
            y--;
        }
        x++;
    }
    p = ry * ry * (x + 0.5) * (x + 0.5) + rx * rx * (y - 1) * (y - 1) - rx * rx * ry * ry;
    while (y >= 0) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        if (p > 0)
            p += -4 * rx * rx * (y - 1);
        else {
            p += 2 * ry * ry * (2 * x + 2) + rx * rx * (3 - 2 * y);
            x++;
        }
        y--;
    }
    outtextxy(2, 2, "Q6.Ellipse using Midpoint algorithm,developed by Simranjit Singh, BCA 6th, Roll no.219922");
    getch();
    closegraph();
}

int main() {
    int xc = 200, yc = 200, rx = 100, ry = 50;
    drawEllipseMidpoint(xc, yc, rx, ry);
    return 0;
}
