#include<iostream>
#include<unordered_map>
using namespace std;

int oddFreqSum(int arr[], int n){
    unordered_map<int,int> mp;
    int sum=0;

    for(int i=0; i<n; i++){
        mp[arr[i]]++;
    }

    for(auto x: mp){
        if(x.second%2 != 0){
            sum += x.first * x.second;
        }
    }

    return sum;
    
}

int main()
{
    int arr[] = {1,2,4,5,6,3,1,2,3,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<oddFreqSum(arr, n);

    return 0;
}
