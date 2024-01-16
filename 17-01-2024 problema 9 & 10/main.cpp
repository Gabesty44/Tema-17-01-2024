#include <iostream>

using namespace std;

int main()
{
    int i,n,v[100],minim=9999,maxim=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]>maxim)
            maxim=v[i];
        if(v[i]<minim)
            minim=v[i];
    }
    for(i=0;i<n;i++)
    {
        if(v[i]==maxim)
            maxim=i;
        if(v[i]==minim)
            minim=i;
    }
    for(i=minim;i<=maxim;i++)
        cout<<v[i]<<" ";
    return 0;
}
