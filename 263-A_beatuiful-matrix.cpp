#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>>arr;
    for (int i=0;i<5;i++){
        vector<int>temp;
        for(int j=0;j<5;j++){
            int t_no;
            cin>>t_no;
            temp.push_back(t_no);
        }
        arr.push_back(temp);
    }
    int p=0 , q=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if (arr[i][j]==1){
                p=i;
                q=j;
                break;
            }
        }
    }
    
    int ans=abs(2-p)+abs(2-q);
    cout<< ans;
}