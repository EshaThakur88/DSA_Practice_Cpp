#include <iostream>
#include <string>

using namespace std;

string generateSmallestNumericString(int N) {
    string resultString = ""; // Variable to store the generated string

    // Check if N is even using the modulo operator (%)
    if (N % 2 == 0) {
        // If N is even:
        // Assign result with N - 1 occurrences of the digit '1' and then concatenate it with the digit '2'.
        // This ensures that there are (N-1) ones and a single digit 2 in the resulting string,
        // satisfying the odd count requirement for each digit
        resultString.append(N - 1, '1');
        resultString += '2';
    }
    else {
        // If N is odd:
        // Assign result with N occurrences of the digit '1'
        // This ensures that all digits in the resulting string are '1',
        // satisfying the odd count requirement for each digit
        resultString.append(N, '1');
    }

    return resultString; // Return the generated string
}

int main() {
    int N = 6; // Desired size of the string
    string smallestString = generateSmallestNumericString(N);
    // Call the function to generate the lexicographically smallest numeric string with odd digit counts

    cout <<"Smallest String with length N= "<<N<<" is: "<<smallestString << endl;
    // Output the resulting string

    return 0;
}
