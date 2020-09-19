#include<stdio.h>
#include<cs50.h>
int pztfNumber(){
    int num;
    do{
    num=get_int("Height");
}while(num<=0);
    return num;
}
int main(){
int a;
while(true){ 
a=pztfNumber();
if(a<=1 || a<=8){
    int i;int j;int k;	int r=a;
    for (i = 1; i <= r; i++)
        {
            for (j = 1; j <= r - i; j++)
            {
                printf(" ");
            }
            int l;
            for (k = 1; k <= i; k++)
            {
                l=k;
                printf("#");
                
            }
printf("  ");
            for(int s=1;s<=l;s++){
                    printf("#");
                } 
            printf("\n");
        }
       printf("");


    break;
}

}
}
  
