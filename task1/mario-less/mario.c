#include<stdio.h>
#include<cs50.h>

int height(int);
int main(void){
int Height;
do{
    Height=get_int("Height?");
}while(Height<1);
int i;
for(i=0;i<Height;i++){
    for(int j=0;j<=i;j++){
        printf("#");
    }
    printf("\n");
}





}




