#include <bits/stdc++.h>

using namespace std;

int main(){
    double n,soma=0,cont=0,media;
    for(int i=0; i<6; i++){
        cin>>n;
        if(n>0){
            soma += n;
            cont++;
        }

    }
    media = soma/cont;
    cout<<cont<<" valores positivos"<<endl;
    printf("%.1lf\n",media);


    return 0;
}