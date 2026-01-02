#include <iostream>

using namespace std;

// This class represents a item in a shop
class ShopItem {
    int id;
    float price;
    
    public:
        void setData(int, float);
        void display() const;
        friend ostream& operator<<(ostream&, const ShopItem&);
};

void ShopItem :: setData(int a, float b) {
    id = a;
    price = b;
}

void ShopItem :: display() const {
    cout << *this;
}

ostream& operator<<(ostream& out, const ShopItem& obj) {
    out << "ID is " << obj.id << "\n"
    << "Price is " << obj.price << "\n";
    return out;
}

int main() {
    int size = 3;
    ShopItem* ptr = new ShopItem[size];

    // Let's say the items are :
    // 1. Daal
    // 2. Chawal
    // 3. Flour

    int x, y;
    for (int i = 0; i < size; i++) {
        cout << "Enter ID and price of item " << i+1 << " : ";
        cin >> x >> y;
        // (*ptr).setData(x, y);    // same as :    
        (ptr + i)->setData(x, y);
    }

    for (int i = 0; i < size; i++) {
        cout << "Item number: " << i+1 << "\n";
        (ptr + i)->display();
    }

    delete[] ptr;
    return 0;
}



/*
#include <iostream>

using namespace std;

class Employee {
    string name;
    int employee_id;
    float salary;
    string department;

    public:
        Employee();
        Employee(string, int, float, string);
        friend ostream& operator<<(ostream&, const Employee&);
};

Employee :: Employee() {
    cout << "Employee initialized! Please assign the values to it.\n";
}

Employee :: Employee(string n, int id, float s, string dep) : name(n), employee_id(id), salary(s), department(dep) {
    cout << "Values to Employee initialized!\n";
}

ostream& operator<<(ostream& out, const Employee& obj) {
    out << obj.name << "\n" << obj.employee_id << "\n" << obj.salary << "\n" << obj.department << "\n";
    return out;
}

int main() {
    Employee* lavin = new Employee("lavin_varyani", 101, 1000000.00f, "IT");
    cout << *lavin;
    delete lavin;
    return 0;
}

*/