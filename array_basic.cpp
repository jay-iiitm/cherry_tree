#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10] = {1,2,3};

    for(int i=0;i<5;i++)
{
    cin>>a[i];
}

    for(int i=0;i<10;i++)
    {
        cout<<a[i]<<" ";
    }
    
    // size of array
    cout<<endl<<sizeof(a)<<endl;
    
    // size of single element
    cout<<sizeof(a[0])<<endl;
    
    // no. of element
    cout<<sizeof(a)/sizeof(int)<<endl;
    
    return 0;

}