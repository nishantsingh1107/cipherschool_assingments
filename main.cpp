#include <bits/stdc++.h>
using namespace std;

vector<int> rev(vector<int>& arr){
    int low = 0, high = 9;
    while(low < high){
        swap(arr[low], arr[high]);
        low++;
        high--;
    }
    return arr;
}
void check_sorted(vector<int>& arr){
    for(int i=0;i<9;i++){
        if(arr[i] > arr[i+1]) cout<<"Array is not sorted.";
    }
    cout<<"Array is sorted.";
}
void min_max(vector<int>& arr){
    int maxi = arr[0], mini = arr[0];
    for(int i=0;i<=9;i++){
        if(arr[i] > maxi) maxi = arr[i];
        else if(arr[i] < mini) mini = arr[i];
    }
    cout<<"Maximum element: "<<maxi<<endl;
    cout<<"Minimum element: "<<mini<<endl;
}

int main() {
    vector<int> arr(10);
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    rev(arr);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    check_sorted(arr);
    min_max(arr);
    return 0;
}