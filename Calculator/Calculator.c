#include <msp430.h> 
#include <math.h>


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	
	switch(operation) {

	case 1 :
	      multiplication;
	      num1 * num2 = result;
	      break;

	case 2  :
	    division;
	    num1 / num2 = result;
	    break;

	case 3 :
	    addition;
	    num1 + num2 = result;
	    break;

	case 4 :
	    subtraction;
	    num1 - num2 = result;
	    break;

	default :
	}

	return 0;
}
