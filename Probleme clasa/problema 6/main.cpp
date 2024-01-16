#include <iostream>

using namespace std;

int main()
{
    int v[100];
    int i,j,n,t;
    cout<<"Dati valoarea lui n=";cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Dati valoarea "<<i<<" ";
        cin>>v[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(((v[i]%2==0)&&(v[j]%2==0))&&(v[i]>v[j]))
            {
                t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
            if(((v[i]%2!=0)&&(v[j]%2!=0))&&(v[i]<v[j]))
            {
                t=v[i];
                v[i]=v[j];
                v[j]=t;
            }
        }
    }
    for(i=0;i<n;i++)
        cout<<v[i]<<" ";
    return 0;
}
