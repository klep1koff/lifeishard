#include <iostream>

 using namespace std;

 
int
main ()
{ 
int A, B, C;
  
cout << " enter A "; 
cin >> A;
cout << "enter B ";
cin >> B;
cout << "enter C ";
cin >> C;
  
if (A < B && B < C)
    {    
cout << "OK";
}
  else
    {  
cout << "NOT OK";
}
return 0;
}
