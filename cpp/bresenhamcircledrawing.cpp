#include <stdio.h>
#include <graphics.h>
int main()
{
    int xc = 100, yc = 100, r = 50;
    int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    int x = 0, y = r;
    int d = 3 - 2 * r;
    putpixel(xc+x, yc+y, RED);
    putpixel(xc-x, yc+y, RED);
    putpixel(xc+x, yc-y, RED);
    putpixel(xc-x, yc-y, RED);
    putpixel(xc+y, yc+x, RED);
    putpixel(xc-y, yc+x, RED);
    putpixel(xc+y, yc-x, RED);
    putpixel(xc-y, yc-x, RED);
    while (y >= x)
    { 
        x++;
        if (d > 0)
        {
            y--;
            d = d + 4 * (x - y) + 10;
        }
        else
            d = d + 4 * x + 6;
        putpixel(xc+x, yc+y, RED);
        putpixel(xc-x, yc+y, RED);
        putpixel(xc+x, yc-y, RED);
        putpixel(xc-x, yc-y, RED);
        putpixel(xc+y, yc+x, RED);
        putpixel(xc-y, yc+x, RED);
        putpixel(xc+y, yc-x, RED);
        putpixel(xc-y, yc-x, RED);
        delay(50);
    } 
    getch();  
    closegraph();
    return 0;
}
