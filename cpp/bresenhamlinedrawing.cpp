#include<stdio.h>  
#include<graphics.h> 
#include<conio.h>    
int main()  
{  
    int gdriver=DETECT, gmode, x0, y0, x1, y1;  
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gdriver, &gmode, path);  
    int dx, dy, p, x, y; 
    x0 = 150;
    y0 = 100; 
    x1 = 400;
    y1 = 300;
    dx=x1-x0;  
    dy=y1-y0;  
    x=x0;  
    y=y0;  
    p=2*dy-dx;  
    while(x < x1)  
    {  
        if(p>=0)  
        {  
            putpixel(x,y,RED);  
            y=y+1;  
            p=p+2*dy-2*dx;  
        }  
        else  
        {  
            putpixel(x,y,RED);  
            p=p+2*dy;
        }    
        x+=1;  
    }
    getch();  
    closegraph();     
    return 0;  
}  