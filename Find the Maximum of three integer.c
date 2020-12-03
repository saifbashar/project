
/* Finding the maximum of three integers */
#include <stdio.h>
#include <conio.h>

int maximum( int x, int y, int z); /* function prototype */

/* function main begains program execution */
int main( void )
{
int number1; /* first integer */
int number2; /* second integer */
int number3; /* third integer */
printf("\t\t\t\t\tWelcome to");
printf("\t\t\t\t\tFinding Maximum of Three Integers Software");
delay(2000);
clrscr();
printf("\t\t\t\t\tCoded By:");
printf("\t\t\t\t\twww.bestengineeringprojects.com");
delay(2000);
clrscr();

printf( "Enter three integers\n " );
printf( "and this software tell you the maximum number: " );
scanf( "%d%d%d", &number1, &number2, &number3 );
getch();

/* number1, number2 and number3 are arguments
to the maximum function call */
printf( "Maximum number is: %d\n", maximum( number1, number2, number3 ) );
getch();
return 0; /* indicates successful termination */
} /* end main */
/* Function maximum definition */
/* x, y and z are parameters */
int maximum( int x, int y, int z )
{
int max = x; /* assume x is largest */

if ( y > max ) { /* if y is larger than max, assign y to max */
max = y;
} /* end if */
if ( z > max ) { /* if z is larger than max, assign z to max */
max = z;
} /* end if */
return max; /* max is largest value */
} /* end function maximum */
