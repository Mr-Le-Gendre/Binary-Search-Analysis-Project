#include "BinarySearch.h"

// Recursive Binary Search Implementation
int recursiveBinarySearch(const std::vector<int>& vec, int target, int left, int right) {
    if (right >= left) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) return mid;
        if (vec[mid] > target) return recursiveBinarySearch(vec, target, left, mid - 1);
        return recursiveBinarySearch(vec, target, mid + 1, right);
    }
    return -1; // Not found
}

// Iterative Binary Search Implementation
int iterativeBinarySearch(const std::vector<int>& vec, int target) {
    int left = 0, right = vec.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (vec[mid] == target) return mid;
        if (vec[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1; // Not found
}

// Sequential Search Implementation
int sequentialSearch(const std::vector<int>& vec, int target) {
    for (size_t i = 0; i < vec.size(); ++i) {
        if (vec[i] == target) return i;
    }
    return -1; // Not found
}
