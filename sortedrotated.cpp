#include <iostream>
#include <vector>
using namespace std;

int findPivotIndex(vector <int> &arr){
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

int binarySearch(vector <int> &arr, int s, int e, int target)
{
    int mid = s + (e - s)/2;
    while(s <= e)
    {
        if(arr[mid] == target)
            return mid;
        else if(target < arr[mid])
            e = mid - 1;
        else    
            s = mid + 1;
        mid = s + (e - s)/2;
    }
    return -1;
}

int findTarget(vector <int> &arr, int target)
{
    int n = arr.size();
    int pivot = findPivotIndex(arr);
    int ans;
    if(target >= arr[0] && target <= arr[pivot])
    {
        return binarySearch(arr, 0, pivot, target);
    }
    else
    {
        return binarySearch(arr, pivot+1, n-1, target);
    }

}

int main()
{
    vector <int> arr;
    // arr.push_back(28);
    // arr.push_back(136);
    arr.push_back(3);
    // arr.push_back(4);
    // arr.push_back(5);
    // arr.push_back(7);
    // arr.push_back(8);

    cout << "Target is present at : " << findTarget(arr, 3) << endl;
}