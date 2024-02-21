#include <iostream>
using namespace std;

class Processor {
private:
    string model;
public:
    Processor() {

    }
    Processor(string m) {
        model = m;
    }
    string getModel() {
        return model;
    }
};

class RAM {
private:
    int GB;
public:
    RAM() {

    }
    RAM(int s) {
        GB = s;
    }
    int getGB() {
        return GB;
    }
};

class Mouse {
private:
    string brand;
public:
    Mouse() {

    }
    Mouse(string b) {
        brand = b;
    }
    string getBrand() {
        return brand;
    }
};

class Webcam {
private:
    string resolution;
public:
    Webcam() {

    }
    Webcam(string r) {
        resolution = r;
    }
    string getResolution() {
        return resolution;
    }
};
class Printer {
private:
    string type;
public:
    Printer() {

    }
    Printer(string t) {
        type = t;
    }
    string getType() {
        return type;
    }
};

class GraphicsCard {
private:
    string modelCard;
public:
    GraphicsCard() {

    }
    GraphicsCard(string c) {
        modelCard = c;
    }
    string getChipset() {
        return modelCard;
    }
};

class Laptop {
private:
    Processor processor;
    RAM ram;
    Mouse* mouse;
    Webcam webcam;
    Printer printer;
    GraphicsCard graphicsCard;
public:
    Laptop(Processor p, RAM r, Mouse* m, Webcam w, Printer pr, GraphicsCard g) {
        processor = p;
        ram = r;
        mouse = m;
        webcam = w;
        printer = pr;
        graphicsCard = g;
    }
    void printSpecs() {
        cout << "Процессор: " << processor.getModel() << endl;
        cout << "Оперативка: " << ram.getGB() << "GB" << endl;
        cout << "Мышка: " << mouse->getBrand() << endl;
        cout << "Камера: " << webcam.getResolution() << endl;
        cout << "Принтер: " << printer.getType() << endl;
        cout << "Видюха: " << graphicsCard.getChipset() << endl;
    }
};

int main() {
    Processor processor("AMD Ryzen 5600x");
    RAM ram(32);
    Mouse mouse("Logitech G305 SE");
    Webcam webcam("Logitech 720p");
    Printer printer("Laser");
    GraphicsCard graphicsCard("NVIDIA GeForce GTX 1080TI");

    Laptop laptop(processor, ram, &mouse, webcam, printer, graphicsCard); 
    laptop.printSpecs();
    return 0;
}
