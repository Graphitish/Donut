#include <stdio.h>
#include <string.h>
#include <math.h>
#include <conio.h>
k;double sin(),cos();main(){float A=0,B=0,i,j,z[1760];char b[1760];
char*cc[]={"\x1b[?25l\x1b[37m","\x1b[32m","\x1b[31m","\x1b[33m","\x1b[34m","\x1b[35m","\x1b[36m","\x1b[97m","\x1b[92m"};
printf("\x1b[2J");for(;;){
 if(kbhit()){char q=getch(); if(q>='1'&&q<='9') printf("%s",cc[q-'1']);}
 memset(b,32,1760); memset(z,0,7040);
 for(j=0;6.28>j;j+=0.07) for(i=0;6.28>i;i+=0.02){
  float c=sin(i),d=cos(j),e=sin(A),f=sin(j),g=cos(A),h=d+2,
        D=1/(c*h*e+f*g+5),l=cos(i),m=cos(B),n=sin(B),t=c*h*g-f*e;
  int x=40+30*D*(l*h*m-t*n), y=12+15*D*(l*h*n+t*m), o=x+80*y,
      N=8*((f*e-c*d*g)*m-c*d*e-f*g-l*d*n);
  if(22>y&&y>0&&x>0&&80>x&&D>z[o]) z[o]=D, b[o]=".,-~:;=!*#$@"[N>0?N:0];
 }
 printf("\x1b[H"); for(k=0;1761>k;k++) putchar(k%80?b[k]:10);
 A+=0.04; B+=0.02;
}
}
