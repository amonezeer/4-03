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
    Processor processor("Intel Core i7");
    RAM ram(16);
    HardDrive hardDrive(512, "SSD");
    GraphicsCard graphicsCard("NVIDIA GeForce GTX 1650");
    Display display(15);
    Keyboard keyboard("Membrane");
    Battery battery(6000);

    Laptop laptop(processor, ram, hardDrive, graphicsCard, display, keyboard, battery);
    laptop.printInfo();

    return 0;
}
