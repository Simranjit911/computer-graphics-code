#include <iostream>
#include <graphics.h>

void drawCircleMidpoint(int xc, int yc, int r) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 0, y = r;
    int p = 1 - r;
    while (x <= y) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        if (p < 0)
            p += 2 * x + 1;
        else {
            p += 2 * (x - y) + 1;
            y--;
        }
        x++;
    }
    outtextxy(2, 2, "Q4. Draw a Circle using Midpoint Algorithm,developed by Simranjit Singh, BCA 6th, Roll no. 219922");
    getch();
    closegraph();
}

int main() {
    int xc = 200, yc = 200, r = 100;
    drawCircleMidpoint(xc, yc, r);
    return 0;
}
