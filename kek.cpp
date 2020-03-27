#include<iostream>
#include<math.h>

using namespace std;

void Tinh(double eps)
{
double s=0,n=1,t=4,head=1;
do
{
s+=t*head;
n+=2;
t=4/n;
head=-head;
}
while(t>eps);
cout«"\nValue of Pi wiht eps = "«eps«endl«" is: "«s«endl;

}

void Tinh(float eps)
{
float s=0,n=1,t=4,head=1;
do
{
s+=t*head;
n+=2;
t=4/n;
head=-head;
}
while(t>eps);
cout«"\nValue of Pi wiht eps = "«eps«endl«" is: "«s«endl;

}

void Tinh(long double eps)
{
long double s=0,n=1,t=4,head=1;
do
{
s+=t*head;
n+=2;
t=4/n;
head=-head;
}
while(t>eps);
cout«"\nValue of Pi wiht eps = "«eps«endl«" is: "«s«endl;

}
 
