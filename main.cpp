#include <iostream>
#include <cmath>

using namespace std;

double calculateFunction(double x, int n) {
    return pow(x, n) + sin(x); 
}
void getInput(double &start, double &end, double &step, int &n) {
    cout << "Введіть початок інтервалу: ";
    cin >> start;
    cout << "Введіть кінець інтервалу: ";
    cin >> end;
    cout << "Введіть крок зміни аргументу: ";
    cin >> step;
    cout << "Введіть значення n: ";
    cin >> n;
}
int main() {
    double start, end, step;
    int n;
    
    getInput(start, end, step, n);
    
    cout << "\nРезультати обчислення:\n";
    for (double x = start; x <= end; x += step) {
        cout << "y(" << x << ", " << n << ") = " << calculateFunction(x, n) << endl;
    }
    return 0;
}
