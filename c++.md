## C++ Program

### Hello World Program

Here is a simple example of a C++ program that prints "Hello, World!" to the console:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

### Explanation

- `#include <iostream>`: This line includes the standard input-output stream library, which is necessary for using the `std::cout` function.
- `int main()`: This is the main function where the program execution begins.
- `std::cout << "Hello, World!" << std::endl;`: This line prints the string "Hello, World!" followed by a newline character to the console.
- `return 0;`: This line indicates that the program ended successfully.

### Compilation and Execution

To compile and run the program, follow these steps:

1. Save the code in a file with a `.cpp` extension, for example, `hello.cpp`.
2. Open a terminal and navigate to the directory where the file is saved.
3. Compile the program using a C++ compiler, such as `g++`:
   ```sh
   g++ hello.cpp -o hello
   ```
4. Run the compiled program:
   ```sh
   ./hello
   ```

This will output:
```
Hello, World!
```
### Variables and Data Types

In C++, variables are used to store data that can be manipulated by the program. Each variable has a specific data type that determines the kind of data it can hold.

#### Common Data Types

- `int`: Represents integer numbers.
- `float`: Represents floating-point numbers.
- `double`: Represents double-precision floating-point numbers.
- `char`: Represents single characters.
- `bool`: Represents boolean values (`true` or `false`).

#### Example

Here is an example of how to declare and use variables in C++:

```cpp
#include <iostream>

int main() {
    int myInt = 10;
    float myFloat = 5.5;
    double myDouble = 10.99;
    char myChar = 'A';
    bool myBool = true;

    std::cout << "Integer: " << myInt << std::endl;
    std::cout << "Float: " << myFloat << std::endl;
    std::cout << "Double: " << myDouble << std::endl;
    std::cout << "Char: " << myChar << std::endl;
    std::cout << "Bool: " << myBool << std::endl;

    return 0;
}
```

#### Explanation

- `int myInt = 10;`: Declares an integer variable named `myInt` and initializes it with the value `10`.
- `float myFloat = 5.5;`: Declares a float variable named `myFloat` and initializes it with the value `5.5`.
- `double myDouble = 10.99;`: Declares a double variable named `myDouble` and initializes it with the value `10.99`.
- `char myChar = 'A';`: Declares a char variable named `myChar` and initializes it with the character `A`.
- `bool myBool = true;`: Declares a boolean variable named `myBool` and initializes it with the value `true`.

This program will output the values of the variables to the console.