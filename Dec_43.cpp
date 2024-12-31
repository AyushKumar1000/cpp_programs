#include<iostream>
using namespace std;
class Fibonacci {
private:
    int n; 

public:
Fibonacci(int num) : n(num) {}

    
    void printSeries() {
        int t1 = 0, t2 = 1, nextTerm = 0;

        cout << "Fibonacci Series: ";
        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                cout << t1 << " ";
                continue;
            }
            if (i == 2) {
                cout << t2 << " ";
                continue;
            }
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;

            cout << nextTerm << " ";
        }
        cout << endl;
    }
};

int main() {
    int terms;
    cout << "Enter the number of terms: ";
    cin >> terms;

    
    Fibonacci fib(terms);

    
    fib.printSeries();

    return 0;
}