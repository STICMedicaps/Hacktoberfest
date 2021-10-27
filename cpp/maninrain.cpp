#include <stdio.h>
#include <graphics.h>
#include <conio.h>
int main()
{
	int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    for (int i = 0; i < 650; i++)
    {
    	circle(40 + i,330,30);//face
    	circle(30 + i,320,3);//l eye
        arc(40 + i,335,225,315,10);//smile
    	circle(50 + i,320,3);//r eye
    	line(40 + i,360,40 + i,400);//bbone
    	line(40 + i,376,70 + i,355);//hand
    	line(40 + i,376,75 + i,355);//hand
        line(75 + i,355,75 + i,260);//umb
        arc(75 + i,260,0,180,75);//umb
        line(0 + i,260,150 + i,260);//umb
        if (i % 2 == 0)
        {
          line(20 + i,450,40 + i,400);//l leg
          line(40 + i,400,60 + i,450);//r leg  
      }
      else
      {
            line(45 + i,450,40 + i,400);//l leg
            delay(5);
        }
        
        line(0,450,650,450);//path
        
        line(400 + i,10 + i,401 + i,1 + i);//rain
        line(410 + i,10 + i,411 + i,1 + i);//rain
        line(420 + i,15 + i,421 + i,6 + i);//rain
        line(390 + i,10 + i,391 + i,1 + i);//rain
        line(380 + i,17 + i,381 + i,8 + i);//rain
        line(370 + i,10 + i,371 + i,1 + i);//rain
        line(360 + i,10 + i,361 + i,1 + i);//rain
        line(350 + i,14 + i,351 + i,5 + i);//rain
        line(430 + i,10 + i,431 + i,1 + i);//rain
        line(340 + i,10 + i,341 + i,1 + i);//rain
        line(330 + i,10 + i,331 + i,1 + i);//rain
        line(110 + i,20 + i,111 + i,11 + i);//rain
        line(120 + i,10 + i,121 + i,1 + i);//rain
        line(130 + i,10 + i,131 + i,1 + i);//rain
        line(140 + i,15 + i,141 + i,6 + i);//rain
        line(150 + i,10 + i,151 + i,1 + i);//rain
        line(160 + i,17 + i,161 + i,8 + i);//rain
        line(170 + i,10 + i,171 + i,1 + i);//rain
        line(180 + i,10 + i,181 + i,1 + i);//rain
        line(190 + i,14 + i,191 + i,5 + i);//rain
        line(210 + i,10 + i,211 + i,1 + i);//rain
        line(220 + i,10 + i,221 + i,1 + i);//rain
        line(230 + i,10 + i,231 + i,1 + i);//rain
        line(240 + i,20 + i,241 + i,11 + i);//rain
        line(10 + i,20 + i,11 + i,11 + i);//rain
        line(20 + i,10 + i,21 + i,1 + i);//rain
        line(30 + i,10 + i,31 + i,1 + i);//rain
        line(40 + i,15 + i,41 + i,6 + i);//rain
        line(50 + i,10 + i,51 + i,1 + i);//rain
        line(60 + i,17 + i,61 + i,8 + i);//rain
        line(70 + i,10 + i,71 + i,1 + i);//rain
        line(80 + i,10 + i,81 + i,1 + i);//rain
        line(90 + i,14 + i,91 + i,5 + i);//rain
        line(10 ,20 + i,11 ,11 + i);//rain
        line(20 ,10 + i,21 ,1 + i);//rain
        line(30 ,10 + i,31 ,1 + i);//rain
        line(40 ,15 + i,41 ,6 + i);//rain
        line(50 ,10 + i,51 ,1 + i);//rain
        line(60 ,17 + i,61 ,8 + i);//rain
        line(70 ,10 + i,71 ,1 + i);//rain
        line(80 ,10 + i,81 ,1 + i);//rain
        line(90 ,14 + i,91 ,5 + i);//rain
        line(110,20 + i,111,11 + i);//rain
        line(120,10 + i,121,1 + i);//rain
        line(130,10 + i,131,1 + i);//rain
        line(140,15 + i,141,6 + i);//rain
        line(150,10 + i,151,1 + i);//rain
        line(160,17 + i,161,8 + i);//rain
        line(170,10 + i,171,1 + i);//rain
        line(180,10 + i,181,1 + i);//rain
        line(190,14 + i,191,5 + i);//rain
        line(210,10 + i,211,1 + i);//rain
        delay(150);
        cleardevice();     
    }
    
    getch();
    closegraph();
    return 0;
}