#include <iostream>
using namespace std;

int impressao(int x,int cont){
  if(x>0){
    cout<<cont<<" ";
    return impressao(x-1,cont+1);
  }
  else{
    return cont;
  }
}
int main(){
  int x;
  cin>>x;
  int cont=0;
  int retorna=impressao(x,cont);
  cout<<retorna<<" ";
 return 0;
}