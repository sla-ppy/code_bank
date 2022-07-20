#include <iostream>
#include <vector>
#include <algorithm>

bool solution(std::vector<int> sequence) {

    // 1. sort
    std::sort(sequence.begin(), sequence.end());

    std::cout << "Removing the item: " << '\n';
    // 2. remove a single item that isn't increasing
    bool deletedOnce{false};
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        std::cout << *i;

        if(!deletedOnce) {
            // FIXME: this is undefined behaviour
            if(*i == *(i+1)) {
                // FIXME: this is undefined behaviour
                i = sequence.erase(i);
                deletedOnce = true;
            }
        }
    }

    std::cout << '\n';
    std::cout << '\n';
    std::cout << "Re-checking after removal: " << '\n';
    // 3. check to see if we have any more
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        // FIXME: this is undefined behaviour
        if(*i == *(i+1)) {
            return true;
        } else {
            return false;
        }
    }

    return false;
}

int main() {
    std::cout << solution({1, 2, 3, 4, 5, 3, 5, 6});

    return 0;


};