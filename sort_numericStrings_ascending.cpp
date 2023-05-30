#include <iostream>
#include <vector>
#include <algorithm>

bool compareNumericStrings(const std::string& str1, const std::string& str2) {
    if (str1.size() == str2.size()) {
        return str1 < str2;  // Lexicographic comparison for same-sized strings
    }
    return str1.size() < str2.size();  // Sort by string length
}

int main() {
    std::vector<std::string> numericStrings = { "10", "5", "200", "25", "1" };

    std::sort(numericStrings.begin(), numericStrings.end(), compareNumericStrings);

    std::cout << "Sorted numeric strings: ";
    for (const auto& str : numericStrings) {
        std::cout << str << " ";
    }
    std::cout << std::endl;

    return 0;
}
