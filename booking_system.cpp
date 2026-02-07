#include <iostream>
using namespace std;

int main() {
    int seats[5][7] = {0}; // 0 = khali, 1 = booked
    int choice, r, c;

    while (true) {
        cout << "\n====== Cinema Seat Booking ======\n";
        cout << "1. Saari Seats Dekho\n";
        cout << "2. Ek Seat Book Karo\n";
        cout << "3. Ek Seat Cancel Karo\n";
        cout << "4. Sirf Khali Seats Dekho\n";
        cout << "5. Exit\n";
        cout << "Apna choice do (1-5): ";
        cin >> choice;

        if (choice == 1) {
            cout << "\nSeat Layout (0 = Khali, 1 = Booked):\n";
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 7; j++)
                    cout << seats[i][j] << " ";
                cout << "\n";
            }

        } else if (choice == 2) {
            cout << "Row aur Column do (0 se start): ";
            cin >> r >> c;

            if (r >= 0 && r < 5 && c >= 0 && c < 7 && seats[r][c] == 0) {
                seats[r][c] = 1;
                cout << "Seat Book ho gayi!\n";
            } else {
                cout << "Galat ya pehle se booked seat!\n";
            }

        } else if (choice == 3) {
            cout << "Cancel karne ke liye Row aur Column do: ";
            cin >> r >> c;

            if (r >= 0 && r < 5 && c >= 0 && c < 7 && seats[r][c] == 1) {
                seats[r][c] = 0;
                cout << "Booking cancel ho gayi.\n";
            } else {
                cout << "Galat seat ya already khali hai.\n";
            }

        } else if (choice == 4) {
            cout << "\nKhali Seats:\n";
            bool found = false;
            for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 7; j++) {
                    if (seats[i][j] == 0) {
                        cout << "Seat (" << i << "," << j << ") khali hai.\n";
                        found = true;
                    }
                }
            }
            if (!found)
                cout << "Koi seat khali nahi hai.\n";

        } else if (choice == 5) {
            cout << "Thank you! Program band ho gaya.\n";
            break;

        } else {
            cout << "Galat choice! Dobara try karo.\n";
        }
    }

    return 0;
}
