#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector <int> &arr){
    int n = arr.size();
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start)/2;
    while(start <= end)
    {
        if(start == end)
            return start;
        if(mid != n-1 && arr[mid] > arr[mid+1])
            return mid;
        else if(mid != 0 && arr[mid] < arr[mid - 1])
            return mid - 1;
        else if(arr[mid] < arr[0])
            end = mid - 1;
        else 
            start = mid + 1;
        mid = start + (end - start)/2;
    }
    return -1;
}

int main()
{
    vector <int> ans;
    
    ans.push_back(64);
    ans.push_back(1);
    ans.push_back(3);
    ans.push_back(4);
    ans.push_back(6);
    ans.push_back(7);
    
    cout << "Pivot element is at index : " << findPivot(ans) << endl;
}