#include <iostream>

using namespace std;

double get_user_request(double sum, double term, double interest, double tax, double podatok = 0.805) {
    double profit = sum * interest / 100 * term / 12 * podatok;
    return profit;
}

void Function() {
    double sum, term, interest, tax, podatok = 0.805;

    cout << "Enter the deposit amount: ";
    cin >> sum;
    cout << "Enter the term: ";
    cin >> term;
    cout << "Enter the interest rate: ";
    cin >> interest;
    cout << "Enter the tax rate: ";
    cin >> tax;

    double profit = get_user_request(sum, term, interest, tax, podatok);

    cout << "Your profit is: " << profit << endl;
}

int main() {
    Function();
    return 0;
}

