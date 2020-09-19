#include<stdio.h>
#include<cs50.h>
int main(){
    int quarter;
int dime;int nickel;int penny;int money;
do{
 money=get_float("Money : ");
}while(money<0);
//printf("%.2f",money);
    float price=9.15;
    float ext_one=price-money;
printf("extone = %.2f  \n",ext_one);
    float newone=ext_one*100;
printf("%.2f \n",newone);
   
    int as=(int)newone;
    int m=(int)newone;
    quarter=as/25;
    m%=25;
    dime=m/10;
    m%=10;
    nickel=m/5;
    m%=5;
    penny=m/1;
    m%=1;
    
    
printf("q = %i \n",quarter);
printf("d =%i \n",dime);
printf("n =%i \n",nickel);
printf("p =%i \n",penny);

printf("%i \n",m);


    
}