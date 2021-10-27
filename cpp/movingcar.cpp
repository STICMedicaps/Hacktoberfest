#include <graphics.h>
#include <conio.h>
int main()
{
    int gd = DETECT, gm, i;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    for (int i = 0; i < 400; i++)
    {
        rectangle(80 + i, 100, 170 + i, 60);
        rectangle(50 + i, 150, 200 + i, 100);
        circle(80 + i, 165, 15);
        circle(170 + i, 165, 15);
        delay(10);
        cleardevice();
    }
    getch();
    closegraph();
    return 0;
}