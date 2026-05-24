#include <iostream>
#include <iomanip>
using namespace std;

void showBalance(double balance) {
    cout << "Your current balance is: $" << setprecision(2) << fixed << balance << endl << endl;
}

double deposit() {
    double jumlah;
    cout << "Masukkan nominal yang ingin di depositkan: $";
    cin >> jumlah;

    if (jumlah > 0) {
        cout << "$" << jumlah << " Berhasil di depositkan!\n" << endl;
        return jumlah;
    } else {
        cout << "Nominal tidak valid!" << endl;
        return 0;
    }
}



double withdraw(double nominal) {
    double jumlah;
    cout << "Masukkan nominal yang ingin di tarik: $";
    cin >> jumlah;

    if (jumlah > 0 && jumlah <= nominal) {
        cout << "$" << jumlah << " Berhasil di tarik dari akun Anda!\n" << endl;
        return jumlah;
    } else if (jumlah > nominal) {
        cout << "Saldo anda tidak cukup untuk menarik $" << jumlah << "!" << endl;
        return 0;
    } else {
        cout << "Nominal tidak valid!" << endl;
        return 0;
    }
}



int main () {

        int pilihan;
        double balance = 0.0;


do {
    cout << "=== Welcome to Mini Bank! ===\n" << endl;
    cout << "1. Show Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit\n" << endl;
    cout << "Masukkan Pilihan Anda (1-4):";
    cin >> pilihan;

    cin.clear(); // Clear the input buffer
    fflush(stdin); // Flush the input buffer

    switch (pilihan){
        case 1: {
            showBalance(balance);
            break;
        }
        case 2: {
            balance += deposit(); // bisa juga di tulis balance = balance + deposit();
            showBalance(balance);
            break;
        }
        case 3: {
            balance -= withdraw(balance); // bisa juga di tulis balance = balance - withdraw();
            showBalance(balance);
            break;
        }
        case 4: {
            cout << "Thanks for using Us!" << endl;
            break;
        }
        default: {
            cout << "Pilihan tidak Valid. Pilih antara 1-4." << endl;
        }
    }
} while (pilihan != 4);

    return 0;
}