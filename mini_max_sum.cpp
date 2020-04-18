#include <iostream>
using namespace std;
int main(){

    long a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    long arr[5]={a,b,c,d,e};


    long max = arr[0];

    for(int i=0; i<5; i++){
        if(arr[i]>=max){
            max = arr[i];
        }
        else
            continue;
    }
    //cout<<max<<endl;
    long sum=0;
    for(int i=0; i<5; i++){
        sum = sum + arr[i];
    }
    //cout<<sum<<endl;

    long summin = sum - max;
    cout<<summin<<" ";

    long min = arr[0];
    for(int i=0; i<5;i++){
        if(arr[i]<=min){
            min = arr[i];
        }
        else
            continue;
    }

    long summax = sum - min;
    cout<<summax;

    return 0;
}
