#ifndef BINARYSEARCH_H
#define BINARYSEARCH_H

#include <vector>

// Function prototypes
int recursiveBinarySearch(const std::vector<int>& vec, int target, int left, int right);
int iterativeBinarySearch(const std::vector<int>& vec, int target);
int sequentialSearch(const std::vector<int>& vec, int target);

#endif // BINARYSEARCH_H
