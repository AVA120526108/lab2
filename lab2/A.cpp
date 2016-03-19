
#include <iostream.h>
using namespace std;
float getBMI(int x,int y)
void main()
{
 int  a,b;
cout<<"請輸入身高：";
cin>>a;  
cout<<"請輸入體重：";
cin>>b; 
float BMI;
BMI= getBMI(a,b);
cout<<"BMI= : "<<setprecision(2)<<BMI<<"\n";
if(BMI>=40)
  cout<<"Very severely obese\n";
else if(35<=BMI<40)
  cout<<"Severely obese\n";
else if(30<=BMI<35)
  cout<<"Moderately obese)\n";
else if(25<=BMI<30)
  cout<<"Overweight\n";
else if(18.5<=BMI<25)
  cout<<"Normal\n";
else if(16<=BMI<18.5)
  cout<<"Underweight\n";
else if(15<=BMI<16)
  cout<<"Severely underweight\n";
else
  cout<<"Very severely underweight\n";
   return 0;
}
