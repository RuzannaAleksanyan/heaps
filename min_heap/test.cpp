#include "min_heap.h"
#include <iostream>

int main() {
    // Create a min heap with a capacity of 10
    min_heap heap(10);

    // Insert some keys
    heap.insert_key(3);
    heap.insert_key(2);
    heap.insert_key(15);
    heap.insert_key(5);
    heap.insert_key(4);
    heap.insert_key(45);

    // Print the minimum value
    std::cout << "Minimum element: " << heap.get_min() << std::endl;

    // Extract the minimum element
    std::cout << "Extracted minimum element: " << heap.extract_min() << std::endl;

    // Print the minimum element again
    std::cout << "Minimum element after extraction: " << heap.get_min() << std::endl;

    // Decrease the key at index 2 (15) to 1
    heap.decrease_key(2, 1);

    // Print the minimum element after the decrease operation
    std::cout << "Minimum element after decrease: " << heap.get_min() << std::endl;

    // Delete the element at index 3 (5)
    heap.delete_key(3);

    // Print the minimum element after deletion
    std::cout << "Minimum element after deletion: " << heap.get_min() << std::endl;

    // Check if the heap is empty
    if (heap.empty()) {
        std::cout << "Heap is empty." << std::endl;
    } else {
        std::cout << "Heap is not empty." << std::endl;
    }

    return 0;
}
