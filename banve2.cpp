#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int ticketPrice = 5000; // Giá vé
    int balance = 0; // S? du
    int ticketCount = 0; // S? lu?ng vé dã mua

    while (true) {
        cout << "=============================" << endl;
        cout << "He thong bán vé xe buýt" << endl;
        cout << "=============================" << endl;
        cout << "So du hien tai: " << balance << " VND" << endl;
        cout << "Giá vé: " << ticketPrice << " VND" << endl;
        cout << "So luong vé dã mua: " << ticketCount << endl;
        cout << "=============================" << endl;
        cout << "1. Nap tien" << endl;
        cout << "2. Mua vé" << endl;
        cout << "3. Thoát" << endl;
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
                cout << "Nap tien thành công!" << endl;
                break;
            case 2:
                if (balance >= ticketPrice) {
                    balance -= ticketPrice;
                    ticketCount++;
                    cout << "Mua vé thành công!" << endl;
                } else {
                    cout << "So du không du de mua vé!" << endl;
                }
                break;
            case 3:
                cout << "Ket thúc chuong trình." << endl;
                return 0;
            default:
                cout << "Lua chon không hop le. Vui lòng chon lai!" << endl;
                break;
        }
    }

    return 0;
}

