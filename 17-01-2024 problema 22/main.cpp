#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n,mediaAritmetica,k=0,s=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]!=0)
        {
            k++;
            s+=v[i];
        }
    }
    mediaAritmetica=s/k;
    for(i=0;i<n;i++)
        if(v[i]==0)
            v[i]=mediaAritmetica;
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
