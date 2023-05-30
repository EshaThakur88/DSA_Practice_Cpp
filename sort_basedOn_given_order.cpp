#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

vector<string> compare_sort(vector<string>& arr, string& order) {
    int charPosition[26] = {0}; // Assuming order only contains lowercase letters

    // Fill the charPosition array with the character positions in the desired order.
    for (int i = 0; i < order.length(); i++) {
        charPosition[order[i] - 'a'] = i;
    }
    
    //Using a comparison function, you can order strings in a specific way.
    auto compareStrings = [&](const string& str1, const string& str2) {
        for (int i = 0; i < min(str1.length(), str2.length()); i++) {
            if (str1[i] != str2[i]) {
                // Compare the character positions in the custom order.
                return charPosition[str1[i] - 'a'] < charPosition[str2[i] - 'a'];
            }
        }
        // If all characters are within the shorter string's length, compare the lengths of the two strings.
        return str1.length() < str2.length();
    };

    vector<string> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end(), compareStrings);

    return sorted_arr;
}

int main() {
    vector<string> arr = {"purple", "white", "green", "pink"};
    string order = "dgeiphjklmnabcofqrstuvwxyz";
    
    // Use the custom order to sort the array of strings.
    vector<string> sortedArray = compare_sort(arr, order);
    
    // Printing the sorted array of strings
    cout << "The Sorted Array is: ";
    for (const string& s : sortedArray) {
        cout << s << " ";
    }
    cout << endl;

    return 0;
}
