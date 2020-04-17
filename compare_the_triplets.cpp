#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){

    int bob[3];
    int ali[3];


    for(int i= 0; i<3; i++){
        cin>>bob[i];
    }
    for(int j=0; j<3; j++){
        cin>>ali[j];
    }

    int sumali = 0;
    int sumbob=0;
    int sumeq = 0;

    for(int i=0; i<3; i++){
        if(bob[i]>ali[i]){

            sumbob = sumbob+1;
        }
        else if(bob[i]<ali[i]){

            sumali = sumali + 1;

        }
        else{
            sumeq = sumeq + 0;
        }
    }
    cout<<sumbob<<" "<<sumali<<endl;

    return 0;
}

