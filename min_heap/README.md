# Min Heap Implementation
This is a C++ implementation of a Min Heap data structure. A Min Heap is a binary tree-based data structure where the parent node has a smaller value than its children nodes. This implementation provides various operations commonly associated with a Min Heap, such as inserting elements, extracting the minimum element, and more.

## Table of Contents
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Example](#example)
- [Contributing](#contributing)

## Getting Started
To use this Min Heap implementation in your C++ project, follow these steps:
1. Clone the repository or download the source code.
2. Include the `min_heap.h` header in your project where you want to use the Min Heap class.
3. Implement a test function or use the provided example (as shown in `test.cpp`) to test the functionality of the Min Heap.
4. Compile your project, linking the Min Heap source files, to create an executable.

## Usage
### Class: `min_heap`
#### Constructor
Creates a new Min Heap with the specified capacity.
## Member Functions
- void insert_key(int k): Inserts a key k into the Min Heap.
- int extract_min(): Extracts and returns the minimum element from the Min Heap.
- void decrease_key(int i, int new_val): Decreases the key at index i to the new value new_val.
- int get_min(): Returns the minimum element without extracting it.
- void delete_key(int i): Deletes the key at index i from the Min Heap.
- bool empty(): Checks if the Min Heap is empty.

## Example
You can find a usage example in the main.cpp file included in this repository. It demonstrates how to create a Min Heap, insert elements, extract the minimum element, and perform other operations.

## Contributing
Contributions are welcome! If you'd like to contribute to this project, please follow these steps:
- Fork the repository.
- Create a new branch for your feature or bug fix: git checkout -b feature/your-feature-name or git checkout -b bugfix/your-bug-fix.
- Make your changes and test them thoroughly.
- Commit your changes: git commit -m "Add your commit message here"
- Push to the branch: git push origin feature/your-feature-name or git push origin bugfix/your-bug-fix.
- Create a pull request from your fork to the original repository.
