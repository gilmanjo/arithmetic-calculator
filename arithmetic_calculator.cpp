// arithmetic_calculator.cpp : Defines the entry point for the console application.
#include "stdafx.h"
#include "ArithEval.h"
#include <iostream>
#include <stdlib.h>
#include <string.h>

// name - prompt_exp
// desc - prompts user for an expression to evaluate and returns it
// input - (none)
// output - an arithmetic expression as a string
char* prompt_exp();

// name - solve_sxp
// desc - solves an arithmetic expression and prints the result
// input - an arithmetic expression as a string
// output - (none)
void solve_exp(char* expr);


// Overall TODOs: 
//		- implement memory-critical destructors
//		- implement strict user input handling
//		- implement subtraction and division operators
//		- unary operators
//		- formal function and class headers for entire project
//		- perhaps consolidate the expression and builder composites
//
// Usage: arithmetic_calculator.cpp [expression]
// or use loop when run w/o any c-line args.
// Only acceptable input for expression is * + ( ) [0-9]+
// max 9999 per literal, all else is undefined.
int main(int argc, char* argv[]) {
	
	// immediately evaluate if c-line args are used
	if (argc > 1) { solve_exp(argv[1]); }

	// else continously prompt for expressions from the user
	else {

		do {
			char *user_input = prompt_exp();
			solve_exp(user_input);
			free(user_input);

		} while (true);
	}

	std::cin.get();
    return 0;
}

char* prompt_exp() {

	char input[1000];

	printf("Please enter an expression to evaluate.\tPress Ctrl+C to quit.\n");
	fgets(input, 1000, stdin);

	char *copy = (char *) malloc(strlen(input) + 1);
	strcpy_s(copy, strlen(input) + 1, input);
	return copy;
}


void solve_exp(char *expr) {

	// create fascade and solve the expression!
	ArithEval arith_calc;
	arith_calc.ReadExpression(&expr);
	arith_calc.Evaluate();  // TODO: Error-handling on bad input
}