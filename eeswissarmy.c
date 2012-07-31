/**
 * @author Søren Nørgaard
 * @date 2012-08-01
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Prototypes */
int resistorColorCode();
int capacitorCode();

/* Main */
int main (int argc, char *argv[]){
  resistorColorCode();
  
  return 0;
}

int resistorColorCode(){
  double col[3];
  char tol;
  double res;
  printf ("4 band resistor code\n");
  printf ("\
0: Black\n\
1: Brown\n\
2: Red\n\
3: Orange\n\
4: Yellow\n\
5: Green\n\
6: Blue\n\
7: Violet\n\
8: Gray\n\
9: White\n\n\
\
g: Gold\n\
s: Silver\n\n");
  printf ("Please enter resistor colors seperated by whitespace\n");
  scanf ("%lf %lf %lf %c", &col[0], &col[1], &col[2], &tol);

  res = (10*col[0] + col[1]) * pow(10, col[2]);
  printf ("\n%.0f ohm - ",res);

  switch (tol){
    case 'g':
      printf ("5\%\n");
      break;
    case 's':
      printf ("10\%\n");
      break;
    default:
      printf ("\nInvalid tolerance\n");
      break;
  }

  return 0;
}
int capacitorCode(){
  return 0;
}
