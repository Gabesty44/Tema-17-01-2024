#include <iostream>

using namespace std;

int main()
{
    int n,i,j,v[100],k=0,S[100],s,x;
    cin>>n;
    for(i=0;i<n;i++)
    {
        S[i]=0;
        cin>>v[i];
        x=v[i];
        while(x!=0)
        {
            S[i]+=x%10;
            x/=10;
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(S[i]==S[j] && i!=j)
                k++;
    cout<<k/2;
    return 0;
}
