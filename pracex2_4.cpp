#include <iostream>
#include <cmath>

using namespace std;

double av(double,double);
int main(){
    cout << av(-2.5,1.1) << "\n";
    cout << av(1,10000) << "\n";
    cout << av(8.5,2.4) << "\n";
    cout << av(0.1,0.0001) << "\n";
    cout << av(10,0.007) << "\n";
    cout << av(1,-2) << "\n";
    cout << av(15,100) << "\n";
    cout << av(123,5432) << "\n";
}

double av(double x,double y){
    double z;
    double m = x/y;
    double n = y/x;
    if(x <= 0 || y <= 0){
        z = 0;
    }
    if(m <= 100 && m > 0){
        z = sqrt(x*y);
    }
    if(n <= 100 && n > 0){
        z = sqrt(x*y);
    }
    if(m > 100){
        z = av(x,(x+y)/2)+av(y,(x+y)/2);
    }
    if(n > 100){
        z = av(x,(x+y)/2)+av(y,(x+y)/2);
    }
    return z;
}