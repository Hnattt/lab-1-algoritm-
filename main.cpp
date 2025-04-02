#include <iostream>
#include <cmath>

using namespace std;

double y(double x, int n) {
    double result = 0;
    if (x < 0) {
        result = 1;
        for (int j = 2; j <= n - 1; ++j) { 
            result *= (j + x);
        }
    } else {
        for (int i = 0; i < n; ++i) { 
            double prod = 1;
            for (int j = 0; j < n; ++j) { 
                prod *= (x + i + pow(j, 2));
            }
            result += prod;
        }
    }
    return result;
}

void read_input(double &start, double &end, double &step, int &n) {
    cout << "Введіть початок інтервалу: ";
    cin >> start;
    cout << "Введіть кінець інтервалу: ";
    cin >> end;
    cout << "Введіть крок: ";
    cin >> step;
    cout << "Введіть n: ";
    cin >> n;
}

int main() {
    double start, end, step;
    int n;
    read_input(start, end, step, n);
    
    for (double x = start; x <= end; x += step) {
        cout << "y(" << x << ", " << n << ") = " << y(x, n) << endl;
    }
    
    return 0;
}
