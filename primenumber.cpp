// Number Manipulation and Prime Numbers
// Write a C++ program to take a positive integer n as input and:
// 1. Check whether n is a prime number.
// 2. If it is not prime, find all its factors.
// 3. If it is prime, find the next prime number greater than n.
#include <iostream>
using namespace std;
    bool primeyes(int n) //prime number check 
    { 
        if (n<2) return false;
        for(int i = 2 ; i*i<=n ; i++){
        if (n%i==0) return false;
        }
        return true ;
        for (int k =n+1; k>n;k++){
            cout<<"the next greater prime number is"<<k;
        }
    }
    int nextprimeyes(int n){
        int next = n + 1;
        while (!primeyes(next)) {
            next++;
        }
        return next;
    }
void factors(int n)
{
        cout<<"factors are: ";
        {
            for(int f=1;f<=n;f++){
                if (n % f == 0){
                cout<<"the factors are:"<<f <<endl;
            }
            }
            cout<<endl;
        }
}
        int main()
        {
        int n;
        cout<<"enter the positive integer";
        cin>>n;
        {
            if (primeyes(n)){
                cout<<"it is a prime number "  <<endl;
                cout<<"the next  prime number is"<< (nextprimeyes(n));
            }
            else 
            {
                cout<< n << " is not prime number";
                 (factors(n));
            }
        }
        return 0;
        }