#include<bits/stdc++.h>
using namespace std;
 
int main(){
  int a=0;
  int cnt=0;
  int b;
  cin>>b;

  while(a!=b){
    if (a+5<=b){
        a=a+5;
        cnt++;
    }else if(a+4<=b){
        a=a+4;
        cnt++;
    }else if(a+3<=b){
        a=a+3;
        cnt++;
    }else if(a+2<=b){
        a=a+2;
        cnt++;
    }else if(a+1<=b){
        a=a+1;
        cnt++;
    }
  }
  cout<<cnt;

}