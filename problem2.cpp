#include<bits/stdc++.h>
using namespace std;
double power(double b,int e)
{
    if(e==0) return 1.0;
    if(e<0) return 1.0/power(b,-e);
    double half = power(b,e/2);
    if(e%2 == 0){
        return half*half;
    }
    else{
        return half*half*b;
    }

}

int main()
{
    double b;
    int e;
    cout<<"Enter the value of b & e:"<<endl;
    cin >> b >> e;
    double result = power(b,e);
    cout<<fixed<<setprecision(5)<<result<<endl;

    return 0;
}
