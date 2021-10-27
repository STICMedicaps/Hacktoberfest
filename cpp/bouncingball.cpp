#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    for (int j = 4; j > 0; j--)
    {
        for (int i = 0; i < 350; i++)
        {
            circle(50,25*j + i,20);           
            delay(1);
            cleardevice(); 
        }
        for (int i = 300; i > 0; i--)
        {
            circle(50,20*j + i,20);           
            delay(1);
            cleardevice();
        }
    }
    getch();
    closegraph();
    return 0;
}