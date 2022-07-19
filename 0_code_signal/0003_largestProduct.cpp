std::vector<int> inputArray = {-23, 4, -3, 8, -12};

// we need to set the base value of our integer to the smallest possible integer value
// so if we have a negative number
int largestProduct{std::numeric_limits<int>::min()};
for(int i = 0; i < inputArray.size() -1; i++) {
    int currentProduct = (inputArray[i] * inputArray[i+1]);
        if(largestProduct < currentProduct) {
            largestProduct = currentProduct;
        }
    }
std::cout << largestProduct;
return largestProduct;
