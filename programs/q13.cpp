// #include<iostream>
// #include<graphics.h>

// class RectangularCoordinates {
// public:
//     float x_min, y_min, x_max, y_max;
//     RectangularCoordinates(const float x1, const float y1, const float x2, const float y2) {
//         x_min = x1;
//         y_min = y1;
//         x_max = x2;
//         y_max = y2;
//     }
// };

// void apply_window_to_viewport_coordinate_transformation(const RectangularCoordinates, const RectangularCoordinates, int &, int &);
// void Rectangle(const int, const int, const int, const int);
// void Line(const int, const int, const int, const int);

// int main() {

//     int driver = VGA;
//     int mode = VGAHI;
//     initgraph(&driver, &mode, "..\\Bgi");
//     setcolor(15);
//     Line(90, 150, 90, 390);
//     Line(50, 350, 320, 350);
//     Line(400, 150, 400, 390);
//     Line(360, 350, 580, 350);
//     RectangularCoordinates WC(130, 180, 290, 300);
//     RectangularCoordinates VC(440, 230, 550, 300);
//     setcolor(15);
//     Line(90, 180, 95, 180);
//     Line(90, 300, 95, 300);
//     Line(130, 345, 130, 350);
//     Line(290, 345, 290, 350);
//     Line(400, 230, 405, 230);
//     Line(400, 300, 405, 300);
//     Line(440, 345, 440, 350);
//     Line(550, 345, 550, 350);
//     setcolor(15);
//     Rectangle(WC.x_min, WC.y_min, WC.x_max, WC.y_max);
//     Rectangle(VC.x_min, VC.y_min, VC.x_max, VC.y_max);
//     setcolor(15);
//     settextstyle(0, 0, 1);
//     outtextxy(50, 175, "YW");
//     outtextxy(50, 295, "YW");
//     outtextxy(110, 360, "XW");
//     outtextxy(280, 360, "XW");
//     outtextxy(360, 225, "YV");
//     outtextxy(360, 295, "YV");
//     outtextxy(420, 360, "XV");
//     outtextxy(530, 360, "XV");
//     outtextxy(182, 170, "Window");
//     outtextxy(140, 390, "World Coordinates");
//     outtextxy(462, 220, "Viewport");
//     outtextxy(420, 390, "Device Coordinates");
//     settextstyle(2, 0, 4);
//     outtextxy(67, 175, "min");
//     outtextxy(67, 295, "max");
//     outtextxy(127, 360, "min");
//     outtextxy(297, 360, "max");
//     outtextxy(377, 225, "min");
//     outtextxy(377, 295, "max");
//     outtextxy(437, 360, "min");
//     outtextxy(547, 360, "max");
//     int x = 210;
//     int y = 240;
//     putpixel(x, y, 15);
//     setcolor(15);
//     settextstyle(2, 0, 4);
//     outtextxy((x - 20), (y + 3), "(XW,YW)");
//     char Key = NULL;
//     do {
//         Key = getch();
//     } while (Key != 'T' && Key != 't');
//     settextstyle(0, 0, 1);
//     setcolor(0);
//     outtextxy(2, 2, "Q13.Program to map the window to view port mapping,developed by Simranjit Singh,BCA 6th,Rollno.219922");

//     outtextxy(36, 450, " Press 'T' to see the Window-to-Viewport Coordinate Transformation. ");
//     setcolor(15);
//     outtextxy(38, 450, "------------------ ------------------");
//     setcolor(12);
//     outtextxy(222, 450, " Press any Key to exit. ");
//     apply_window_to_viewport_coordinate_transformation(WC, VC, x, y);
//     putpixel(x, y, 14);
//     setcolor(15);
//     settextstyle(2, 0, 4);
//     outtextxy((x - 20), (y + 3), "(XV,YV)");
//     getch();
//     return 0;
// }

