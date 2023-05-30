// C++ program for the above approach

#include <bits/stdc++.h>
using namespace std;

// Custom comparator function
bool str_cmp(string s1, string s2)
{
	return (s1 + s2 < s2 + s1);
}

// Function to get the largest possible
// string
string largestNumber(vector<int> arr,
					int K)
{
	int N = arr.size();

	// Initialize a new variable which
	// will store the answers.
	string res = "";

	// Sort the numbers array in
	// non-decreasing order
	sort(arr.begin(), arr.end());

	// Stores the array element which will
	// be used to construct the answer
	vector<string> v;

	// Take all numbers atleast once
	for (int i = 0; i < N; i++) {
		v.push_back(to_string(arr[i]));
	}
	K -= N;

	// Take the largest digits number
	// for remaining required numbers
	while (K) {
		v.push_back(to_string(arr[N - 1]));
		K--;
	}

	// Sort the final answer according to
	// the comparator function.
	sort(v.begin(), v.end(), str_cmp);
	for (int i = v.size() - 1; i >= 0; i--)
		res += v[i];

	return res;
}

// Driver Code
int main()
{
	vector<int> arr = {9, 34, 30, 5, 3};
	int K = 3;
	cout << largestNumber(arr, K);

	return 0;
}
