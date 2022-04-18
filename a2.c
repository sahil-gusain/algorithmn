#include<graphics.h>
#include<stdio.h>
int main()
{
 int gd=DETECT,gm,maxx,midy,i;
 initgraph(&gd,&gm,"");
 maxx=getmaxx();
 midy=getmaxy();
 for(i=0;i<maxx-100;i++)
 {
  cleardevice();
  setcolor(WHITE);
  line(0, midy + 37, maxx, midy + 37);
  setcolor(YELLOW);
  line(i, midy + 23, i, midy);
  line(i, midy, 40 + i, midy - 20);
  line(40 + i, midy - 20, 80 + i, midy - 20);
  line(80 + i, midy - 20, 100 + i, midy);
  line(100 + i, midy, 120 + i, midy);
  line(120 + i, midy, 120 + i, midy + 23);
  line(0 + i, midy + 23, 18 + i, midy + 23);
  arc(30 + i, midy + 23, 0, 180, 12);
  line(42 + i, midy + 23, 78 + i, midy + 23);
 
  line(43 + i, midy - 15, 57 + i, midy - 15);
  line(57 + i, midy - 15, 57 + i, midy);
  line(57 + i, midy, 28 + i, midy);
  line(62 + i, midy, 62 + i, midy - 15);
  floodfill(5 + i, midy + 22, YELLOW);
  setcolor(BLUE);
  circle(30 + i, midy + 25, 9);
  circle(90 + i, midy + 25, 9);
  floodfill(30 + i, midy + 25, BLUE);
  floodfill(90 + i, midy + 25, BLUE);
  delay(100);
  }
getch();
closegraph();
return 0;
}
  

