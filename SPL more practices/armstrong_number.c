#include <stdio.h>
#include <math.h>

int main () {

int n, digit, count, sum=0, power;
printf ("Enter a Number: ");
scanf ("%d", &n);
int num=n;

while (n!=0) {
    n=n/10;
    count++;
}
power=count;
n=num;

while (n!=0) {
    digit=n%10;
    sum=sum+pow(digit, power);
    n=n/10;
}
if (num==sum) {
    printf ("%d is an Armstrong Number", num);
}
else {
    printf ("%d is not an Armstrong Number", num);
}
return 0;
}
