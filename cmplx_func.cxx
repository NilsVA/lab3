#include <iostream>
#include <complex>
#include <cmath>
#include <fstream>

using namespace std;


complex<double> tang(double phi){
			complex<double> ij = complex<double>(0.0,1.0);
			complex<double> z = tan((1.0+ij)*phi);
			return(z);
}










int main(){

	int n = 100;
	complex<double> ii = complex<double>(0.0,1.0);
	double dphi = 2 * M_PI / n;
	complex<double> z[n];
	//complex<double> z;
	ofstream out("data.dat");
	for(int i=0; i<n; i++){
		//z[i] = exp(double(i)*dphi * ii);
		z[i] = tang(double(i)*dphi);
		out << real(z[i]) << "\t" << imag(z[i]) << "\t" << abs(z[i]) << "\t" << double(i)*dphi << endl;
}
	out.close();	
	
  // Example how to declare a single complex variable:
 // complex<double> c;

  // d = 1 + 2i 
 // complex<double> d = complex<double>(1.0, 2.0); 

  return 0;
}
