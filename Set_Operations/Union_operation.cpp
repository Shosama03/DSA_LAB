#include <iostream>
#include <vector>
using namespace std;


vector<int> unionsortedarrays(const vector<int>&a,const vector<int>&b)
{   
    vector<int> result;
    int i=0,j=0;


    while(i<a.size() && j<b.size()){
        if (a[i]<b[j]){
            result.push_back(a[i++]);
        }
        else if (b[j]<a[i]){
            result.push_back(b[j++]);
        }
        else{
            result.push_back(a[i++]);
            j++;

        }

    }
    while (i < a.size()) {
        result.push_back(a[i++]);
    }
    while (j < b.size()) {
        result.push_back(b[j++]);
    }

    return result;
}



int main()
{
    vector<int> a;
    vector<int> b;
    int val;

    int n1,n2;
    cout<<"Enter the size of Set A"<<endl;
    cin>>n1;
    cout<<"Enter the elements of Set A"<<endl;

    for (int i=0; i<n1; i++)
    {
        
        cin>>val;
        a.push_back(val);
    }

    cout<<"Enter the size of Set B."<<endl;
    cin>>n2;
    cout<<"Enter the elements of Set B:"<<endl;
    for(int i=0;i<n2;i++)
    {
        cin>>val;
        b.push_back(val);
    }

    //Taking the union of both the sets.
    vector<int> c = unionsortedarrays(a,b);
    cout<<"The Union of the Array is "<<endl;
    for(int x:c)
    {
        cout<<x<<" ";
    }

}


