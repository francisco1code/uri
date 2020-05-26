#include <iostream>
#include <vector>
 
using namespace std;
 
int main() {

    int n, m;
    vector<int> soma1;


    while(scanf("%d %d",&n,&m) != EOF){
        int q=0, v=0, maior =0, posi =0,x1,x2;
        
     
        for(int i=0; i<n;i++){
            double somares=0,m1=0,q1=0,q6=0;
            int res =0;
            int soma =0;
            scanf("%d %d",&q, &v);
            soma = (m/q)*v;
            m1 =m;
            q1 = q;
            somares = m1/q1;
            q1= q1+ 0.1;
            q6 = q1*somares;
            x1 = q6;
            x2 = m1;
            if(x1 != x2){
                soma --;
            } 
            /* printf("m1 = %lf q1 = %lf\n",m1,q1);
            printf("%lf\n",somares);
            printf("%lf\n",q6);
            printf("%d == %d \n",x1,x2); */
            soma1.push_back(soma);
        }
        for(int i=0; i< soma1.size(); i++){
            
            if(soma1[i]> maior){
            maior = soma1[i];
            }
    
            
        }
       cout<<maior<<endl;
        soma1.clear();
    }
 


    return 0;
}