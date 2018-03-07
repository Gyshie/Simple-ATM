#include<stdio.h>
void main()
{
printf("WELCOME TO OUR BANK!\n");
printf("====================\n");
int rs,a,b,c,d,e,f,g,h,i,j;
printf("Enter the amount:");
scanf("%d",&rs);

while(rs>=5000)
{
a=rs/5000;
printf("%d notes: %d\n",5000,rs/5000);
break;
}
rs=rs%5000;
while (rs>=2000)
{
b=rs/2000;
printf("%d notes: %d\n",2000,rs/2000);
break;
}
rs=rs%2000;
while(rs>=1000)
{
c=rs/1000;
printf("%d notes: %d\n",1000,rs/1000);
break;
}
rs=rs%1000;
while(rs>=500)
{
d=rs/500;
printf("%d notes: %d\n",500,rs/500);
break;
}
rs=rs%500;
while(rs>=100)
{
e=rs/100;
printf("%d notes: %d\n",100,rs/100);
break;
}
rs=rs%100;
while(rs>=50)
{
f=rs/50;
printf("%d notes: %d\n",50,rs/50);
break;
}
rs=rs%50;
while(rs>=10)
{
g=rs/10;
printf("%d notes: %d\n",10,rs/10);
break;
}
rs=rs%10;
while(rs>=5)
{
h=rs/5;
printf("%d coins: %d\n",5,rs/5);
break;
}
rs=rs%5;
while(rs>=2)
{
i=rs/2;
printf("%d coins: %d\n",2,rs/2);
break;
}
rs=rs%2;
while(rs>=1)
{
j=rs/1;
printf("%d coins: %d\n",1,rs/1);
break;
}
}