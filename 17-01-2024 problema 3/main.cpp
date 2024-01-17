#include <iostream>

using namespace std;

int main()
{
    int n,i,v[100],prim,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        prim=1;
        cin>>v[i];
        for(j=2;j<=v[i]/2;j++)
            if(v[i]%j==0)
                prim=0;
        if(prim==1)
            v[i]=0;
    }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
