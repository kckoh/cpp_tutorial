#1: Commenting out your code

#2: Validating your code flow

tips: use std::cerr instead of std::cout. 

tips: When adding temporary debug statements, it can be helpful to not indent them. This makes them easier to find for removal later.

#3: Printing values
    problem: 
    Debug statements clutter your code.
    Debug statements clutter the output of your program.
    Debug statements require modification of your code to both add and to remove, which can introduce new bugs.
    Debug statements must be removed after you’re done with them, which makes them non-reusable.

#4: Conditionalizing your debugging code
    example
    #define ENABLE_DEBUG // comment out to disable debugging

    #ifdef ENABLE_DEBUG
    std::cerr << "getUserInput() called\n";
    #endif

    pros: removing and motification are easy
    cons: more cluster

Using a logger

