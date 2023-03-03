//https://codeforces.com/contest/1800/problem/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n ,l=0,x;
    string s;
    char t[1000];
    cin>>n;
    while (n--)
    {
        cin>>x;
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        l=0;
        for(i=0; i<x; i++){
            if(s[i]!=s[i+1]){
                t[l]=s[i];
                l++;
            }
        }
       
        if(t[0]=='m' && t[1]=='e'&& t[2]=='o' &&t[3]=='w' && l==4){
            cout<<"YES"<<endl;
        }
        else{
            cout<<" NO"<<endl;
        }
    }
    

}