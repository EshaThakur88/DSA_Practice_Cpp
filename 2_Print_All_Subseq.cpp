#include <iostream>
#include <vector>
using namespace std;

void print_subseq(int *arr, int size, int index, vector<int> &ans)
{
    // base case
    if (index == size)
    {
        if (ans.size() == 0)
            cout << "empty subsequence"<<endl;
        else
        {
            for (auto &i : ans)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        return;
       
    }

    // procedure
    // take
    ans.push_back(arr[index]);
    // recursive call after taking an element
    print_subseq(arr, size, index + 1, ans);

    // not take
    ans.pop_back();
    // recursive call while not taking the element
    print_subseq(arr, size, index + 1, ans);
}

int main()
{
    int arr[] = {3, 2, 1};
    vector<int> ans;
    int idx = 0;
    print_subseq(arr, 3, idx, ans);
    return 0;
}