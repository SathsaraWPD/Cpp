#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int sum=0;

    for(int i=n; i<=m; i++){
        if(i%2==0){
            sum = sum+1;
        }
        else
            continue;
    }
    cout<<"Number of Even Number between "<<n<<" and "<<m<<" = "<<sum<<endl;

    return 0;
}
