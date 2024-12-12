# Datatypes introduction

Datatype will indicate the compiler how much of memory has to be allocated for a variable associated 
with it.

# Datatypes are categorized into 3 ways

1.primitive datatypes.
2.userdefined datatypes.
3.Derived datatypes.

1.Primitive datatypes:
   Primitive data types are the most basic data types that are used for representing simple values such as integers, float, characters, etc

   4 fundamental primitive datatypes in c:
     1. int -4 bytes
     2. float - 4 bytes
     3. char -1 byte
     4. double -8 bytes

2.userdefined datatypes:
   The user-defined data types are defined by the user himself.  
   Example:structure, union, enum

3.Derived datatypes:
   The user-defined data types are defined by the user himself.
   Examples: array, pointers, function

# Observations
  sizeof(5) → Size of an integer(4 bytes).
  sizeof(9.8f) → Size of a float(4 bytes).
  sizeof(9.1) → Size of a double(8 bytes).
  sizeof('p') → Size of a character literal (1 byte).
  sizeof("Hello") → Size of a string literal including the null terminator ("Hello" = 6 bytes).
  Pointer sizes->(sizeof(int*), sizeof(char*), sizeof(float*),sizeof(double*),sizeof(void*): Size of a pointer (8 bytes).



