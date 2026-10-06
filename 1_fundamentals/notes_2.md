# Initialization

- Uninitialized variable - A variable that does not have a default value, and program has not assigned one yet
- Accessing such variables -> Un predicatble results

## Initializer

- Single value initialization

```
int age = 8; // 8 is an initializer
```

- Multiple initializations
  - Each need their own initializer.
  - Having one initializer for multiple variables of same type -> Not possible
  - Only the last variable will effectively be initilaized in this case!

```
int age = 10, height = 25, weight = 55; // Multiple initializations
```

# Reading inputs

- Use scanf
- Reading an integer and float respectively

```
int age;
int price;
scanf("%d", &age);
scanf("%f", &price);
```

# Contants as macro definition

- Use #define
- This is also a preprocessor directive since it starts with #
- When program is compiled the places where this is used is repleaced by the actual values.

```
#define PI 3.143
```

# Identifiers

- Names of variables, macros, functions, other entities
- Can have letters, digits, underscores
- Always must being with letter or underscore
- C is case-sensitive

## Keywords

- Special words reserved for language
- Cannot be used as identifiers

# Layout a C program

- A group of tokens
- A token is a group of characters that cannot be split up without changing the meaning
- Amount of space between tokens is not cricitical in most cases, except where readability is of importance
- C allows us to insert any number of space - blanks, tabs, new line chars between tokens
  - Consequences:
    - Statements can be divided over multiple lines
    - Easier to the eye
    - Indendation -> Block statements
    - Blank lines -> Logical separation

# Q and A learnings

- exit(0) and return 0 difference
  - Same in context of when used inside main fuction
  - Both reyurn integer 0 to the OS

- Program reaches end without return
  - Undefined value returned
  - If program expects an integer, an unspeicfied value is returned

- Compiler removes comment or replaces ?
  - Old C compilers completely removed them
  - As per C standard, comments are replaced by a single space character
    - So some clever statements like a/\*\*/b = 0 becomes a b = 0 -> Illegal
- Why floating constants defined ending with f
  - By default the decimal values are treated as double type
  - Double type is more precise and can store larger values
  - Hence by specifying f we tell compiler explicitly its a float value and not a double!

- Limit on length of identifier
  - C89 says they can be any length
  - Compilers are required to only remember first 31 chars (63 chars in C99)
  - There are some rules for linkers and external linkages to complicate things
  - In practice ost compilers are linkers are more generous than the standard
    - These issues dont arise in real projects
