#include <stdio.h>
#include <string.h>
int main(void)
{
    int k;
    float s,j,m;
    char p[4];
    char operator;

printf("how many times will you compute\n?");
scanf("%i", &k);

printf("Enter a number to set the content of the accumulator:\n");
    scanf("%f",&s);

for(int i=0; i<k; i++){

getchar();

     printf("Enter the operator you want to work with(+,-,*/):");
     scanf("%c",&operator);
     
     printf("Enter the value of the second operand:");
     scanf("%f",&j);
     
     
     switch(operator)
    { case'+':
        m = s + j; 
     printf("Adding %f to %f gives you %f\n",j,s,m);
      break;
     
     
     
     case'-':
     m = s - j; 
     printf("subracting %f from %f gives you %f\n",j,s,m);
break;


case'*':
      m = s * j;
     printf("multiplying %f by %f gives you %f\n",s,j,m);
      break;


case '/':
      if(j==0){
         printf("Math error(division by zero)\n");}
     else
         m =s / j; 
     printf("dividing %f by %f gives you %f\n",s,j,m);
break;
     

default:
    printf("unkown operator\n");
    return 1;
    break;
}

      printf("Do you want to change the value of accumulator?(Yes/No)");
      scanf("%s", p);
      
     if (strcmp(p, "Yes") == 0 || strcmp(p, "yes") == 0) {
    printf( "Enter the new value:");
          scanf("%f",&s);}
else
{
    s = s; 
    
}
    
}
return 0;
    
}