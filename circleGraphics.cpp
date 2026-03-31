#include <graphics.h>
#include <conio.h>

int main() {
    // Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Center (x, y) and radius of the circle
    int x = 250, y = 200, radius = 50;

    // Draw the circle
    circle(x, y, radius);

    getch();
    closegraph();
    return 0;
}

