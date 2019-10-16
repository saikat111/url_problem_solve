#include<stdio.h>
int main(){
int n1,q1;
float p1,total,total1,total2;
scanf("%d%d%f",&n1,&q1,&p1);
total=(q1 * p1);
scanf("%d%d%f",&n1,&q1,&p1);
total +=(q1 * p1);
printf("VALOR A PAGAR: R$ %.2f",total);

return 0;
}
