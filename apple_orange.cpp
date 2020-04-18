#include <iostream>
using namespace std;
int main(){

    long s,t,a,b,m,n;
    cin>>s>>t;
    cin>>a>>b;
    cin>>m>>n;

    long apple[m];
    long orange[n];

    long apple1[m];
    long orange1[n];

    for(long i=0; i<m; i++){
        cin>>apple[i];
    }

    for(long i=0; i<n; i++){
        cin>>orange[i];
    }

    for(long i=0; i<m; i++){
        apple1[i] = apple[i]+a;
    }

    for(long i=0; i<n; i++){
        orange1[i] = orange[i]+b;
    }
    long sumapple = 0;
    for(long i=0; i<m; i++){
        if((apple1[i]>=s)&&(apple1[i]<=t)){
            sumapple = sumapple + 1;
        }
        else
            continue;
    }

    long sumorange = 0;
    for(long i=0; i<n; i++){
        if((orange1[i]>=s)&&(orange1[i]<=t)){
            sumorange = sumorange + 1;
        }
        else
            continue;
    }

    cout<<sumapple<<endl;
    cout<<sumorange<<endl;

    return 0;
}
