#include <iostream>
 
using namespace std;
 
int main() {
 
    int n=0, m=0, min=0,max=0;
    cin>>n>>m;
    if(n> m){
        max = n;
        min = m;
    }
    else {
        max = m;
        min = n;
    }
   
    for(int i = min+1; i< max; i++){
       if(i%5 == 2 || i%5 == 3){
            cout<<i<<endl;
        }
    } 

 
    return 0;
}