bool solution(std::string inputString) {
 char* inputPtr = &inputString[0];
    char* reversePtr = &inputString[inputString.length() -1];
    // compare the "reversed" string
    bool comparing{true};
    while(true) {
        if(*inputPtr == '\0') {
            return true;
        }

        if(*reversePtr != *inputPtr) {
            comparing = false;
            return false;
        }

        reversePtr--;
        inputPtr++;
    }
}
