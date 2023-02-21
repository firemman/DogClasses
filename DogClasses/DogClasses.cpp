//#pragma comment(lib, "libname.lib")

#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Dog {
public:
    string razmer;
    int color;

public:
    Dog() { this->razmer = "Empty"; this->color = 0; }
    Dog(string razmer, int color) { this->razmer = razmer; this->color = color; }
    ~Dog() { }

    void setRazmer(string razmer) { this->razmer = razmer; }
    void setColor(int color) { this->color = color; }

    string getRazmer() { return razmer; }
    int getColor() { return color; }

    void DogWalk();
    void DogEat();
};

void Dog::DogWalk() {
    cout << " идёт.";
}

void Dog::DogEat() {
    cout << " ест.";
}

class HomeDog : public Dog {
public:
    string klichka;
    int number;

public:
    HomeDog() { this->klichka = "Empty"; this->color = 0; }
    HomeDog(int razmer, int color, string klichka, int number) { this->razmer = razmer; this->color = color; this->klichka = klichka; this->number = number; }
    void setNumber(int number) { this->number = number; }
    void setKlichka(string klichka) { this->klichka = klichka; }

    int getNumber() { return number; }
    string getKlichka() { return klichka; }
};

/*void HomeDog::infoNumber() {

}*/

int main() {
    setlocale(LC_ALL, "rus");
    HomeDog hd1;
    hd1.setRazmer("Middle razmer");
    hd1.setColor(12);
    hd1.setKlichka("Zhychka");
    hd1.setNumber(89208);

    cout << hd1.getKlichka();
    hd1.DogEat();
    cout << "\n";
    cout << hd1.getKlichka();
    hd1.DogWalk();
    cout << "\n\nРазмеры " << hd1.getKlichka() << ": " << hd1.getRazmer() << "; ";
    cout << "\nЦвет " << hd1.getKlichka() << ": " << hd1.getColor() << "; ";
    cout << "\nНомер владельца " << hd1.getKlichka() << ": " << hd1.getNumber() << "; \n\n";
}