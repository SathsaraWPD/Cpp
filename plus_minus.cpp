#include <iostream>
using namespace std;
int main (){

    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    double x = 0;
    double y = 0;
    double z = 0;
    double p, b, c;

    for(int i=0; i<n; i++){
        if(a[i]>0){
            x++;
        }
        else if(a[i]==0){
            y++;
        }
        else{
            z++;
        }
    }

    p = x/n;
    b = z/n;
    c = y/n;
    cout.precision(6);
        cout<<fixed<<p<<endl;
        cout<<fixed<<b<<endl;
        cout<<fixed<<c<<endl;
    return 0;
}
