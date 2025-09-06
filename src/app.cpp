// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
using namespace std;

bool isPrime(int x);
int closestPrime(int x);

bool isPrime(int x){
    if (x <= 1) return false;
    if (x == 2) return true;
    if (x % 2 == 0) return false;

    for (int i = 3; i*i <= x; i += 2){
        if(x % i == 0) return false;
    }
    return true;
}

int closestPrime(int x){
    if(isPrime(x)) return x;
    int candidate = x + 1;
    while(!isPrime(candidate)){
        candidate++;
    }
    return candidate;
}
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    if(isPrime(a)){
    cout << a << "is prime." << endl;
    }
    else{
    cout << a << "is not prime. Closet prime is" << closestPrime(a) << "." << endl;
    }

    if(isPrime(b)){
    cout << b << " is prime." << endl;
    }
    else{
    cout << b << " is not prime. Closet prime is " << closestPrime(b) << "." << endl;
    }
    return 0;          
}

