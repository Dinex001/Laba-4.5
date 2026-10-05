#include <iostream>
using namespace std;

int main()
{
    double R, x, y;

    cout << "Vvedit R: ";
    cin >> R;

    cout << "Vvedit x: ";
    cin >> x;

    cout << "Vvedit y: ";
    cin >> y;

    if ((x * x + y * y <= R * R && x <= 0 && y <= 0) ||
        (x * x + y * y <= R * R && x >= 0 && y >= (x - 1) * (x - 1)))
    {
        cout << "Tochka popadae v oblast";
    }
    else
    {
        cout << "Tochka ne popadae v oblast";
    }

    return 0;
}