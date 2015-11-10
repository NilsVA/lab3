#include <iostream>
#include <complex>
#include <fstream>
#include <cmath>

using namespace std;
int main(){

	double eps = 1e-8;
	
	for(double re = -2; re <= 2 ; re+=0.1){
		for(double im = -2; im <= 2; im+=0.1){
			int n = 1;
			complex <double> z1;
			complex<double> z0 = complex<double>(0.0,0.0);
			complex<double> z = complex<double>(re,im);
			while( abs(z-z0)>eps && n  < 400)
				{
				z0 = z; 	
				z =( z0 - (-1.0+pow(z0,3.0))/(3.0*pow(z0,2.0)));
				
				n+=1;
				}
		cout << re << "\t" << im << "\t" << n << endl;
		}
}
  // Example how to declare a single complex variable:
  //complex<double> c;

  // d = 1 + 2i 
  //complex<double> d = complex<double>(1.0, 2.0); 

  return 0;
}
