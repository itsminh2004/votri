#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ticketPrice = 5000; // Gi� v�
    int balance = 0; // S? du
    int ticketCount = 0; // S? lu?ng v� d� mua

    while (true) {
        cout << "=============================" << endl;
        cout << "He thong b�n v� xe bu�t" << endl;
        cout << "=============================" << endl;
        cout << "So du hien tai: " << balance << " VND" << endl;
        cout << "Gi� v�: " << ticketPrice << " VND" << endl;
        cout << "So luong v� d� mua: " << ticketCount << endl;
        cout << "=============================" << endl;
        cout << "1. Nap tien" << endl;
        cout << "2. Mua v�" << endl;
        cout << "3. Tho�t" << endl;
        cout << "=============================" << endl;
        cout << "Lua chon cua ban: ";
        
        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                int amount;
                cout << "Nhap so tien can nap: ";
                cin >> amount;
                balance += amount;
                cout << "Nap tien th�nh c�ng!" << endl;
                break;
            case 2:
                if (balance >= ticketPrice) {
                    balance -= ticketPrice;
                    ticketCount++;
                    cout << "Mua v� th�nh c�ng!" << endl;
                } else {
                    cout << "So du kh�ng du de mua v�!" << endl;
                }
                break;
            case 3:
                cout << "Ket th�c chuong tr�nh." << endl;
                return 0;
            default:
                cout << "Lua chon kh�ng hop le. Vui l�ng chon lai!" << endl;
                break;
        }
    }

    return 0;
}

