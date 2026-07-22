#include<stdio.h>
#include<cs50.h>

int main(void){
int number=get_int("number of element?");
int i;

int arr[number];
for(i=0;i<number;i++){
scanf("%i",&arr[i]);}

for(i=0;i<number;i++){

if(arr[i]!=arr[number-1-i]){
printf("NO\n");
return 0;}

}
    printf("YES\n");
}
