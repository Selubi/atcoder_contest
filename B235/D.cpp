#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
#define rep(i, j, n) for (int i = (int)j; i < (int)(n); i++)
#define pb push_back
using namespace std;
typedef long long ll;
int a,N;
int Nsize;
map<int,int> A;
string rotate_once(string s){
    s.push_back(s[0]);
    s.erase(0,1);
    return s;
}
int solve(string cur,int count, int rl){

    if(cur[0]=='0')return INT_MAX;
    // cout<<cur<<" "<<count<<" "<<rl<<"\ts ";
    // for (auto g:A){
    //     cout<<g.first<<" "<<g.second<<"  ";
    // }
    // cout<<endl;
    int temp=stoi(cur);
    
    if(temp==1){
        return count;
    }
    int ans=INT_MAX;
    if(A.find(temp)==A.end()){
        A[temp]=count;
    }
    else{
        if(count<A[temp]){
            A[temp]=count;
        }
        else{
            return ans;
        }
    }
    // if(to_string(temp*a).size()<=Nsize){
    //     ans=min(ans,solve(to_string(temp*a),to_string(temp*a),count+1,to_string(temp*a).size()-1));
    // }
    int tempcount=count;
    while(temp%a==0){
        temp=temp/a;
        tempcount++;
        ans=min(ans,solve(to_string(temp),tempcount,to_string(temp).size()-1));
    }
    if(rl>0){
        ans=min(ans,solve(rotate_once(cur),count+1,rl-1));
    }


    return ans;
}


int main()
{
    cin>>a>>N;
    Nsize=to_string(N).size();
    int ans=solve(to_string(N),0,to_string(N).size()-1);
    if(ans==INT_MAX)cout<<-1;
    else cout<<ans;
    // vector<vector<pair<string,int>>> B(1,vector<pair<string,int>>(1,pair<string,int>("1",0)));

}
