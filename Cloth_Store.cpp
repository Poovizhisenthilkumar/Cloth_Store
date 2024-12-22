
#include <iostream>
#include <string>

using namespace std;

struct Cloth {
    string type;
    string color;
    int quantity;
    double price;
};

void addCloth(Cloth clothes[], int& size) {
    cout << "Enter cloth type: ";
    cin >> clothes[size].type;
    cout << "Enter cloth color: ";
    cin >> clothes[size].color;
    cout << "Enter cloth quantity: ";
    cin >> clothes[size].quantity;
    cout << "Enter cloth price: ";
    cin >> clothes[size].price;
    size++;
}

void displayClothes(Cloth clothes[], int size) {
    cout << "Cloth Store Inventory:" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Type: " << clothes[i].type << endl;
        cout << "Color: " << clothes[i].color << endl;
        cout << "Quantity: " << clothes[i].quantity << endl;
        cout << "Price: $" << clothes[i].price << endl;
        cout << endl;
    }
}

void searchCloth(Cloth clothes[], int size) {
    string type;
    cout << "Enter cloth type to search: ";
    cin >> type;
    bool found = false;
    for (int i = 0; i < size; i++) {
        if (clothes[i].type == type) {
            cout << "Cloth found!" << endl;
            cout << "Type: " << clothes[i].type << endl;
            cout << "Color: " << clothes[i].color << endl;
            cout << "Quantity: " << clothes[i].quantity << endl;
            cout << "Price: $" << clothes[i].price << endl;
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Cloth not found!" << endl;
    }
}

int main() {
    const int MAX_CLOTHES = 100;
    Cloth clothes[MAX_CLOTHES];
    int size = 0;
    int choice;
    do {
        cout << "Cloth Store Management System" << endl;
        cout << "1. Add cloth" << endl;
        cout << "2. Display clothes" << endl;
        cout << "3. Search cloth" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addCloth(clothes, size);
                break;
            case 2:
                displayClothes(clothes, size);
                break;
            case 3:
                searchCloth(clothes, size);
                break;
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}


