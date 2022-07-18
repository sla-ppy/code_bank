#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> statues) {
    // 1. sort
    std::sort(statues.begin(), statues.end());
    // 2. check if sort is cool
    std::cout << "Sorted array: ";
    for(auto i = statues.begin(); i < statues.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << '\n';

    // 3. consecutive array
    std::vector<int> consecutiveVector;

    std::cout << "Consecutive array: ";
    for(auto i = statues[0]; i <= statues[statues.size() - 1]; i++) {
        consecutiveVector.push_back(i);
        std::cout << i << " ";
    }
    std::cout << '\n';

    int totalStatuesAdded{0};

    //4. compare the two versions
    auto i = consecutiveVector[0];
    auto j = statues[0];
    while(i != consecutiveVector[consecutiveVector.size() - 1]) {
        while(j != statues[statues.size() - 1]) {
            if(i == j) {
                i++;
                j++;
                break;
            }
        }
        i++;

        if(i < j || i > j) {
            totalStatuesAdded++;
            j++;
        }
    }

    return totalStatuesAdded;
}

int main() {
    std::cout << solution({6, 2, 3, 8});
}