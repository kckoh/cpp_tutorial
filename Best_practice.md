gcc file_name -o name -Wall -Weffc++ -Wextra -Wsign-conversion -Werror -pedantic-errors -lstdc++

https://www.learncpp.com/cpp-tutorial/introduction-to-iostream-cout-cin-and-endl/


1. Disable compiler extensions to ensure your programs remain compliant with C++ standards and will work on any system.
    a. -pedantic-errors

2. Turn your warning levels up to the maximum
    a. -Wall -Weffc++ -Wextra -Wsign-conversion -Werror

3. Favor direct brace initialization whenever possible.
    a. int width{ 5 };

4. Initialize your variables upon creation.

5. avoid defining multiple variables in a single statement
6.  
