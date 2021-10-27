#include <conio.h>
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    line(0, 0, 50, 50);
    circle(150, 150, 100);
    rectangle(30,30,90,90);
    ellipse(100,100,0,360,50,25);
    arc(400,400,0,150,55);
    getch();
    closegraph();
    return 0;
}