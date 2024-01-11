#include <iostream>
using namespace std;

int sqrtBS(int num)
{
    int start = 1;
    int end = num;
    long long int mid = start + (end - start)/2;
    int ans;
    while(start <= end)
    {
        if(mid*mid == num)
            return mid;
        else if(mid*mid < num)
        {
            ans = mid;
            start = mid + 1;
        }
            
        else
            end = mid - 1;
        mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
    int number;
    cout << "Enter the number to find it's square : ";
    cin >> number;
    cout << "It is a square of : " << sqrtBS(number) << endl;
}