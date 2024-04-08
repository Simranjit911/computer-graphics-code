// Program to translate an object from one position to another

#include <iostream>
#include <graphics.h>

void translateObject(int x[], int y[], int n, int tx, int ty) {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    for (int i = 0; i < n; i++) {
        x[i] += tx;
        y[i] += ty;
    }
    drawpoly(n, x);
    outtextxy(2, 2, "Q7.Translate an object from one position to another,developed by Simranjit Singh,BCA 6th,Roll no.219922");
    getch();
    closegraph();
}

int main() {
    int x[] = {100, 200, 300, 100};
    int y[] = {100, 200, 100, 100};
    int n = sizeof(x) / sizeof(x[0]);
    int tx = 50, ty = 50;
    translateObject(x, y, n, tx, ty);
    return 0;
}
