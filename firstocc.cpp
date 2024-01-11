#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector <int> &arr, int target)
{
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start)/2;
    int ans = -1;
    while(start <= end)
    {
        if(arr[mid] == target)
        {
            ans = mid;
            end = mid - 1;
        }
        else if(arr[mid] > target)
            end = mid - 1;
        else
            start = mid + 1;

        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    vector <int> arr;
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    int ans = firstOcc(arr, 1);
    cout << ans << endl;
}