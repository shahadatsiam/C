#include <stdio.h>
int main (){
int age ;
printf("Enter age: ");
scanf("%d",&age);

if(age>=18){
    printf("adult\n");
}
else if(age > 13 && age < 18){
    printf("Tenager\n");
}
else{
printf("child\n");
}
printf ("sei hoise");
return 0;

}