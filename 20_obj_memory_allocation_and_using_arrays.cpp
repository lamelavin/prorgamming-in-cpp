#include <iostream>

// ************************* Use of arrays ****************************
class Shop {
    int itemID[100];
    int itemPrice[100];
    int counter;        // initially counter has garbage value

    public:
        void initCounter(void) { counter = 0; }     // call this so make counter 0
        void setPrice(void);
        void displayPrice(void);
};

void Shop :: setPrice(void) {
    std::cout<<"Enter Id of your item number "<<counter+1<<std::endl;
    std::cin>>itemID[counter];
    std::cout<<"Enter Price of your item: "<<std::endl; 
    std::cin>>itemPrice[counter];
    counter++;
}

void Shop :: displayPrice(void) {
    for (int i = 0; i < counter; i++) {
        std::cout<<"The Price of item with ID: "<<itemID[i]<<" is "<<itemPrice[i]<<std::endl;
    } 
}

int main() {
    Shop s;
    s.initCounter();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.setPrice();
    s.displayPrice();
    return 0;
}

/*

********************** Objects Memory Allocation code *******************

#include <iostream>
#include <string>
using namespace std;


class BrideSide {
protected:
    static int container_of_water;      // this is protected means only this class and child class can access it. static keyword here means that the value will remain same and don't change
public:
    void give_water(int);
    void cups_remain(string);        
};

class GroomSide: public BrideSide {
protected:
    static int container_of_tea;
public:
    void give_tea(int);
    void cups_remain(string);
};

void BrideSide::give_water(int requested_water_glass) {
    if (container_of_water >= requested_water_glass) {
        container_of_water -= requested_water_glass;
        cout << "Here are the number of water cups you requested: " 
             << requested_water_glass << endl;
        return;
    }
    cout << "Not enough water cups available.\n";
}

void BrideSide::cups_remain(string cup) {
    if (cup == "water") {
        cout << "Water cups remaining: " << container_of_water << endl;
    }
}

void GroomSide::give_tea(int requested_tea_glass) {
    if (container_of_tea >= requested_tea_glass) {
        container_of_tea -= requested_tea_glass;
        cout << "Here are the number of tea cups you requested: " 
             << requested_tea_glass << endl;
        return;
    }
    cout << "Not enough tea cups available.\n";
}

void GroomSide::cups_remain(string cup) {
    if (cup == "tea") {
        cout << "Tea cups remaining: " << container_of_tea << endl;
    } else if (cup == "water") {
        cout << "Water cups remaining: " << container_of_water << endl;
    }
}


int BrideSide::container_of_water = 100;
int GroomSide::container_of_tea = 100;


int main() {
    BrideSide bride, b_brother, b_father;
    bride.give_water(20);
    b_brother.cups_remain("water");
    b_brother.give_water(50);
    b_father.give_water(50);
    bride.cups_remain("water");

    GroomSide groom, g_brother, g_father;
    groom.give_water(30);
    g_brother.give_water(50);
    g_father.cups_remain("water");
    g_father.give_tea(10);
    groom.cups_remain("water");
    groom.cups_remain("tea");

    return 0;
}

*/
