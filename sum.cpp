#include <iostream>
using namespace std;

long long fibonacci(int n);
long long factorial(int n);

int main(){
    double sum=0;
    const int terms = 40;

    cout << "Evaluate the sum from 0 to " << terms << " of: Fn/n! where Fn is the Fibonacci sequence." << endl << endl;
    cout << "sum = ";
    for(int n=0; n<=terms; n++){
        sum += (double)fibonacci(n)/factorial(n);
    }

    cout << sum << endl;
    cin.get();
    return 0;
}

long long fibonacci(int n){
    if (n <= 1) return n;
    long long a=0, b=1, temp;
    for (int i=2; i<=n; i++) {
        temp = a+b;
        a = b;
        b = temp;
    }
    return b;
}

long long factorial(int n){
    long long result=1;

    for(int i=2; i<=n; i++){
        result*=i;
    }

    return result;
}
