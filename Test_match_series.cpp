#include <iostream>
using namespace std;
int main(){
        int t;
        cin>>t;
        while(t--){
                int a[5];
                for(int i=0;i<5;i++){
                        cin>>a[i];
                }
                
                int s[3]={0};
                for(int i=0;i<5;i++){
                        s[a[i]]++;
                }
                if(s[1]>s[2]){
                        cout<<"INDIA"<<endl;
                }
                else if(s[2]>s[1]){
                        cout<<"ENGLAND"<<endl;
                }
                else {
                        cout<<"DRAW"<<endl;
                }

                
        }
}