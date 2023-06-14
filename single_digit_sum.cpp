#include <iostream>
#include <string>

using namespace std;

int alphabet_sum(string& st) {
    int total_sum = 0;
    for (char ch : st) {
        if (ch >= 'a' && ch <= 'z') {
             ch=toupper(ch); // Convert lowercase to uppercase for maintaining consistency
        }
        total_sum += ch - 'A' + 1; //calculates the sum by subtracting the ASCII value of 'A' from character and adding 1.
    }
    
    while (total_sum > 9) {
        int digits_sum = 0;
        while (total_sum != 0) {
            digits_sum += total_sum % 10; //calculates remainder i.e. ones place digit
            total_sum /= 10; //gives quotient i.e tens place digit
        }
        
        total_sum = digits_sum;
    }
    
    return total_sum;
}

int main() {
    string input_str="LIFE";
    cout<<"Given String: "<<input_str<<endl;
    int answer = alphabet_sum(input_str);
    std::cout << "The single-digit sum of the alphabetical values of given string is: " << answer << endl;
    
    return 0;
}

