#include<stdio.h>
#include<graphics.h> 
#include<conio.h>
int main()
{
    int gd=DETECT, gm;
    int x_centre = 100, y_centre = 100, r = 50;  
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    int x = r, y = 0;

    int P = 1 - r;
    while (x > y)
    {
        y++;
        if (P <= 0)
            P = P + 2*y + 1;
        else
        {
            x--;
            P = P + 2*y - 2*x + 1;
        }
        if (x < y){
            break;
        }
        
        putpixel(x + x_centre, y + y_centre, RED);
        putpixel(-x + x_centre, y + y_centre, RED);
        putpixel(x + x_centre, -y + y_centre, RED);
        putpixel( -x + x_centre, -y + y_centre, RED);
        putpixel(y + x_centre, x + y_centre, RED);
        putpixel(-y + x_centre, x + y_centre, RED);
        putpixel(y + x_centre, -x + y_centre, RED);
        putpixel( -y + x_centre, -x + y_centre, RED);
        delay(50);
        
    }
    getch();  
    closegraph();
    return 0;
}