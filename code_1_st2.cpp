//Tanya Batra
//2010991422
//set-1

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements in an array"<<endl;
    cin>>n;  //no. of elements
    int arr[n];
    cout<<"Enter values"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];   // input elements of an array
    }
    
    sort(arr,arr+n);   //sort the array
     cout<<"Non-repeated elements in an array : ";
    for(int i=n-1;i>=0;i--){
        if(arr[i-1]!=arr[i] && arr[i]!=arr[i+1]){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}
