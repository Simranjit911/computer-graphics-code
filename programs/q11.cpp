#include <iostream>
#include <graphics.h>

void shearObject(int x[], int y[], int n, float shearX, float shearY) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    for (int i = 0; i < n; i++) {
        x[i] += shearX * y[i];
        y[i] += shearY * x[i];
    }
    drawpoly(n, x);
    outtextxy(2, 2, "Q11. Apply shearing effect on an object, developed by Simranjit Singh, BCA 6th, Roll no. 219922");
    getch();
    closegraph();
}

int main() {
    int x[] = {100, 200, 300, 100};
    int y[] = {100, 200, 100, 100};
    int n = sizeof(x) / sizeof(x[0]);
    float shearX = 0.5, shearY = 0.5;
    shearObject(x, y, n, shearX, shearY);
    return 0;
}
