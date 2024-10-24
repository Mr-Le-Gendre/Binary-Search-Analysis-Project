#ifndef COUNTERTYPE_H
#define COUNTERTYPE_H

class counterType {
private:
    int counter; // Instance variable for counter value

public:
    // Constructor: Initializes counter to 0 or a non-negative integer
    counterType(int initCounter = 0);

    // Increment the counter by 1
    void increment();

    // Decrement the counter by 1, ensuring it does not go below 0
    void decrement();

    // Reset the counter to 0
    void reset();

    // Get the current counter value
    int getCounter() const;

    // Class Invariant: Counter is always non-negative
};

#endif

