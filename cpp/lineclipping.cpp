#include <graphics.h>
#include <conio.h>
#include <stdio.h>
#include <math.h>
int main()
{
    int begin[4] = {0, 0, 0, 0}, end[4] = {0, 0, 0, 0}, code[4];
    int xmax = 400, ymax = 400, xmin = 100, ymin = 100, flag = 0;
    float slope;
    int x = 500, y = 200, x1 = 50, y1 = 30, i, xc, yc;
    int gd = DETECT, gm;
    char path[] = "C:\\MinGW\\lib\\libbgi.a";
    initgraph(&gd, &gm, path);
    cleardevice();
    rectangle(xmin, ymin, xmax, ymax);
    line(x, y, x1, y1);
    line(0, 0, 600, 0);
    line(0, 0, 0, 600);
    if (y > ymax)
    {
        begin[0] = 1; // Top
        flag = 1;
    }
    if (y < ymin)
    {
        begin[1] = 1; // Bottom
        flag = 1;
    }
    if (x > xmax)
    {
        begin[2] = 1; // Right
        flag = 1;
    }
    if (x < xmin)
    {
        begin[3] = 1; //Left
        flag = 1;
    }

    //end point of Line
    if (y1 > ymax)
    {
        end[0] = 1; // Top
        flag = 1;
    }
    if (y1 < ymin)
    {
        end[1] = 1; // Bottom
        flag = 1;
    }
    if (x1 > xmax)
    {
        end[2] = 1; // Right
        flag = 1;
    }
    if (x1 < xmin)
    {
        end[3] = 1; //Left
        flag = 1;
    }
    if (flag == 0)
    {
        printf("No need of clipping as it is already in window");
    }
    flag = 1;
    for (i = 0; i < 4; i++)
    {
        code[i] = begin[i] && end[i];
        if (code[i] == 1)
            flag = 0;
    }
    if (flag == 0)
    {
        printf("\n Line is completely outside the window");
    }
    else
    {
        slope = (float)(y1 - y) / (x1 - x);
        if (begin[2] == 0 && begin[3] == 1) //left
        {
            y = y + (float)(xmin - x) * slope;
            x = xmin;
        }
        if (begin[2] == 1 && begin[3] == 0) // right
        {
            y = y + (float)(xmax - x) * slope;
            x = xmax;
        }
        if (begin[0] == 1 && begin[1] == 0) // top
        {
            x = x + (float)(ymax - y) / slope;
            y = ymax;
        }
        if (begin[0] == 0 && begin[1] == 1) // bottom
        {
            x = x + (float)(ymin - y) / slope;
            y = ymin;
        }
        // end points
        if (end[2] == 0 && end[3] == 1) //left
        {
            y1 = y1 + (float)(xmin - x1) * slope;
            x1 = xmin;
        }
        if (end[2] == 1 && end[3] == 0) // right
        {
            y1 = y1 + (float)(xmax - x1) * slope;
            x1 = xmax;
        }
        if (end[0] == 1 && end[1] == 0) // top
        {
            x1 = x1 + (float)(ymax - y1) / slope;
            y1 = ymax;
        }
        if (end[0] == 0 && end[1] == 1) // bottom
        {
            x1 = x1 + (float)(ymin - y1) / slope;
            y1 = ymin;
        }
    }
    delay(1000);
    clearviewport();
    rectangle(xmin, ymin, xmax, ymax);
    line(0, 0, 600, 0);
    line(0, 0, 0, 600);
    setcolor(RED);
    line(x, y, x1, y1);
    getch();
    closegraph();
    return 0;
}