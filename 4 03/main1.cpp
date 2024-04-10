#include <iostream>
#include <string>

using namespace std;

class Processor {
private:
    string model;

public:
    Processor(const string& m) : model(m) {}

    string getModel() const {
        return model;
    }
};

class RAM {
private:
    int size; 

public:
    RAM(int s) : size(s) {}

    int getSize() const {
        return size;
    }
};

class HardDrive {
private:
    int capacity;
    string type; 

public:
    HardDrive(int c, const string& t) : capacity(c), type(t) {}

    int getCapacity() const {
        return capacity;
    }

    string getType() const {
        return type;
    }
};


class GraphicsCard {
private:
    string model;

public:
    GraphicsCard(const string& m) : model(m) {}

    string getModel() const {
        return model;
    }
};

class Display {
private:
    int size;

public:
    Display(int s) : size(s) {}

    int getSize() const {
        return size;
    }
};

class Keyboard {
private:
    string type; 
public:
    Keyboard(const string& t) : type(t) {}

    string getType() const {
        return type;
    }
};

class Battery {
private:
    int capacity;

public:
    Battery(int c) : capacity(c) {}

    int getCapacity() const {
        return capacity;
    }
};

class Laptop {
private:
    Processor processor;
    RAM ram;
    HardDrive hardDrive;
    GraphicsCard graphicsCard;
    Display display;
    Keyboard keyboard;
    Battery battery;

public:
    Laptop(const Processor& p, const RAM& r, const HardDrive& h, const GraphicsCard& g,
        const Display& d, const Keyboard& k, const Battery& b)
        : processor(p), ram(r), hardDrive(h), graphicsCard(g), display(d), keyboard(k), battery(b) {}

    void printInfo() const {
        cout << "Processor: " << processor.getModel() << endl;
        cout << "RAM: " << ram.getSize() << " GB" << endl;
        cout << "Hard Drive: " << hardDrive.getCapacity() << " GB " << hardDrive.getType() << endl;
        cout << "Graphics Card: " << graphicsCard.getModel() << endl;
        cout << "Display Size: " << display.getSize() << " inches" << endl;
        cout << "Keyboard Type: " << keyboard.getType() << endl;
        cout << "Battery Capacity: " << battery.getCapacity() << " mAh" << endl;
    }
};

int main() {
    Processor processor("Intel Core i3 10100F");
    RAM ram(16);
    HardDrive hardDrive(512, "SSD");
    GraphicsCard graphicsCard("AMD Radeon RX 6600XT Nitro +");
    Display display(15);
    Keyboard keyboard("Mechanik");
    Battery battery(6000);

    Laptop laptop(processor, ram, hardDrive, graphicsCard, display, keyboard, battery);
    laptop.printInfo();

    return 0;
}
