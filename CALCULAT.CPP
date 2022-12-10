#include<stdio.h>
#include<conio.h>

// MARK: Arithmetic functions (definition)
double add(double firstNumber, double secondNumber) {
	double result = firstNumber + secondNumber;
	return result;
}

double subtract(double firstNumber, double secondNumber) {
	double result = firstNumber - secondNumber;
	return result;
}

double multiply(double firstNumber, double secondNumber) {
	double result = firstNumber * secondNumber;
	return result;
}

double divide(double firstNumber, double secondNumber) {
	double result = firstNumber / secondNumber;
	return result;
}

void main() {
	/*
	%d - Placeholder used for int
	%f - Placeholder used for float
	%lf - Placeholder used for double
	%c - Placeholder used for characters (single characters)
	%d - Placeholder used for strings (char that have [] on right side of variable name)
	*/

	clrscr();
	double firstNumber, secondNumber, result;
	char arithmeticOperator;
	printf("\t\t\tCALCULATOR\n");
	printf("+ : Add\n");
	printf("- : Subtract\n");
	printf("* : Multiply\n");
	printf("/ : Divide\n");
	printf("First Number = ");
	fflush(stdin); // Use this to clear/flush the buffer to allow next input
	scanf("%lf", &firstNumber);
	printf("Arithmetic Operator : ");
	fflush(stdin);
	scanf("%c", &arithmeticOperator);
	printf("Second Number = ");
	fflush(stdin);
	scanf("%lf", &secondNumber);

	if (arithmeticOperator == '+') {
		result = add(firstNumber, secondNumber);
	} else if (arithmeticOperator == '-') {
		result = subtract(firstNumber, secondNumber);
	} else if (arithmeticOperator == '*') {
		result = multiply(firstNumber, secondNumber);
	} else if (arithmeticOperator == '/') {
		result = divide(firstNumber, secondNumber);
	}

	printf("%lf %c %lf = %lf", firstNumber, arithmeticOperator, secondNumber, result);

	getch(); // Use this to press any key before leaving program.
}