// void apply_window_to_viewport_coordinate_transformation(const RectangularCoordinates wc, const RectangularCoordinates vc, int &x, int &y) {
//     float Sx = ((vc.x_max - vc.x_min) / (wc.x_max - wc.x_min));
//     float Sy = ((vc.y_max - vc.y_min) / (wc.y_max - wc.y_min));
//     float Tx = vc.x_min;
//     float Ty = vc.y_min;
//     x = (Tx + (Sx * (x - wc.x_min)));
//     y = (Ty + (Sy * (y - wc.y_min)));
// }

// void Rectangle(const int x_1, const int y_1, const int x_2, const int y_2) {
//     Line(x_1, y_1, x_2, y_1);
//     Line(x_2, y_1, x_2, y_2);
//     Line(x_2, y_2, x_1, y_2);
//     Line(x_1, y_2, x_1, y_1);
// }

// void Line(const int x_1, const int y_1, const int x_2, const int y_2) {
//     int color = getcolor();
//     int x1 = x_1;
//     int y1 = y_1;
//     int x2 = x_2;
//     int y2 = y_2;
//     if (x_1 > x_2) {
//         x1 = x_2;
//         y1 = y_2;
//         x2 = x_1;
//         y2 = y_1;
//     }
//     int dx = abs(x2 - x1);
//     int dy = abs(y2 - y1);
//     int inc_dec = ((y2 >= y1) ? 1 : -1);
//     if (dx > dy) {
//         int two_dy = (2 * dy);
//         int two_dy_dx = (2 * (dy - dx));
//         int p = ((2 * dy) - dx);
//         int x = x1;
//         int y = y1;
//         putpixel(x, y, color);
//         while (x < x2) {
//             x++;
//             if (p < 0)
//                 p += two_dy;
//             else {
//                 y += inc_dec;
//                 p += two_dy_dx;
//             }
//             putpixel(x, y, color);
//         }
//     }
//     else {
//         int two_dx = (2 * dx);
//         int two_dx_dy = (2 * (dx - dy));
//         int p = ((2 * dx) - dy);
//         int x = x1;
//         int y = y1;
//         putpixel(x, y, color);
//         while (y != y2) {
//             y += inc_dec;
//             if (p < 0)
//                 p += two_dx;
//             else {
//                 x++;
//                 p += two_dx_dy;
//             }
//             putpixel(x, y, color);
//         }
//     }
// }
#include<iostream>
#include<graphics.h>

class RectangularCoordinates {
public:
    float x_min, y_min, x_max, y_max;
    RectangularCoordinates(const float x1, const float y1, const float x2, const float y2) {
        x_min = x1;
        y_min = y1;
        x_max = x2;
        y_max = y2;
    }
};

void apply_window_to_viewport_coordinate_transformation(const RectangularCoordinates, const RectangularCoordinates, int &, int &);
void Rectangle(const int, const int, const int, const int);
void Line(const int, const int, const int, const int);

