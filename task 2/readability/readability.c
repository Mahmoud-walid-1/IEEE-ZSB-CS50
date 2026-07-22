#include<stdio.h>
#include<cs50.h>
#include<string.h>


int main(void){
string text=get_string("text:");
int t=0;
int w=1;
int s=0;

for(int i=0;i<strlen(text);i++){
int x=text[i];
if(x>='a'& x<='z' ||x>='A'&x<='Z'){
t++;
}

if(x==' '){
w++;
}
if(x=='.' ||x=='!' ||x=='?'){
    s++;
}






}
float L=((float)t/w)*100.0;
float S=((float)s/w)*100.0;

float index=0.0588*L-0.296*S-15.8;

if(index<1){printf("Before Grade 1\n");}
else if((int) index>1&index<=15){
printf("Grade %.0f\n",index);
}
else{printf("Grade 16+\n");}

}

