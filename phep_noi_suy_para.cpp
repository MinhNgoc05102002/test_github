#include <iostream>
#include<iomanip>
using namespace std;

void nhap(float &x, float *xi, float *yi){
    for (int i=0; i<3; i++)
        cin >> xi[i] >> yi[i];
    cin >> x;
}
float lagrange(float x, float *xi, float *yi)
{
    float result = 0;
    for (int i=0; i<3; i++){
        float  Li =  1;
        for (int j=0; j<3; j++){
            if (i!=j)
                Li *= ((x-xi[j]) / (xi[i] - xi[j]));
        }
        result += Li * yi[i];
    }
    return  result;
}
int main()
{
    float x, xi[4], yi[4];
    nhap(x, xi, yi);
    cout <<fixed <<setprecision(1)<< lagrange(x, xi, yi);
}
