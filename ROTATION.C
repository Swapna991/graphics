/*Rotate a line with respect to its origin*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void rotateLine(int x1,int y1,int x2, int y2,double deg)
{
	int r,c,k;
	double rad,a[2][2],m[2][2],rot[2][2];
	a[0][0]=x1;
	a[0][1]=y1;
	a[1][0]=x2;
	a[1][1]=y2;

	rad=(deg*(22/7))/180;

	rot[0][0]=cos(rad);
	rot[0][1]=sin(rad);
	rot[1][0]=-sin(rad);
	rot[1][1]=cos(rad);

	for(r=0;r<2;r++)
	for(c=0;c<2;c++)
	{
		m[r][c]=0;
		for(k=0;k<2;k++)

	m[r][c]=m[r][c]+a[r][k]*rot[k][c];
	}
	x1=m[0][0];
	y1=m[0][1];
	x2=m[1][0];
	y2=m[1][1];
	setcolor(3);
	line(x1,y1,x2,y2);
}
void main()
{
	 clrscr();
	int x1,y1,x2,y2;
	double deg;
	int gd=DETECT,gm;
	printf("Enter Coordinates of Starting Point of line(x,y): ");
	scanf("%d%d",&x1,&y1);
    printf("Enter Coordinates of Ending Point of line(x,y): ");
    scanf("%d%d",&x2,&y2);
    printf("Enter Angle of rotation in degrees: ");
    scanf("%lf",&deg);
    initgraph(&gd,&gm,"");
    line(x1,y1,x2,y2);
    getch();
    rotateLine(x1,y1,x2,y2,deg);
    getch();
    getch();
    closegraph();
}
