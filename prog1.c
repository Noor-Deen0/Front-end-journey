#include <stdio.h>

    int main (void)  {
        
int n, number, triangularNumber, counter=1,num_of_calc;

printf("how many number of triangular number do you want to calculate");
 
 scanf("%i",&num_of_calc);

        
         
   triangularNumber = 0;
   n=1;
         while (counter <= num_of_calc){{
   triangularNumber+= n;
   ++counter;}
   
      printf ("What triangular number do you want? "); 
      
           scanf ("%i", &number);
      
     while (n <= number){
         ++n;
     }
  
    triangularNumber += n;
     
printf ("Triangular number %i is %i\n\n", number, triangularNumber); 
 

    
} 

return 0;
}