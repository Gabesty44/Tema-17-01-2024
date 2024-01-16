#include <iostream>

using namespace std;

int main()
{
    int m,n,x[100],y[100],i,j,ok;
    cout<<"Dati o valoare lui m: ";cin>>m;
    cout<<"Dati o valoare lui n: ";cin>>n;
    cout<<"Dati valori elementelor vectorului y:"<<endl;
    for(i=0;i<m;i++)
        cin>>y[i];
    cout<<endl<<"Dati valori elementelor vectorului x:"<<endl;
    for(i=0;i<n;i++)
        cin>>x[i];
    cout<<endl;
    for(i=0;i<n;i++)
    {
        ok=1;
        for(j=0;j<m;j++)
            if(x[i]<y[j])
                ok=0;
        if(ok==1)
            cout<<x[i]<<" ";
    }
    return 0;
}
