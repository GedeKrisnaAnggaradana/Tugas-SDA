#include <iostream>
#include <string>
using namespace std;

class Stack {
	public:
	    int size;
	    int top;
	    string *items;
	
		Stack(int stackSize) {
		    size = stackSize;
		    top = -1;
		    items = new string[size];
		}
	
	
	    bool penuh() {
	        return top >= size - 1;
	    }
	
	    bool kosong() {
	        return top == -1;
	    }
	
	    void push() {
	        if (!penuh()) {
	            cout << "Masukkan Data: ";
	            cin >> items[top + 1]; 
	            top++; 
	            cout << "Data \"" << items[top] << "\" telah dimasukkan ke stack.\n " << endl; // Menampilkan data yang baru dimasukkan
	        } else {
	            cout << "ERROR: Stack penuh." << endl;
	        }
	    }
	
	    void pop() {
	        if (!kosong()) {
	            cout << "Data \"" << items[top] << "\" di-pop.\n" << endl;
	            top--;
	        } else {
	            cout << "ERROR: Stack kosong." << endl;
	        }
	    }
	
	    void tampil() {
	        if (!kosong()) {
	            cout << "Data dalam stack: " << endl;
	            for (int i = top; i >= 0; i--) {
	                cout << items[i] << endl;
	            }
	        } else {
	            cout << "Data dalam stack: " << endl << "Tidak ada. \n\n" ;
	        }
	    }
};

int main() {
    int ukuranStack;
    cout << "Masukkan ukuran stack: ";
    cin >> ukuranStack;
    system ("cls");
    Stack stack(ukuranStack); // Membuat command & variabel baru Stack stack untuk mememuat jumlah stack yang bisa ditentukan oleh pengguna

    int pilihan;

    do {
    	stack.tampil();
        cout << "\nMenu Utama\n1. Push\n2. Pop\n3. Keluar\nPilih: ";
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            	system ("cls");
                stack.push();
                break;
            case 2:
            	system ("cls");
                stack.pop();
                break;
            case 3:
                cout << "Keluar dari program." << endl;
                break;
            default:
            	system("cls");
                cout << "Perintah tidak valid.\n" << endl;
                break;
        }
    } while (pilihan != 3);

    return 0;
}