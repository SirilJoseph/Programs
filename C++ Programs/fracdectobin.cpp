#include<bits/stdc++.h> 
using namespace std; 
string decimalToBinary(double num, int k_prec) 
{ 
    string binary = ""; 
    int Integral = num; 
    double fractional = num - Integral; 
    while (Integral) 
    { 
        int rem = Integral % 2; 
        binary.push_back(rem +'0'); 
        Integral /= 2; 
    } 
    reverse(binary.begin(),binary.end()); 
    binary.push_back('.'); 
    while (k_prec--) 
    { 
        fractional *= 2; 
        int fract_bit = fractional; 
        if (fract_bit == 1) 
        { 
            fractional -= fract_bit; 
            binary.push_back(1 + '0'); 
        } 
        else
            binary.push_back(0 + '0'); 
    } 
    return binary; 
} 
int main() 
{ 
  
    double n; 
    int k; 
    cout<<"Enter the Decimal Number to convert :  ";
    cin>>n;
    cout<<"Enter the number of bits after the decimal point : ";
    cin>>k;
    cout << decimalToBinary(n, k) << "\n"; 
    
    return 0; 
} 
