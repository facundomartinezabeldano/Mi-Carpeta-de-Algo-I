#include <iostream>
using namespace std;

int fibonacci(int n){
    int fib_0 = 1;
    int fib_1 = 1;
    int temp = 0;
    for (int i = 0; i < n; i++){
        temp = fib_0;
        fib_0 = fib_1;
        fib_1 = fib_1 + temp;
    }
    return fib_0;
}

int fibonaccirecursivo(int n){
    int fib_0 = 1;
    int fib_1 = 1;
    int res;
    if (n == 0){
        res =  fib_0;
    } else if (n == 1)
        res = fib_1;
    else{
        res = fibonaccirecursivo(n-1) + fibonaccirecursivo(n-2);
    }
    return res;
}

int imparesmenoresquen (int n){
    int res = 0;
    for(int i = 0 ; i < n ; i++){
        if(i%2 == 1){
            res = res + i;
        }
    }
    return res;
}

int imparesmenoresquenrecursivo (int n){
    if (n == 0){
        return n;
    } else if (n % 2 == 1){
        return n + imparesmenoresquenrecursivo(n-1);
    } else{
        return imparesmenoresquenrecursivo(n-1);
    }
}

int main() {
    //cout << fibonacci(4) << endl;
    //cout << fibonaccirecursivo(6) << endl;
    //cout << imparesmenoresquen(2) << endl;
    cout << imparesmenoresquenrecursivo(6) << endl;
    return 0;
}
