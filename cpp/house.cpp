#include <conio.h>
#include <graphics.h>
#include <stdio.h>
int main()
{
    int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    line(50,50,100,100);
    line(50,50,10,100);
    line(10,100,100,100);
    rectangle(10,200,100,100);
    rectangle(40,200,70,160);
    line(50,50,200,50);
    line(200,50,250,100);
    rectangle(100,200,250,100);
    circle(50,80,10);
    getch();
    closegraph();
    return 0;
}