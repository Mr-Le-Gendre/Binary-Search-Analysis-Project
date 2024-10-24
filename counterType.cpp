#include "counterType.h"

// Constructor: Initializes counter
counterType::counterType(int initCounter) {
    if (initCounter < 0) {
        counter = 0; // Ensure non-negative
    }
    else {
        counter = initCounter;
    }
}

// Increment the counter
void counterType::increment() {
    counter++;
}

// Decrement the counter ensuring it doesn't go below 0
void counterType::decrement() {
    if (counter > 0) {
        counter--;
    }
}

// Reset the counter to 0
void counterType::reset() {
    counter = 0;
}

// Return the current counter value
int counterType::getCounter() const {
    return counter;
}
