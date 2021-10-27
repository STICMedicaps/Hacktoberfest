#include<graphics.h>  
#include<conio.h>  
#include<stdio.h>  
int main()  
{  
    int gd = DETECT ,gm;  
    float x, y,dx,dy,steps;  
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    int x0, xn, y0, yn;  
    initgraph(&gd, &gm, path);    
    x0 = 100 , y0 = 350, xn = 400, yn = 150;  
    dx = (float)(xn - x0);  
    dy = (float)(yn - y0);  
    if(dx>=dy)  
    {
        steps = dx;  
    }  
    else  
    {
        steps = dy;  
    }  
    dx = dx/steps;  
    dy = dy/steps;  
    x = x0;  
    y = y0;  
    for (int i = 1; i <= steps; ++i)
    {  
        putpixel(x, y, RED);  
        x += dx;  
        y += dy;   
    }  
    getch();  
    closegraph();
    return 0;  
}  