#include <iostream>
using namespace std;

int fibonacci ( int num_terms ) {
    int sum;
    if (num_terms == 1) sum = 1; 
    else if (num_terms == 2) sum = 2;
    else sum = fibonacci(num_terms - 1) + fibonacci(num_terms - 2);
    return sum;
}

int main() {
    int num_terms = 5;
    int sum = fibonacci(num_terms);
    cout << sum << endl;
    return 0;
}