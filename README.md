The idea behind the Container class is to create a dynamic string container that automatically manages memory allocation, similar to std::string but with custom concatenation behavior. It addresses the limitation of fixed-size arrays by providing automatic expansion.

#### Cloning
```cpp 

git clone https://github.com/username/dynamic-string-container
cd dynamic-string-container

```

#### Usage

```cpp

#include "container.h"

// Initialize with string
char greeting[] = "Hello";
Container container(greeting);

// Auto-expanding concatenation
char world[] = " World!";
container.cat(world);  // Buffer expands automatically

// Stream output
std::cout << container;
// [capacity: 20, size: 12, content: Hello World!]

```

#### TODO

- [ ] Deep copy constructor
- [ ] Additional getter/setter methods
- [ ] Memory optimization
- [ ] Extended string operations

#### Intuition

I posted this on [x](https://x.com/Rishi2220/status/1857459074188849503) and with feedback got to know the approach about linked lists from [cneuralnetwork](https://x.com/cneuralnetwork) and implemented [that](./linked_list).

This is how the intuition developed.







