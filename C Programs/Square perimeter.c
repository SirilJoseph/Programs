#include <stdio.h>
#include <conio.h>
 
int main(){
 float side, perimeter;
 printf("Enter length of side of Square\n");
 scanf("%f", &side);
 // Perimeter of Square = 4 X Side
 perimeter = 4*side;
 printf("Perimeter of Square : %0.4f\n", perimeter);
  
 getch();
 return 0;
}
