//Program to delete an element from the array.
#include <iostream>
using namespace std;

int main(){
    int arr[10],n,pos;
    cout<<"Enter the size of the array below 10."<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;

    //Taking inputs in the array.
    for (int i=0; i<n;i++)
    cin>>arr[i];

    //Taking the position from which to delete the element from the array.
    cout<<"Enter the index to delete the element from the array"<<endl;
    cin>>pos;

    for(int i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;

    //Printing the new array.

    cout<<"Printing the new array."<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    return 0;
}
