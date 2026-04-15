#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int no,times;
    cin>>no;
    cin>>times;

    for(int i=0;i<times;i++){
        if(no%10==0){
            no=no/10;
        }else{
            no--;
        }
    }
    cout<<no;    
}