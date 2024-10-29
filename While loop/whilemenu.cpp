#include <iostream>
using namespace std;

int main() {
    int choice;
    float total = 0.0;

    while (true) {
        cout << "\n\tCafe Menu\n";
        cout << "1. Espresso ($2.50)\n";
        cout << "2. Cappuccino ($3.50)\n";
        cout << "3. Latte ($3.00)\n";
        cout << "4. Mocha ($3.25)\n";
        cout << "5. Tea ($1.50)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                total += 2.50;
                cout << "Espresso added to your order.\n";
                break;
            case 2:
                total += 3.50;
                cout << "Cappuccino added to your order.\n";
                break;
            case 3:
                total += 3.00;
                cout << "Latte added to your order.\n";
                break;
            case 4:
                total += 3.25;
                cout << "Mocha added to your order.\n";
                break;
            case 5:
                total += 1.50;
                cout << "Tea added to your order.\n";
                break;
            case 6:
                cout << "Exiting...\n";
                cout << "Your total bill is: $" << total << "\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}
