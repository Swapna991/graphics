/*DDA Line Drawing Algorithm*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define round(a)((int)(a+0.05))
void LineDDA(int,int,int,int);
void main()
{
	clrscr();
	int x1,y1,x2,y2;
	printf("Enter Starting Co-ordinates:-");
	scanf("%d%d",&x1,&y1);
	printf("Enter Ending Co-ordinates:-");
	scanf("%d%d",&x2,&y2);
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
	LineDDA(x1,y1,x2,y2);
	getch();
	closegraph();
}
void LineDDA(int xa,int ya,int xb,int yb)
{
	int dx=xb-xa;
	int dy=yb-ya;
	int steps,k;
	float xinc,yinc,x=xa,y=ya;
	if(abs(dx)>abs(dy))
	{
		steps=abs(dx);
	}
	else
	{
		steps=abs(dy);
	}
	xinc=dx/(float)steps;
	yinc=dy/(float)steps;
	putpixel(round(x),round(y),3);
	for(k=0;k<steps;k++)
	{
		x+=xinc;
		y+=yinc;
		putpixel(round(x),round(y),3);
	}
}

