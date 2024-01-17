#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[100],k=0,s[100],d;
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i]=0;
        cin>>v[i];
        for(d=1;d<=v[i];d++)
            if(v[i]%d==0)
                s[i]+=v[i];
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(s[i]==s[j] && i!=j)
                k++;
    cout<<k/2;
    return 0;
}
