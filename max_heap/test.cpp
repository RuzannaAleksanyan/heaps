#include "max_heap.h"
#include <iostream>

int main() {
    // Create a max heap with a capacity of 10
    max_heap heap(10);

    // Insert some keys
    heap.insert_key(3);
    heap.insert_key(2);
    heap.insert_key(15);
    heap.insert_key(5);
    heap.insert_key(4);
    heap.insert_key(45);

    // Print the maximum element
    std::cout << "Maximum element: " << heap.get_max() << std::endl;

    // Extract the maximum element
    std::cout << "Extracted maximum element: " << heap.extract_max() << std::endl;

    // Print the maximum element again
    std::cout << "Maximum element after extraction: " << heap.get_max() << std::endl;

    // Decrease the key at index 2 (15) to 1
    heap.decrease_key(2, 1);

    // Print the maximum element after the decrease operation
    std::cout << "Maximum element after decrease: " << heap.get_max() << std::endl;

    // Delete the element at index 3 (5)
    heap.delete_key(3);

    // Print the maximum element after deletion
    std::cout << "Maximum element after deletion: " << heap.get_max() << std::endl;

    // Check if the heap is empty
    if (heap.empty()) {
        std::cout << "Heap is empty." << std::endl;
    } else {
        std::cout << "Heap is not empty." << std::endl;
    }

    return 0;
}
