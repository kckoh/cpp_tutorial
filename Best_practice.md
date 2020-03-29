gcc file_name -o name -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors -lstdc++

https://www.learncpp.com/cpp-tutorial/69-dynamic-memory-allocation-with-new-and-delete/

# compiler
1. Disable compiler extensions to ensure your programs remain compliant with C++ standards and will work on any system.
    a. -pedantic-errors

2. Turn your warning levels up to the maximum
    a. -Wall -Weffc++ -Wextra -Wsign-conversion -Werror

3. Favor direct brace initialization whenever possible.
    a. int width{ 5 };

# variable

4. Initialize your variables upon creation.

5. avoid defining multiple variables in a single statement
6.  Prefer ‘\n’ over std::endl when outputting text to the console.
7. Always initialize the variable first.

8. best practice for name   
    a. variable and function: begin with lower case
    b. structs, classes, and enumerations: begin with upper case

# namespace
9. Use explicit namespace prefixes to access identifiers defined in a namespace

# header file
10. Header files should generally not contain function and variable definitions, so as not to violate the one definition rule. An exception is made for symbolic constants

11. Use a .h suffix when naming your header file

12. If a header file is paired with a code file (e.g. add.h with add.cpp), they should both have the same base name (add).

13. Use angled brackets to include header files that come with the compiler. Use double quotes to include any other header files.

14. A code file should #include its paired header file (if it exists).

15. When including a header file from the standard library, use the no extension version (without the .h) if it exists. User-defined headers should still use a .h extension.

16. Each file should explicitly #include all of the header files it needs to compile. Do not rely on headers included transitively from other headers.

17. Order your #includes as follow: your own user-defined headers first, then 3rd party library headers, then standard library headers, with the headers in each section sorted alphabetically.

# few more recommendations for header file

18. Always include header guards (we’ll cover these next lesson).

19. Give your header files the same name as the source files they’re associated with (e.g. grades.h is paired with grades.cpp).
20. Each header file should have a specific job
21. Be mindful of which headers you need to explicitly include for the functionality that you are using in your code files
22. Every header you write should compile on its own (it should #include every dependency it needs)
Only "#include" what you need (don’t include everything just because you can).
23. Do not #include .cpp files.
24. Do not define variables and functions in header files 

# header guard
25. example
    #ifndef SOME_UNIQUE_NAME_HERE
    #define SOME_UNIQUE_NAME_HERE
    
    // your declarations (and certain types of definitions) here
    
    #endif
26. set to the full filename of the header file typed in caps

# float

27. Favor double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.
28. A corollary of this rule is: never use floating point numbers for financial or currency data.

# char
29. Always put stand-alone chars in single quotes (e.g. ‘t’ or ‘\n’, not “t” or “\n”). This helps the compiler optimize more effectively.

# const
30. Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as constexpr.
31. Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as const.

# conditional statement
32. Don’t add unnecessary == or != to conditions. It makes them harder to read without offering any additional value.


# floating number comparison
33. Avoid using operator== and operator!= with floating point operands.
 
# global varibale
34. Consider using a g” or “g_” prefix for global variables to help differentiate them from local variables.

35. If you need global constants and your compiler is C++17 capable, prefer defining inline constexpr global variables in a header file.

36. Use local variables instead of global variables whenever possible.
37. other best practice for global variables: https://www.learncpp.com/cpp-tutorial/why-global-variables-are-evil/

# directive
38. avoid using directives altogether. Using declarations are okay to use inside blocks, where their impact is limited, but not in the global scope.

# auto
39. Avoid using type inference for function return types but okay for variable

# casting
40. Favor static_cast when you need to convert a value from one type to another type

#string
41. Use std::string or std::string_view  instead of C-style strings.

# pointer
42. Favor the pointer syntax (*) over the array syntax ([]) for array function parameters.

43. Set deleted pointers to 0 (or nullptr in C++11) unless they are going out of scope immediately afterward


