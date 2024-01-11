#include <iostream>
#include <vector>
using namespace std;

int missingElement(vector <int> &arr)
{
    int start = 0;
    int end = arr.size() - 1;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if((arr[mid] - mid) == 1)
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return ans+2;
}

int main()
{
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    arr.push_back(7);
    cout << "The missing element is : " << missingElement(arr) << endl;
}