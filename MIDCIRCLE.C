/*Mid-point Circle Drawing Algorithm*/
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void drawcircle(int,int,int);
void point(int,int,int,int);
void main()
{
	clrscr();
	int gd=DETECT,gm=0;
	int x,y,r;
	printf("Enter the Center: ");
	scanf("%d%d",&x,&y);
	printf("Enter the Radius: ");
	scanf("%d",&r);
	initgraph(&gd,&gm,"c:\\TC\\BGI");
        drawcircle(x,y,r);
	getch();
	closegraph();
}
void drawcircle(int x1,int y1,int r)
{
	int x=0,y=r,p=1-r;
	point(x1,y1,x,y);
	while(x<y)
	{
		x++;
		if(p<0)
		p+=2*x+1;
		else
		{
			y--;
			p+=2*(x-y)+1;
		}
		point(x1,y1,x,y);
	}
}
void point(int xctr,int yctr,int x,int y)
{
	putpixel(xctr+x,yctr+y,1);
	putpixel(xctr-x,yctr+y,1);
	putpixel(xctr+x,yctr-y,1);
	putpixel(xctr-x,yctr-y,1);
	putpixel(xctr+y,yctr+x,1);
	putpixel(xctr+y,yctr-x,1);
	putpixel(xctr-y,yctr+x,1);
	putpixel(xctr-y,yctr-x,1);
}
