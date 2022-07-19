#include <iostream>
#include <vector>
#include <algorithm>

int solution(std::vector<int> statues) {
    // 1. sort
    std::sort(statues.begin(), statues.end());
    // 2. check if sort is cool
    std::cout << "Sorted vector: ";
    for(auto i = statues.begin(); i < statues.end(); i++) {
        std::cout << *i << " ";
    }
    std::cout << '\n';

    // 3. consecutive array
    std::vector<int> consecutiveVector;

    std::cout << "Consecutive vector: ";
    for(auto i = statues[0]; i <= statues[statues.size() - 1]; i++) {
        consecutiveVector.push_back(i);
        std::cout << i << " ";
    }
    std::cout << '\n';

    int totalStatuesAdded{0};

    //4. compare the two versions
    auto i{0};
    auto j{0};
    while(i != consecutiveVector.size()) {
        if (consecutiveVector[i] < statues[j]) {
            i++;
            totalStatuesAdded++;
        }
        if (consecutiveVector[i] == statues[j]) {
            i++;
            j++;
        }
    }

    return totalStatuesAdded;
}