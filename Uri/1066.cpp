#include <bits/stdc++.h>

using namespace std;

int main(){

    int n,imp=0,par=0,posi=0,neg=0;

    for(int i=0 ; i<5; i++){
        cin>>n;
        if(n > 0) posi++;
        else if( n != 0) neg ++;

        if(n%2 == 0) par++;
        else imp ++;
    }

    cout<<par<<" valor(es)"<<" par(es)"<<endl;
    cout<<imp<<" valor(es)"<<" impar(es)"<<endl;
    cout<<posi<<" valor(es)"<<" positivo(s)"<<endl;
    cout<<neg<<" valor(es)"<<" negativo(s)"<<endl;



    return 0;
}