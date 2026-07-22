#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main (void){

string word1=get_string("player 1:");
string word2=get_string("player 2:");
int y=0;


for(int i=0;i<strlen(word1);i++){
int x=word1[i];
if(word1[i]=='a'||word1[i]=='A'){x=1;}
else if(word1[i]=='b'||word1[i]=='B'){x=3;}
else if(word1[i]=='c'||word1[i]=='C'){x=3;}
else if(word1[i]=='d'||word1[i]=='D'){x=2;}
else if(word1[i]=='e'||word1[i]=='E'){x=1;}
else if(word1[i]=='f'||word1[i]=='F'){x=4;}
else if(word1[i]=='g'||word1[i]=='G'){x=2;}
else if(word1[i]=='h'||word1[i]=='H'){x=4;}
else if(word1[i]=='i'||word1[i]=='I'){x=1;}
else if(word1[i]=='j'||word1[i]=='J'){x=8;}
else if(word1[i]=='k'||word1[i]=='K'){x=5;}
else if(word1[i]=='l'||word1[i]=='L'){x=1;}
else if(word1[i]=='m'||word1[i]=='M'){x=3;}
else if(word1[i]=='n'||word1[i]=='N'){x=1;}
else if(word1[i]=='o'||word1[i]=='O'){x=1;}
else if(word1[i]=='p'||word1[i]=='P'){x=3;}
else if(word1[i]=='q'||word1[i]=='Q'){x=10;}
else if(word1[i]=='r'||word1[i]=='R'){x=1;}
else if(word1[i]=='s'||word1[i]=='S'){x=1;}
else if(word1[i]=='t'||word1[i]=='T'){x=1;}
else if(word1[i]=='u'||word1[i]=='U'){x=1;}
else if(word1[i]=='v'||word1[i]=='V'){x=4;}
else if(word1[i]=='w'||word1[i]=='W'){x=4;}
else if(word1[i]=='x'||word1[i]=='X'){x=8;}
else if(word1[i]=='y'||word1[i]=='Y'){x=4;}
else if(word1[i]=='z'||word1[i]=='Z'){x=10;}
else{
    x=0;}



 y+= x;
}

int q=0;
for(int j=0;j<strlen(word2);j++){
int x=word2[j];
if(word2[j]=='a'||word2[j]=='A'){x=1;}
else if(word2[j]=='b'||word2[j]=='B'){x=3;}
else if(word2[j]=='c'||word2[j]=='C'){x=3;}
else if(word2[j]=='d'||word2[j]=='D'){x=2;}
else if(word2[j]=='e'||word2[j]=='E'){x=1;}
else if(word2[j]=='f'||word2[j]=='F'){x=4;}
else if(word2[j]=='g'||word2[j]=='J'){x=2;}
else if(word2[j]=='h'||word2[j]=='H'){x=4;}
else if(word2[j]=='i'||word2[j]=='I'){x=1;}
else if(word2[j]=='j'||word2[j]=='J'){x=8;}
else if(word2[j]=='k'||word2[j]=='K'){x=5;}
else if(word2[j]=='l'||word2[j]=='L'){x=1;}
else if(word2[j]=='m'||word2[j]=='M'){x=3;}
else if(word2[j]=='n'||word2[j]=='N'){x=1;}
else if(word2[j]=='o'||word2[j]=='O'){x=1;}
else if(word2[j]=='p'||word2[j]=='P'){x=3;}
else if(word2[j]=='q'||word2[j]=='Q'){x=10;}
else if(word2[j]=='r'||word2[j]=='R'){x=1;}
else if(word2[j]=='s'||word2[j]=='S'){x=1;}
else if(word2[j]=='t'||word2[j]=='T'){x=1;}
else if(word2[j]=='u'||word2[j]=='U'){x=1;}
else if(word2[j]=='v'||word2[j]=='V'){x=4;}
else if(word2[j]=='w'||word2[j]=='W'){x=4;}
else if(word2[j]=='x'||word2[j]=='X'){x=8;}
else if(word2[j]=='y'||word2[j]=='Y'){x=4;}
else if(word2[j]=='z'||word2[j]=='Z'){x=10;}
else{
    x=0;}



 q+= x;
}

if(y>q){printf("player 1 wins!");}
else if(q>y){printf("player 2 wins!");}
else{printf("tie!");}
}






