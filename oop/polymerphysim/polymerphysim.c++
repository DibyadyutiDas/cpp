#include <iostream>

// Define the Polymer class
class Polymer {
public:
    // Constructor
    Polymer(int length) : length(length) {
        chain = new char[length];
        initializeChain();
    }

    // Destructor
    ~Polymer() {
        delete[] chain;
    }

    // Initialize the polymer chain with random characters
    void initializeChain() {
        for (int i = 0; i < length; i++) {
            chain[i] = getRandomCharacter();
        }
    }

    // Get a random character from A, B, or C
    char getRandomCharacter() {
        char characters[] = {'A', 'B', 'C'};
        int randomIndex = rand() % 3;
        return characters[randomIndex];
    }

    // Print the polymer chain
    void printChain() {
        for (int i = 0; i < length; i++) {
            std::cout << chain[i];
        }
        std::cout << std::endl;
    }

private:
    char* chain;
    int length;
};

int main() {
    // Create a polymer with length 10
    Polymer polymer(10);

    // Print the polymer chain
    polymer.printChain();

    return 0;
}