#include<stdio.h>  
#include<conio.h>  
#include<graphics.h>  
void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
        delay(1);  
        putpixel(x,y,fillColor);  
        flood(x+1,y,fillColor,defaultColor);  
        flood(x-1,y,fillColor,defaultColor);  
        flood(x,y+1,fillColor,defaultColor);  
        flood(x,y-1,fillColor,defaultColor);  
    }  
}    
int main()  
{  
    int gd=DETECT,gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";  
    initgraph(&gd,&gm,path);  
    rectangle(50,50,250,250);  
    flood(55,55,10,0);  
    getch(); 
    closegraph();    
    return 0;
}  
