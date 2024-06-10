Loops in programming are control flow statements that allow code to be executed repeatedly based on a condition or a set of conditions. They are fundamental constructs in many programming languages and are used to perform repetitive tasks efficiently. 

## Types of Loops

### 1. `for` Loop

A `for` loop is used when the number of iterations is known beforehand. It consists of three parts: initialization, condition, and increment.

#### Syntax

```cpp
for (initialization; condition; increment) {
    // statements
}
```

#### Example

```cpp
#include <iostream>

using namespace std;

int main() {
    int num;
    int sum=0;
    cin>>num;
    for(int i=1;i<=num;i++){
        sum += i;
    }
    cout<<sum;
    return 0 ;
}

```
---
### Omiting parts of for loop
### 2. `while` Loop

A `while` loop repeatedly executes a block of code as long as a specified condition is true. It is typically used when the number of iterations is not known beforehand.

#### Syntax

```cpp
while (condition) {
    // statements
}
```

#### Example

```cpp
#include <iostream>

using namespace std;

int main() {
    int i = 1;
    int sum = 0;
    while (i < 10+1){
        sum+=i;

        i++;
    }
    cout<<sum;
    return 0;
}
```

### Exercise:
Print the first n natural numbers, where n is the input

```cpp
    #include <iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the number for the range: ";
    cin>>n;
    int num=0;
    int i = 1; //Loop variable

    while (i<=n){
        num += i;
        i++;
    }
    cout<<num;
    return 0;
}
```



### 3. `do-while` Loop

A `do-while` loop is similar to a `while` loop, but it guarantees that the loop body will be executed at least once. The condition is checked after the loop body is executed.

#### Syntax

```cpp
do {
    // statements
} while (condition);
```

#### Example

```cpp
#include <iostream>

int main() {
    int i = 0;
    do {
        std::cout << "i = " << i << std::endl;
        ++i;
    } while (i < 5);
    return 0;
}
```

### 4. `foreach` Loop

In some languages, there is a `foreach` loop (also known as an enhanced for loop) that is used to iterate over elements in a collection, such as an array or a list. It is not a part of C++ standard syntax but is available in other languages like Python and Java.

#### Example (Python)

```python
numbers = [1, 2, 3, 4, 5]
for number in numbers:
    print(number)
```

## Key Concepts

### Initialization

This step is executed once at the beginning of the loop. It typically initializes a loop counter or a variable used in the loop.

### Condition

This is evaluated before each iteration of the loop. If the condition is true, the loop body is executed. If the condition is false, the loop terminates.

### Increment/Decrement

This step is executed after each iteration of the loop. It updates the loop counter or variable used in the condition.

### Loop Body

The statements inside the loop that are executed each time the condition evaluates to true.

### Infinite Loops

An infinite loop runs indefinitely because the condition never evaluates to false. This can happen unintentionally due to a logic error, but it can also be used intentionally with a break statement to exit the loop based on some other condition.

#### Example (C++)

```cpp
#include <iostream>

int main() {
    int i = 0;
    while (true) {
        std::cout << "i = " << i << std::endl;
        ++i;
        if (i == 5) break; // Breaking the infinite loop
    }
    return 0;
}
```

## Summary

- **`for` Loop**: Used when the number of iterations is known.
- **`while` Loop**: Used when the number of iterations is not known and depends on a condition.
- **`do-while` Loop**: Similar to `while` but guarantees at least one execution of the loop body.
- **`foreach` Loop**: Used in other languages to iterate over collections.

Loops are essential for performing repetitive tasks efficiently, making code more concise and readable. They are widely used in various programming scenarios, such as iterating over arrays, processing user input, and implementing algorithms.