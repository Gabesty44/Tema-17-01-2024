#include <iostream>

using namespace std;

int main()
{
    int v[100],n,i,aux,gasit;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>v[i];
    do
    {
        gasit=0;
        for(i=0;i<n;i+=2)
        {
            if(v[i]>v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                gasit=1;
            }
        }
    }
    while(gasit!=0);
    do
    {
        gasit=0;
        for(i=1;i<n;i+=2)
        {
            if(v[i]<v[i+1])
            {
                aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                gasit=1;
            }
        }
    }
    while(gasit!=0);
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
