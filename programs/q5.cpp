// Program to draw a circle using Bresenham’s circle algorithm

#include <iostream>
#include <graphics.h>

void drawCircleBresenham(int xc, int yc, int r) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    int x = 0, y = r;
    int d = 3 - 2 * r;
    while (x <= y) {
        putpixel(xc + x, yc + y, WHITE);
        putpixel(xc - x, yc + y, WHITE);
        putpixel(xc + x, yc - y, WHITE);
        putpixel(xc - x, yc - y, WHITE);
        putpixel(xc + y, yc + x, WHITE);
        putpixel(xc - y, yc + x, WHITE);
        putpixel(xc + y, yc - x, WHITE);
        putpixel(xc - y, yc - x, WHITE);
        if (d <= 0) {
            d = d + 4 * x + 6;
        } else {
            d = d + 4 * (x - y) + 10;
            y--;
        }
        x++;
    }
    outtextxy(2, 2, "Q5.Circle using Bresenhams Circle algorithm,developed by Simranjit Singh,BCA 6th, Roll no.219922");
    getch();
    closegraph();
}

int main() {
    int xc = 200, yc = 200, r = 100;
    drawCircleBresenham(xc, yc, r);
    return 0;
}
