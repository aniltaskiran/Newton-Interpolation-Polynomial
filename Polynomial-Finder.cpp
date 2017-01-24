#include<iostream>
using namespace std;

int main()
{ cout<<endl << " Numerical Methods "<< endl << "Anıl Taşkıran "<<endl<<endl <<endl;
    double c[20][20],p[20],x[20];

    cout <<"\nPlease enter 6 data.\n";
    int n=6;

 
    cout <<"\nEnter the x values:\n";
    for (int i=0;i<n;i++)
        cin>> x[i];
 
   cout <<"\nEnter the y values:\n";
    for (int i=0;i<n;i++){
    	   cin >> c[i][0];
    	        
     }
 
  
   n=n-1;

  for(int j=1;j<=n;j++){
  	for(int i=0;i<=n-j;i++){
  		c[i][j]=(c[i+1][j-1]-c[i][j-1])/(x[i+j]-x[i]);
  	}
  }

 cout.precision(6);
cout<<fixed << "Interpolation Polynomial is -> F(x) = "<< c[0][0] 
<< " + ("<<c[0][1]<<")(x-"<<x[0]<<") + ("<<c[0][2]<<")(x-"<<x[0]<<")(x-"
<<x[1]<<") + ("<<c[0][3]<<")(x-"<<x[0]<<")(x-"<<x[1]<<")(x-"<<x[2]<<
") + ("<<c[0][4]<<")(x-"<<x[0]<<")(x-"<<x[1]<<")(x-"<<x[2]<<")(x-"<<x[3]<<") + ("
<<c[0][5]<<")(x-"<<x[0]<<")(x-"<<x[1]<<")(x-"<<x[2]<<")(x-"<<x[3]<<")(x-"<<x[4]<<")"<<endl<<endl;



}
