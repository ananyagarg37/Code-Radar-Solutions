#include <stdio.h>
int main (){
    int a , b ;
    scanf("%d",&a);
    scanf("%d",&b);
    printf ("%d %d \n", a , b);
if (a>b){
    printf("Loss");

}
if(a<b){
printf("Profit");
}
else{
    printf("No Profit No Loss");
}
}