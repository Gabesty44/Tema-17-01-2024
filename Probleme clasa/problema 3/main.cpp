#include <iostream>

using namespace std;

int main()
{
    int v[100],i,n,gasit,aux;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    if(n%2==0)
    {
        do
        {
            gasit=0;
            for(i=0;i<n/2;i++)
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                gasit=1;
            }
        }while(gasit!=0);
        do
        {
            gasit=0;
            for(i=n/2;i<n-1;i++)
            if(v[i]<v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                gasit=1;
            }
        }while(gasit!=0);
    }
    else
    {
        do
        {
            gasit=0;
            for(i=0;i<n/2-1;i++)
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                gasit=1;
            }
        }while(gasit!=0);
        do
        {
            gasit=0;
            for(i=n/2+1;i<n;i++)
            if(v[i]<v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                gasit=1;
            }
        }while(gasit!=0);
    }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
