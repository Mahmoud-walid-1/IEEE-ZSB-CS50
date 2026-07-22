#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(void){
int digits=get_int("number of digits?");
char x[digits+1];
scanf("%s",x);
int sum=0;
for(int i=0;i<digits;i++){
sum+=x[i]-'0';
}
printf("%d\n",sum);
return 0;










}
