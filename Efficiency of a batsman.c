#include <stdio.h> 
#include<math.h> 
int main() 
{ 
  int n; 
  printf("Enter match number : "); 
  scanf("%d",&n); 
  int batsman1[n]; 
  int batsman2[n]; 
  int i; 
  int sum1=0; 
  int sum2=0;

printf("Enter Batsman1 score : ");
for(i=0;i<n;i++)
{
    scanf("%d",&batsman1[i]);
    sum1=sum1+batsman1[i];
}
int x1=sum1/n;
int dum1;
int dd1[n];
for(i=0;i<n;i++)
{
    dum1=(batsman1[i]-x1);
    dd1[i]=dum1*dum1;
}
int gum1=0;
for(i=0;i<n;i++)
{
    gum1=gum1+dd1[i];
}
float a1=sqrt(gum1/n);
float b1=(a1/x1)*100;



printf("Enter Batsman2 score : ");
for(i=0;i<n;i++)
{
    scanf("%d",&batsman2[i]);
    sum2=sum2+batsman2[i];
}
int x2=sum2/n;
int dum2;
int dd2[n];
for(i=0;i<n;i++)
{
    dum2=(batsman2[i]-x2);
    dd2[i]=dum2*dum2;
}
int gum2=0;
for(i=0;i<n;i++)
{
    gum2=gum2+dd2[i];
}
float a2=sqrt(gum2/n);
float b2=(a2/x2)*100;


if(b2>b1)
    printf("Batsman 1 is efficient\n");
else
    printf("Batsman 2 is efficient\n");



return 0;
}
