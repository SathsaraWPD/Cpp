#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n; i++){
        if(arr[i]>37){
            if((arr[i]+2)%5==0){
                cout<<arr[i]+2<<endl;
            }
            else if((arr[i]+1)%5==0){
                cout<<arr[i]+1<<endl;
            }
            else{
                cout<<arr[i]<<endl;
            }
        }
        else
           cout<<arr[i]<<endl;
    }
    return 0;

}
