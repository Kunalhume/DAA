#include <bits/stdc++.h>
using namespace std;

void incrNumb(int n){
  if(n==11) return;

  cout<<n<<"\n";
  incrNumb(n+1);
}

void decrNumb(int n){
  if(n==0) return;

  cout<<n<<"\n";
  decrNumb(n-1);
}

void printSum(int i,int n,int sum){
  if(i==n){
    sum+=i;
    cout<<sum<<"\n";
    return;
  }

  sum+=i;
  printSum(i+1,n,sum);
  cout<<i<<"\n";

}

int calcFactorial(int n){
  // Base Condition
  if(n==1 || n==0){
    return 1;
  }

  int n_min_1 = calcFactorial(n-1);
  int factorial = n*n_min_1;
  cout<<n<<"\n";
  return factorial;
}

void printFib(int a,int b,int n){
  if(n==0) return ;

  int c = a+b;
  cout<<c<<"\n";
  printFib(b,c,n-1);
}

int printPower(int x,int n){
  if(n==0){  //Base case
    return 1;
  }
  if(x==0){  //Base edge Case 
    return 0;
  }

  int n_min_1P = printPower(x,n-1);  //main logic 
  int xPow= x* n_min_1P;
  // cout<<n<<"\n";
  return xPow;
}

int PowlogN(int x,int n){  //Stach height = logN
  //explaination 
  // n = 4 --->  n/2 * n/2 == 2*2 
  // if 'n' is odd :  n=5 ---> n/2 * n/2 * n == 2*2*1;
  if(n==0){
    return 1;
  }
  if(x==0){
    return 0;
  }

  if(n%2 ==0){
    return PowlogN(x,n/2) * PowlogN(x,n/2);
  }
  else{
    return PowlogN(x,n/2) * PowlogN(x,n/2) * x;
  }

}


int main(){
  // int n;
  // cin>>n;
  // incrNumb(n);
  // cout<<"\n";
  // decrNumb(n);
  // int i,n,sum;
  // cin>>n;
  // i =1;
  // sum=0;
  // printSum(i,n,sum);


  // int n;
  // cin>>n;
  // int ans = calcFactorial(n);
  // cout<<ans<<"\n";


  // int a,b,n;
  // a=0;
  // b=1;
  // cin>>n;
  // cout<<a<<"\n"<<b<<"\n";
  // printFib(a,b,n-2);

  int x,n,ans;
  cout<<"Enter the value x & n : ";
  cin>>x;
  cin>>n;
  // ans =printPower(x,n);

  ans = PowlogN(x,n);
  cout<<ans<<"\n";
}
