#include <iostream>
#include <string>
#include <playground.h>
#include <map>

char getMaxOccurringChar(const std::string &str) {
    std::map<char, int> freq;
    
    for (char ch : str) {
        freq[ch]++;
    }
    


    char maxChar = '\0';
    int maxCount = 0;
    for (const auto &pair : freq) {
        if (pair.second > maxCount) {
            maxChar = pair.first;
            maxCount = pair.second;
        }
    }
    
    return maxChar;
}

int main() {
    std::string str;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);
    
    char result = getMaxOccurringChar(str);
    std::cout << "The most frequently occurring character is: " << result << std::endl;
    
    return 0;
}
