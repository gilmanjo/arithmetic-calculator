# arithmetic-calculator
A C++-based expression tree solution to an arithmetic parser.

## About

**Goal**: To create and evaluate an arithmetic parser without use of Shunting Yard algorithm.

**Solution**: Implement object-oriented-heavy approach using Composite, Interpreter, Builder, Visitor, and Fascade design patterns.

## Overall TODOs: 

- implement memory-critical destructors
- implement strict user input handling
- implement subtraction and division operators
- unary operators
- formal function and class headers for entire project
- perhaps consolidate the expression and builder composites

 ### Usage 
 ```
 arithmetic_calculator.cpp [expression]
 ```
 or use loop when run w/o any c-line args.
 Only acceptable input for expression is * + ( ) [0-9]+
 max 9999 per literal, all else is undefined.
