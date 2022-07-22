#include <iostream>
#include <vector>
#include <algorithm>

bool solution(std::vector<int> sequence) {
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        std::cout << *i << " ";
    }

    // 2. remove a single item that isn't increasing
    bool deletedOnce{false};
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        if(!deletedOnce) {
            if(*i == *(i+1)) {
                i = sequence.erase(i);
                deletedOnce = true;
            }
            if(*i > *(i+1)) {
                i = sequence.erase(i);
                deletedOnce = true;
            }
        }
    }

    std::cout << '\n';
    std::cout << '\n';
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        std::cout << *i << " ";
    }

    std::cout << '\n';
    std::cout << '\n';
    std::cout << "Re-checking after removal: " << '\n';
    // 3. check to see if we have any more
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        if(sequence.size() == 1) {
            return true;
        }

        if(*(i + 1) < *i) {
            return false;
        }
        if(*i == *(i-1)) {
            return false;
        }
    }

    return true;
}

int main() {
    std::cout << solution({3, 5, 67, 98, 3});

    return 0;


};