#include <iomanip>
#include <iostream>
#include <cmath>

using namespace std;

int main(){

    double r1;
    double r2;
    double x;
    double y;
    double xp;
    double xk;
    double dx;

   /* r1 = 2
    r2 = 3
    xp = -5
    xk = 8
    dx = 1.2*/

    cout << "r1 ="; cin >> r1;
    cout << "r2 ="; cin >> r2;
    cout << "xp ="; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;    
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << "     |" << setw(7) << "y" << "       |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk) {
        if (x < (-2 * r1)) {
            y = (x + 1 + (2 * r1)) * (-r1) + r1;
        }
        else if (x >= (-2 * r1) && x <= 0) {
            y = sqrt(r1 * r1 - pow((x + r1), 2));
        }
        else if (x > 0 && x < 2 * r2) {
            y = -sqrt(r2 * r2 - pow((x - r2), 2));
        }
        else if (x >= 2 * r2 && x <= 6) {
            y = (x - 2 * r2) / (2 * r2 - 6);
        }
        else {
            y = -1;
        }
        cout << "|" << setw(7) << setprecision(2) << x << "   |" << setw(10) << setprecision(3) << y << "    |" << endl;
        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}
