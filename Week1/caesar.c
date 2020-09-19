#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

 int main(int argc,string argv[])
 {
string code=get_string("plaintest : ");
//int plus=get_int("number :");
int plus=strlen(argv[1]);
for(int i=0;i<strlen(code);i++){
    if(islower(code[i])){
      if(code[i]+plus>122){
        int m;
        m=(code[i]+plus)%122;
        code[i]=96+m;
    }else{
        code[i]=code[i]+plus;
    }
    }
    if(isupper(code[i])){
    if(code[i]+plus>90){
        int s;
        s=(code[i]+plus)%90;
        code[i]=64+s;
    }else{
        code[i]=code[i]+plus;
    }   
    }
}
printf("ciphertext :");
for(int m=0;m<strlen(code);m++){
    printf("%c",code[m]);
}

 }

 
