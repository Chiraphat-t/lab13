#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double a[],int n,double b[]){
    double max,min=1,sum,mean,sd,gm,hm,sp,h,g=1;
    for(int i=0;i<n;i++){
        if(a[i]>max){max=a[i];}
        if(a[i]<min){min=a[i];}
        sum+=a[i];
    }
    mean=sum/n;

    for(int i=0;i<n;i++){
        sp += pow(a[i]-mean,2);
    }
    sd=sqrt(sp/(n));

    for(int i=0;i<n;i++){
        g *= a[i];
    }
    gm=pow(g,(1.0/n));
    
    for(int i=0;i<n;i++){
        h+=(1/a[i]);
    }
    hm=n/h;


    b[0]=mean;
    b[1]=sd;
    b[2]=gm;
    b[3]=hm;
    b[4]=max;
    b[5]=min;

}