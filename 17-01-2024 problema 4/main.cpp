#include <iostream>

using namespace std;

int main()
{
    int v[100],n,i;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n-1;i++)
        if(v[i]%v[n-1]==0)
            cout<<v[i]<<" ";
    return 0;
}
