#include <iostream>
using namespace std;
int main(){

int mark[5]={10,3,21,5,4};
int max,min;
max=min=mark[0];
int sum=0;
double avr;
for(int i=0; i<=4; i++)
    {
    cout<<mark[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<=4; i++)
        {
       if( max>mark[i])
        max=mark[i];}
        for(int i=0; i<=4; i++)
            {
            if(min<mark[i])
            min=mark[i];}
cout<<"maximum marks :"<<max<<endl;
cout<<"minimum marks :"<<min<<endl;

            for(int i=0;i<=4;i++)
            {
                sum=sum+mark[i];
            }
            cout<<"sum of marks: "<<sum<<endl;

    avr=sum/5.0;
    cout<<"average: "<<avr;



return 0;


}
