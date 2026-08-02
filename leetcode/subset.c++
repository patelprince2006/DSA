#include <iostream>
#include <vector>

// Function to print all subsets using binary bits
void printSubsets(const std::vector<int>& set) {
    int n = set.size();
    
    // Total number of subsets is 2^n
    int totalSubsets = 1 << n; 

    // Loop through all numbers from 0 to (2^n - 1)
    for (int i = 0; i < totalSubsets; ++i) {
        std::cout << "{ ";
        
        // Check which bits are set to 1 in the binary representation of 'i'
        for (int j = 0; j < n; ++j) {
            if ((i & (1 << j)) != 0) {
                std::cout << set[j] << " ";
            }
        }
        
        std::cout << "}\n";
    }
}

int main() {
    std::vector<int> mySet = {1, 2, 3};
    
    std::cout << "All subsets:\n";
    printSubsets(mySet);
    
    return 0;
}
