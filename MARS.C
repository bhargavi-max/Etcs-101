#include<dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   /* the names of the fill styles supported */


   int style, x, y,i,j,k;
   char stylestr[40];
   int gdriver = DETECT, gmode, errorcode;
   int radius = 20;
   char buffer[512];
   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "//turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   x = 0;
   y = getmaxy();
   setcolor(getmaxcolor());

   /* draw the circle */
   for(i=0;i<280;i++)
   {
   rectangle(0,0,getmaxx(),getmaxy());
   circle(75,400,70);
   circle(575,60,50);
   circle(90+(i*1.5),385-i,30);
   rectangle(80+(i*1.5),320-i,100+(i*1.5),355-i);
   rectangle(80+(i*1.5),415-i,100+(i*1.5),455-i);
   delay(10);
   cleardevice();
   }
   for(j=0;j<280;j++)
   {
   putpixel(90+(j*1.5),385-j,5);
   rectangle(0,0,getmaxx(),getmaxy());
   circle(75,400,70);
   circle(575,60,50);
   circle(90+(i*1.5),385-i,30);
   rectangle(80+(i*1.5),320-i,100+(i*1.5),355-i);
   rectangle(80+(i*1.5),415-i,100+(i*1.5),455-i);

    }
   getch();
   closegraph();
   return 0;
}