int main() {
    int driver = VGA;
    int mode = VGAHI;
    initgraph(&driver, &mode, "..\\Bgi");

    setcolor(15);
    Line(90, 150, 90, 390);
    Line(50, 350, 320, 350);
    Line(400, 150, 400, 390);
    Line(360, 350, 580, 350);

    RectangularCoordinates WC(130, 180, 290, 300);
    RectangularCoordinates VC(440, 230, 550, 300);

    setcolor(15);
    Line(90, 180, 95, 180);
    Line(90, 300, 95, 300);
    Line(130, 345, 130, 350);
    Line(290, 345, 290, 350);
    Line(400, 230, 405, 230);
    Line(400, 300, 405, 300);
    Line(440, 345, 440, 350);
    Line(550, 345, 550, 350);

    setcolor(15);
    Rectangle(WC.x_min, WC.y_min, WC.x_max, WC.y_max);
    Rectangle(VC.x_min, VC.y_min, VC.x_max, VC.y_max);

    setcolor(15);
    settextstyle(0, 0, 1);
    outtextxy(2, 2, "Q13. Program to map the window to view port mapping, developed by Simranjit Singh, BCA 6th, Rollno.219922");

    outtextxy(50, 175, "YW");
    outtextxy(50, 295, "YW");
    outtextxy(110, 360, "XW");
    outtextxy(280, 360, "XW");
    outtextxy(360, 225, "YV");
    outtextxy(360, 295, "YV");
    outtextxy(420, 360, "XV");
    outtextxy(530, 360, "XV");
    outtextxy(182, 170, "Window");
    outtextxy(140, 390, "World Coordinates");
    outtextxy(462, 220, "Viewport");
    outtextxy(420, 390, "Device Coordinates");

    settextstyle(2, 0, 4);
    outtextxy(67, 175, "min");
    outtextxy(67, 295, "max");
    outtextxy(127, 360, "min");
    outtextxy(297, 360, "max");
    outtextxy(377, 225, "min");
    outtextxy(377, 295, "max");
    outtextxy(437, 360, "min");
    outtextxy(547, 360, "max");

    int x = 210;
    int y = 240;
    putpixel(x, y, 15);
    setcolor(15);
    settextstyle(2, 0, 4);
    outtextxy((x - 20), (y + 3), "(XW,YW)");

    char Key = NULL;
    do {
        Key = getch();
    } while (Key != 'T' && Key != 't');

    settextstyle(0, 0, 1);
    setcolor(0);
    outtextxy(36, 450, " Press 'T' to see the Window-to-Viewport Coordinate Transformation. ");
    setcolor(15);
    outtextxy(38, 450, "------------------ ------------------");
    setcolor(12);
    outtextxy(222, 450, " Press any Key to exit. ");

    apply_window_to_viewport_coordinate_transformation(WC, VC, x, y);
    putpixel(x, y, 14);
    setcolor(15);
    settextstyle(2, 0, 4);
    outtextxy((x - 20), (y + 3), "(XV,YV)");

    getch();
    return 0;
}

void apply_window_to_viewport_coordinate_transformation(const RectangularCoordinates wc, const RectangularCoordinates vc, int &x, int &y) {
    float Sx = ((vc.x_max - vc.x_min) / (wc.x_max - wc.x_min));
    float Sy = ((vc.y_max - vc.y_min) / (wc.y_max - wc.y_min));
    float Tx = vc.x_min;
    float Ty = vc.y_min;
    x = (Tx + (Sx * (x - wc.x_min)));
    y = (Ty + (Sy * (y - wc.y_min)));
}

void Rectangle(const int x_1, const int y_1, const int x_2, const int y_2) {
    Line(x_1, y_1, x_2, y_1);
    Line(x_2, y_1, x_2, y_2);
    Line(x_2, y_2, x_1, y_2);
    Line(x_1, y_2, x_1, y_1);
}

void Line(const int x_1, const int y_1, const int x_2, const int y_2) {
    int color = getcolor();
    int x1 = x_1;
    int y1 = y_1;
    int x2 = x_2;
    int y2 = y_2;
    if (x_1 > x_2) {
        x1 = x_2;
        y1 = y_2;
        x2 = x_1;
        y2 = y_1;
    }
    int dx = abs(x2 - x1);
    int dy = abs(y2 - y1);
    int inc_dec = ((y2 >= y1) ? 1 : -1);
    if (dx > dy) {
        int two_dy = (2 * dy);
        int two_dy_dx = (2 * (dy - dx));
        int p = ((2 * dy) - dx);
        int x = x1;
        int y = y1;
        putpixel(x, y, color);
        while (x < x2) {
            x++;
            if (p < 0)
                p += two_dy;
            else {
                y += inc_dec;
                p += two_dy_dx;
            }
            putpixel(x, y, color);
        }
    }
    else {
        int two_dx = (2 * dx);
        int two_dx_dy = (2 * (dx - dy));
        int p = ((2 * dx) - dy);
        int x = x1;
        int y = y1;
        putpixel(x, y, color);
        while (y != y2) {
            y += inc_dec;
            if (p < 0)
                p += two_dx;
            else {
                x++;
                p += two_dx_dy;
            }
            putpixel(x, y, color);
        }
    }
}
