#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n,gasit,aux;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    do
    {
        gasit=0;
        for(i=1;i<n;i++)
        if(v[i-1]%10>v[i]%10)
        {
            aux=v[i-1];
            v[i-1]=v[i];
            v[i]=aux;
            gasit=1;
        }
    }while(gasit!=0);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
