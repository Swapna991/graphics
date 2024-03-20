/*Bresenham circle drawing algorithm*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>

#define Round(a) ((int)(a+0.5))

void main()
{
    clrscr();
    float xc,yc,r;
    printf("\n Enter Co-ordinates of the Center: ");
    scanf("%f%f",&xc,&yc);
    printf("Enter Radius: ");
    scanf("%f",&r);
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"C:\\TC\\BGI");
    float dD,delta,x,y;
    x=0;
    y=r;
    dD=2*(1-r);
    while(y>x)
    {
	putpixel(Round(xc+x), Round(yc+y),5);
	putpixel(Round(xc-x), Round(yc+y),5);
	putpixel(Round(xc+x), Round(yc-y),5);
	putpixel(Round(xc-x), Round(yc-y),5);
	putpixel(Round(xc+y), Round(yc+x),5);
	putpixel(Round(xc+y), Round(yc-x),5);
	putpixel(Round(xc-y), Round(yc+x),5);
	putpixel(Round(xc-y), Round(yc-x),5);

	if(dD<0)
	{
	    delta=2*dD+2*y-1;
	    if(delta<=0)
	    {
		x=x+1;
		dD+=2*x+1;

			}
			else
			{
				x=x+1;
				y=y-1;
				dD+=2*(x-y)+1;
			}
		}
		else if(dD>=0)
		{
		 delta=2*(x-dD)+1;
		 if(delta<0)
		 {
			y=y+1;
			dD+=1-2*y;
			 }
			 else
			 {
				x=x+1;
				y=y-1;
				dD+=2*(x-y)+1;
			 }
		}
	}
	getch();
	closegraph();
}
