#include <iostream>
 
using namespace std;
 
int main() {
 
   int n=0,p;
   cin>>n;
   p = n *4;
   for(int i=1; i<=p;i++){
       if(i % 4 == 0) cout<<"PUM"<<endl;
       else cout<<i<<" ";
   }

    return 0;
}