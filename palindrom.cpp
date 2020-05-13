#include <iostream>
using namespace std;
int main (){

    int n;
    cin >> n;
    cout<<endl;
    char arr1[n];

    for(int i=0; i<n; i++){
        cin>>arr1[i];
    }
    cout<<"Word :- ";
    for(int i=0; i<n; i++){
        cout<<arr1[i];
    }
    cout<<endl;

    cout<<"Palindrome Word :- ";
    for(int i=0; i<n; i++){
        if(arr1[i]==arr1[n-1-i]){
            cout<<arr1[i];
        }
        else
            break;
    }

return 0;
}
