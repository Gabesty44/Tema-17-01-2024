#include <iostream>

using namespace std;

int main()
{
    int v[100],n,i,sumaValoriPare=0,sumaPozitiiPare=0,suma3=0,k=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>v[i];
        if(v[i]%2==0)
            sumaValoriPare+=v[i];
        if(v[i]%10==0)
            k++;
        if(v[i]%3==0 && i%2==1)
            suma3+=v[i];
    }
    for(i=0;i<n;i+=2)
        sumaPozitiiPare+=v[i];
    for(i=n-1;i>=0;i--)
        cout<<v[i]<<" ";
    cout<<endl<<"Suma valorilor pare este "<<sumaValoriPare<<endl
    <<"Suma valorilor aflate pe pozitii pare este "<<sumaPozitiiPare<<endl
    <<"Numarul de numere divizibile cu 10 este "<<k<<endl
    <<"Suma valorilor divizivile cu 3 de pe pozitii impare este "<<suma3<<endl;
    return 0;
}
