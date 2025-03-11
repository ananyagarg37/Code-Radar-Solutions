#include <stdio.h>
int main() {
     char ch ;
     scanf("%c",&ch);

     if(ch == A){
     printf("Exellent");
}
if(ch == B){
    printf("Good");

}
if(ch == C){
    printf("Average");
}
if(ch ==D){
    printf("Below Average");
}

if(ch == F){
    printf("Fail");
}
else{
    printf("Invalid grade");
}
}