# Operator introduction.
the symbol that helps us to perform some specific mathematical, relational, bitwise, conditional, or logical computations on values and variables. The values and variables used with operators are called operands. So we can say that the operators are the symbols that perform operations on operands.

## Types of operators in c

1.Arithmetic opearators
    Arithmetic operators are used to perform arithmetic/mathematical operations on operands.
    example: +,-,*,/,%
    
2.Relational operators
    Relational operators in C are used for the comparison of the two operands
    example: <,<=,>,>=,==,!=
    
3.Logical operartors
    Logical operators in C are used to combine multiple conditions/constraints. Logical Operators returns either 0 or 1, it depends on whether the expression result is true or false.Assignment operators
    example: &&, ||, !
    
4.Assignment operators
    Assignment operators are used for assigning value to a variable. The left side operand of the assignment operator is a variable and right side operand of the assignment operator is a value. The value on the right side must be of the same data-type of the variable on the left side otherwise the compiler will raise an error.
    example: =,+=,-=,*=,/=,%=
    
5.Bitwise operators
   Bitwise operators allow precise manipulation of bits
   example:<<,>>,&,|,~,^
   
6.Sizeof() operator
   It is a compile-time unary operator which can be used to compute the size of its operand. 
   example:sizeof(int),sizeof(char),etc...
   
7.Unary operators
   Unary operators are the operators that perform operations on a single operand to produce a new value.
   example:Increment(++)
           Decrement(--)
           
8.Conditional operators(Ternary operator)
    Ternary operator in C as it operates on three operands.
    example:(?:)

9.Comma operator(,)
    The comma operator in C is a sequence operator that allows multiple expressions to be evaluated in a single statement, with the final result being the value of the last expression
    example:expression1, expression2, ..., expressionN

10.cast opeartor
    The cast operator in C is used to explicitly convert a value from one data type to another. 
    example:(Datatype)operand
    
11.Dot(.)and Arrow(->)operator
    Dot operator is used to access members of a structure.
    Arrow operator is used to access members of a pointer.

12.Dereference operator(*)
   Dereference operator (*) in C is used to access the value of a pointer 

13.Address of operator(&)
   Address of operator (&) used to access the memory address of a variable. It is fundamental when working with pointers.
   

### Observations

 Arithmetic Operators: Perform basic maths like addition, subtraction, multiplication, and division.
 
 Relational Operators: Compare values and return 1 (true) or 0 (false).
 
 Logical Operators: Combine conditions and return 1 (true) or 0 (false).

 Bitwise Operators: Work at the binary level to manipulate bits.

 Assignment Operators: Assign values in variables.
 
 Increment/Decrement Operators: Increase or decrease a value by 1.
 
 Ternary Operator: Chooses between two values based on a condition.
 
 Comma Operator: Executes multiple expressions and returns the last one.
 
 Address-of (&) and Dereference (*) Operators: Get a variable's address and access the value at an address.
 
 Sizeof Operator: Gives the size (in bytes) of a data type or variable.


