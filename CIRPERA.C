/*Circle drawing algorithm perametric method*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
#define Round(a)(int)(a+0.5)
void main(){
 clrscr();
 float xc,yc,r;
 printf("Enter coordinates of the center: ");
 scanf("%f%f",&xc, &yc);
 printf("Enter radius: ");
 scanf("%f",&r);
 int gd=DETECT, gm=0;
 initgraph(&gd,&gm,"C://TC//BGI");
 float dTheta, c,s , x,y, xstep;
 dTheta=1/r;
 c=cos(dTheta);
 s=sin(dTheta);
 x=0;
 y=r;
 while(y>x){
 putpixel(Round (xc+x), Round(yc+y),5);
 putpixel(Round (xc-x),Round(yc+y),5);
 putpixel(Round(xc+x),Round(yc-y),5);
 putpixel(Round(xc-x),Round(yc-y),5);
 putpixel (Round (xc+y),Round(yc+x),5);
 putpixel(Round(xc-y),Round(yc+x),5);
 putpixel(Round(xc+y),Round(yc-x),5);
 putpixel(Round(xc-y),Round(yc-x),5);
 xstep=x;
 x=(x*c)-(y*s);
 y=(y*c)+(xstep*s);
 }
 getch();
 closegraph();
}
