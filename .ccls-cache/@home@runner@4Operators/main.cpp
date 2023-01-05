#include<iostream>
using namespace std;

int main(){  
//basic operation 
    cout<<"2/5 "<<2/5<<" 2.0/5 "<<2.0/5<<" 2.30/5 "  
    <<2.30/5<<endl;
    int c=2.30/5;
    cout<<"2.30/5 "<<c<<endl;
    cout<<"a-A "<<'a'-'A'<<" a-1 "<<'a'-'1'<<endl;
//address and pointer
    int d=100;
    cout<<"address of 100 "<<(&d)<<endl;
    int*e=(&d);
    cout<<"again "<<e<<endl;
    cout<<"value store at address "<<(*e)<<endl;
    //sizeof() op
    cout<<"size of ptr "<<sizeof(*e)<<endl;
//comma op
    int f=(2,10,5);
    cout<<", op last assign "<<f<<endl;
//logical op : && || !
    int g=1;
    cout<<"!1 "<<!g<<endl;
    int h=112;
    cout<<"!112 "<<!h<<endl;
    int i=0;
    cout<<"!0 "<<!i<<endl;
    
    int a,b;
    cout<<"enter value of a : ";
    cin>>a;
    cout<<"enter value of b : ";
    cin>>b;
  
//condition making op
    bool first=(a==b);
    cout<<first<<endl;
    bool second=(a!=b);
    cout<<second<<endl;
    bool third=(a>b);
    cout<<third<<endl;
    bool fourth=(a>=b);
    cout<<fourth<<endl;
    bool fifth=(a<b);
    cout<<fifth<<endl;
    bool sixth=(a<=b);
    cout<<sixth<<endl;
//bitwise op
    cout<<"a&b  "<<(a&b)<<endl;
    cout<<"a|b  "<<(a|b)<<endl;
    cout<<"~a   "<<(~a)<<endl;
    cout<<"a^b  "<<(a^b)<<endl;
    cout<<"a<<b "<<(a<<b)<<endl;
    cout<<"a>>b "<<(a>>b)<<endl;
//unary op
    int x=10,y=20,z;
 //10.  9.     19.  20.   9.     20.  10   19
z= x-- - x++ + --y - ++y + --x - y-- + ++x - y++;
//9.    10.    19.   20.   9.   19.   10   20
    cout<<x<<" "<<y<<" "<<z<<endl;
//assignment op
    a=2;
    a+=2;
    a-=2;
    a/=2;
    a*=2:
    
  
    int n;
    cout<<"enter the value of n : ";
    cin>>n;
  
//if_else_ op
  /*n%2==0?
    cout<<n<<" is even number"
    :
    cout<<n<<" is odd number"
    ;*/
    n&1?  cout<<"odd":cout<<"even";
    
    return 0;
}
/*a>>n a/2^n
  a<<n a*2^n
*/
