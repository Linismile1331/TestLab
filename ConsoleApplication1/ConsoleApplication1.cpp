#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
    cout << "¬вед≥ть довжину сторони a: ";
    cin >> a;
    cout << "¬вед≥ть довжину сторони b: ";
    cin >> b;
    cout << "¬вед≥ть довжину сторони c: ";
    cin >> c;

    double s = (a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double h_c = 2 * area / c;
    double m_a = sqrt(2 * (b * b + c * c) - a * a) / 2;

    cout << "¬исота h_c: " << h_c << endl;
    cout << "ћед≥ана m_a: " << m_a << endl;

    return 0;
}