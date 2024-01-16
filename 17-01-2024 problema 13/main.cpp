#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],k=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=1;i<n-1;i++)
        if(v[i]<v[0] || v[i]>v[n-1])
            k++;
    cout<<k;
    return 0;
}
