#include <iostream>

using namespace std;

int main()
{
    int n,i,a,par=0,impar=0,suma=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>a;
        if(a%2==0)
            par++;
        else
            impar++;
    }
    suma=par-impar;
    if(suma<0)
        suma*=-1;
    cout<<suma;
    return 0;
}
