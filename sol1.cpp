#include <iostream>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int items,floor,price=0,final=0;
        cin>>items>>floor;

        int arr[items];

        for (int i=0; i<items;i++)
            cin>>arr[i];
        
        for (int i=0;i<items;i++){
            if (arr[i]<=floor){
                price+=arr[i];
                final+=arr[i];
                cout<<price<<" "<<final<<endl;
            }
            else{
                price+=arr[i];
                final+=floor;
                cout<<price<<" "<<final<<endl;
            }
        }
        cout<<price-final<<endl;

    }
}
