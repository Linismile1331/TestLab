#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    cout << "������ ������� ������� a: ";
    cin >> a;
    cout << "������ ������� ������� b: ";
    cin >> b;
    cout << "������ ������� ������� c: ";
    cin >> c;

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double h_c = 2 * area / c;
    double m_a = sqrt(2 * (b * b + c * c) - a * a) / 2;

    cout << "������ h_c: " << h_c << endl;
    cout << "������ m_a: " << m_a << endl;

    return 0;
}