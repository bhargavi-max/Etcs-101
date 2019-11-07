#include<dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int  midx, midy,i,x,y,j;
   int radius = 100;

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

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   // x=0;
   // y=400;
   setcolor(getmaxcolor());



   /* draw the circle */
   for(i=0;i<181;i++)
   {
    rectangle(0,0,getmaxx(),getmaxy());
   rectangle(600,0,getmaxx(),getmaxy());
   circle (midx,midy, radius);
   midx+=1;
   delay(50);
   cleardevice();
   }
   for(j=362;j>0;j--)
   {
    rectangle(0,0,getmaxx(),getmaxy());
   rectangle(600,0,getmaxx(),getmaxy());
    circle (midx,midy, radius);
    midx-=1;
    delay(50);
    cleardevice();
    }

  // pie
   /* clean up */

   getch();
   closegraph();
   return 0;
}
