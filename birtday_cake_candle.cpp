#include <iostream>
using namespace std;
int main (){

    long n;
    cin>>n;
    long arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    long count = 0;
    long max= arr[0];

    for(long i=0; i<n; i++)
    {
        if(arr[i]>max){
            max= arr[i];
        }
    }
    for(long i=0; i<n; i++){
        if(arr[i]==max){
            count = count + 1;
        }
        else
            continue;
    }
    cout<<count;

    return 0;
}
