#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    double A, B, C;
    cin >> A >> B >> C;
    double arr[] = {A, B, C};
    sort(arr, arr + 3, greater<double>());

    A = arr[0];
    B = arr[1];
    C = arr[2];
    
    //float A2 = pow(A, 2);
    //float B2 = pow(B, 2);
    //float C2 = pow(C, 2);
    double A2 = A * A;
    double B2 = B * B;
    double C2 = C * C;

    if(A >= B + C)
        cout << "NAO FORMA TRIANGULO" << endl;
    else if(A2 == B2 + C2 || B2 == A2 + C2 || C2 == A2 + B2)
        cout << "TRIANGULO RETANGULO" << endl;
    else if(A2 > B2 + C2)
        cout << "TRIANGULO OBTUSANGULO" <<endl;
    else if(A2 < B2 + C2)
        cout << "TRIANGULO ACUTANGULO" << endl;
    if(A == B && B == C)
        cout << "TRIANGULO EQUILATERO" << endl;
    if((A == B && A != C)  || (A == C && A != B) || (B == C && B != A))
        cout << "TRIANGULO ISOSCELES" << endl;
    
    return 0;  

}









