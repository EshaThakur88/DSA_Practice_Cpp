// print only 1 subsequence that occurs first with sum=k,
// check in the base case only if the condition satisfies return true, otherwise return false;
// this will reduce the number of future calls.

#include <iostream>
#include <vector>
using namespace std;

bool print_only_one_subseq(vector<int> &ls, int n, int idx, int k, int curr_sum, vector<int> &ans)
{
    if (idx == n)
    {
        if (curr_sum == k)
        {
            for (auto &i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
            return true;
        }
        return false;
    }

    // take
    ans.push_back(ls[idx]);
    curr_sum += ls[idx];

    if (print_only_one_subseq(ls, n, idx + 1, k, curr_sum, ans) == true)
    {
        return true;
    }

    // not take;
    curr_sum -= ls[idx];
    ans.pop_back();
    if (print_only_one_subseq(ls, n, idx + 1, k, curr_sum, ans) == true)
    {
        return true;
    }

    return false;
}

int main()
{
    vector<int> arr = {1, 2, 1};
    int n = arr.size();
    int k = 2;
    vector<int> ans;
    print_only_one_subseq(arr, n, 0, k, 0, ans);
    return 0;
}