#include <iostream>
#include <unordered_set>

int main() {
    // Create an unordered_set of integers
    std::unordered_set<int> uset;

    // Insert elements into the unordered_set
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(40);

    // Display elements in the unordered_set
    std::cout << "Elements in unordered_set: ";
    for (int elem : uset) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    // Successful search
    int searchElement = 20;
    if (uset.find(searchElement) != uset.end()) {
        std::cout << "Element " << searchElement
            << " found in unordered_set." << std::endl;
    }
    else {
        std::cout << "Element " << searchElement
            << " not found in unordered_set." << std::endl;
    }

    // Unsuccessful search
    searchElement = 50;
    if (uset.find(searchElement) != uset.end()) {
        std::cout << "Element " << searchElement 
            << " found in unordered_set." << std::endl;
    }
    else {
        std::cout << "Element " << searchElement 
            << " not found in unordered_set." << std::endl;
    }

    // Remove an element
    uset.erase(20);
    std::cout << "After removing 20, elements in unordered_set: ";
    for (int elem : uset) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;

    return 0;
}
