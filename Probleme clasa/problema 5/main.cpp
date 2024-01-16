#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n,aux,v1,v2,gasit;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    do
    {
        gasit=0;
        for(i=1;i<n;i++)
        {
            v1=v[i-1];
            while(v1>9)
                v1/=10;
            v2=v[i];
            while(v2>9)
                v2/=10;
            if(v1>v2)
            {
                aux=v[i-1];
                v[i-1]=v[i];
                v[i]=aux;
                gasit=1;
            }
        }
    }while(gasit!=0);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
