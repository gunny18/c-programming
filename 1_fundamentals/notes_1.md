# History of C

- Unix -> Machine code, not portable, understandable
- B -> Based on Algol, etc.
- Still not very readable and portable
- NB
- C
- Unix re written in C.
- C89, C99

# Compiling and linking

- Preprocessing -> Directives
- Compiling
- Linking

# General form of a simple program

- Directives
- Functions
  - main function -> mandatory
- Statements

# Printing strings

- printf statements
- Does not automatically move to next line -> new line char \n

# Comments

- Single line comment -> C99
- Multi line comment

# Variables and Assignment

## variables -> Temp store data

### Types

- Every variable must have a type defined
- Tells what data can be stored and what ops can be performed
- Basic types int, float
  - int
    - Has its range
  - float
    - Has range
    - Just an approximation, not exact
    - Ops are slower than on int data types

### Declarations

- Variables must be declared before used
- Single declarations
  ```
  int age;
  float price
  ```
- Multi declarations
  ```
  float profit, price, sum;
  ```
- C99 - Not mandatory for declarations to come before statements where the variables are used!

## Assignment

- Once declared, we can assign values to the variable

```
int age;
float price;

age = 22;
price = 12.34;
price = 133.234f; // Best practice
```

- The values 22, 12.34, are called constants

# Printing variables

- %d -> Integer
- %f -> Float
- %.pf -> p digits after decimal
- These are just display modifiers, they dont change the actual variable value

```
printf("Age is %d\n", age);
printf("Price is %f\n", price);
printf("Price is %.2f\n", price);
```
