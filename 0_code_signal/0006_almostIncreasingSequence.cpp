#include <iostream>
#include <vector>
#include <algorithm>

bool solution(std::vector<int> sequence) {
    for (auto i = sequence.begin(); i != sequence.end(); ++i) {
        std::cout << *i << " ";
    }

    // 2. remove a single item that isn't increasing
    bool foundErasable{false};


    auto eraseThis = sequence.begin();

    for(auto i = sequence.begin(); i != sequence.end(); ++i) {
        if(!foundErasable) {
            // if cur. and next element is the same
            if(*i == *(i+1)) {
                eraseThis = i;
                foundErasable = true;
            }

            // we must make sure that i+1 is not out of bounds
            if(i+1 != sequence.end()) {
                // if current element is less than next, hence not an increasing sequence
                if (*i > *(i+1)) {
                    eraseThis = i;
                    foundErasable = true;
                } else if (*(i + 1) < *i) {
                    eraseThis = i + 1;
                    foundErasable = true;
                }
            }
        }
    }

    // !!with erase it is a lot better to erase while not iterating!!
    sequence.erase(eraseThis);

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

        if(i+1 != sequence.end()) {
            if (*(i + 1) < *i) {
                return false;
            }
        }

        if(i+1 != sequence.end()) {
            if (*i == *(i + 1)) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    std::cout << solution({1, 2, 3, 4, 3, 6});

    return 0;
};