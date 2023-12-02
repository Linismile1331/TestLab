#include <iostream>
#include "stdafx.h"

using namespace std;

int main() {
    setlocale(0, ".1251");

    int ir, fr;
    cout << "Введiть показник лiчильника на початку: ";
    cin >> ir;
    cout << "Введiть показник лiчильника в кiнцi: ";
    cin >> fr;

    double costEn = 0.10;
    double consEn = fr - ir;
    double tCost = consEn * costEn;

    cout << "Витрачена електроенергiя: " << consEn << " кВт∙год\n";
    cout << "Вартiсть: " << tCost << " грн\n";

    return 0;
}

