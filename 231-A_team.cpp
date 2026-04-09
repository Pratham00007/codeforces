#include<bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin>>n;
    int ans=0;
    for(int i=0;i<n;i++){
        vector<int>temp;
        for(int i=0;i<3;i++){
        int no;
        cin>>no;
        temp.push_back(no);
        }
        if(accumulate(temp.begin(),temp.end(),0)>=2){
            ans++;
        }
    }
    cout<<ans;
}