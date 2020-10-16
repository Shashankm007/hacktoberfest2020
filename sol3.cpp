#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int coup=0;
        string str;
        cin>>str;
        cout<<str;

        for (int i=0; i<str.length()-1;i++){
            if(str[i]!= str[i+1]){
                coup++;
                i+=2;
            }
        }
        cout<<coup<<endl;
    }
}
