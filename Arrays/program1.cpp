//Program to insert an element into an array.
#include <iostream>
using namespace std;

int main(){
    int arr[10],n,num,pos;
    cout<<"Enter the size of the array below 10."<<endl;
    cin>>n;
    cout<<"Enter the elements in the array."<<endl;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    n++;
    cout<<"Enter the element to insert in the array and its position."<<endl;
    cin>>num>>pos;

    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=num;

    cout<<"Printing the array.";

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    

    return 0;
}

