#include<stdio.h>

#include-graphics.ho

#include<math.h

float round float a

void main()

int gd DETECT, gin

//gd=graphics driver (detects best graphics driver and assigns it as default, gm-graphics

int x1,y1,x2,y2, steps,k;

float siner, yiner,s,y,de, dy

printf("enter x1,y

scanf("%d%d",&x,&yl

printf("enter x2,2

scanf("%d%d",&x2 y2)

initgraph(&gd.&igm,"c:\\turboc3\\BG/");//initializes the graph

if(abs(da)>abs(diy))

steps-ales/da),

stepswabs(dy), sincdx/steps;

yincrody/steps;

for(k1ksteps;k++)

delay(100);//for seeing the line drawing process slowly.

x+xiner

yteyiner putpixel(round(x).round(y) WHITE);

outtestxy(200.20. "DDA"); // for printing text at desired screen location,

outtestxy(x1+5,1-5,"(x1,y1)) outtextey(x2+5,2+5, "(x2,y2)"

getch:

closegraph(); //closes the graph and comes back to previous graphic mode.

float round float al

int be 0.5 return

1