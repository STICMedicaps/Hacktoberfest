#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
        
        for (int i = 0; i < 150; i++)
        {
            circle(40,330,30);//face
            circle(30,320,3);//l eye
            arc(40,335,225,315,10);//smile
            circle(50,320,3);//r eye
            line(40,360,40,400);//bbone
            line(40,376,70,355);//hand
            line(40,376,75,355);//hand    
            line(20,450,40,400);//l leg
            line(40,400,60,450);//r leg  
            line(0,450,650,450);//path
            line(75,355,405 + i,270 + i);
            line(405 + i,270 - i,355 + i,210 - i);
            line(405 + i,270 - i,455 + i,210 - i);
            line(405 + i,150 - i,355 + i,210 - i);
            line(405 + i,150 - i,455 + i,210 - i);
            line(405 + i,150 - i,405 + i,270 - i);
            line(355 + i,210 - i,455 + i,210 - i);
            delay(10);
            cleardevice();
        }
    getch();
    closegraph();
    return 0;
}