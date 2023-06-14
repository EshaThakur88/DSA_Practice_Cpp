#include <iostream>
using namespace std;

void checkPattern(string s) {
    int countZero = 0;
    int countOne = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            countZero++;
        } else if (s[i] == '1') {
            countOne++;
            if (i > 0 && s[i - 1] == '0') {
                s[i - 1] = '_';  // Change left adjacent '0' to '_'
                countZero--;
            }else if(i<s.length()-1 && s[i+1]=='0'){
                s[i+1]='_';
                countZero--;
            }
        }
    }
    cout<<countOne<<" "<<countZero;
    // return countOne > countZero;
}

int main() {
    string s;
    cout << "Enter the string: ";
    cin >> s;

    // if (checkPattern(s)) {
    //     cout << "Yes" << endl;
    // } else {
    //     cout << "No" << endl;
    // }
    checkPattern(s);

    return 0;
}
