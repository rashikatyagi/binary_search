#include <iostream>
#include <vector>
using namespace std;

int peakElement(vector <int> &arr)
{
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start)/2;
    while(start < end)
    {
        if(mid != arr.size()-1 && arr[mid] < arr[mid + 1])
            start = mid + 1;
        else
            end = mid;
        mid = start + (end - start)/2;
    }
    return arr[mid];
}

int main()
{
    vector <int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(8);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    cout << "Peak element is : " << peakElement(arr) << endl;
}