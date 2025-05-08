#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Diet {
    string type;
public:
    Diet(string t) : type(t) {}
    string getType() const { return type; }
};

class Habitat {
    string description;
public:
    Habitat(string desc) : description(desc) {}
    string getDescription() const { return description; }
};

class Animal {
protected:
    string name;
    int age;
    const string species;
    Diet diet;
    Habitat habitat;

public:
    Animal(string n, int a, string s, Diet d, Habitat h)
        : name(n), age(a), species(s), diet(d), habitat(h) {}

    virtual void makeSound() const = 0;
    virtual void eat() const = 0;

    virtual void displayInfo() final {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Species: " << species << endl;
        cout << "Diet Type: " << diet.getType() << endl;
        cout << "Habitat Description: " << habitat.getDescription() << endl;
    }

    virtual ~Animal() {}
};

class Lion : public Animal {
public:
    Lion(string n, int a, Diet d, Habitat h)
        : Animal(n, a, "Lion", d, h) {}

    void makeSound() const override {
        cout << name << " the Lion says: Roar!" << endl;
    }

    void eat() const override {
        cout << name << " eats meat." << endl;
    }
};

class Elephant : public Animal {
public:
    Elephant(string n, int a, Diet d, Habitat h)
        : Animal(n, a, "Elephant", d, h) {}

    void makeSound() const override {
        cout << name << " the Elephant says: Trumpet!" << endl;
    }

    void eat() const override {
        cout << name << " eats plants." << endl;
    }
};

void makeAllAnimalsSound(const vector<Animal*>& zoo) {
    for (const auto& animal : zoo)
        animal->makeSound();
}

int main() {
    vector<Animal*> zoo;

    Diet carnivore("Carnivore");
    Diet herbivore("Herbivore");

    Habitat savanna("Savanna");
    Habitat forest("Forest");

    zoo.push_back(new Lion("Simba", 5, carnivore, savanna));
    zoo.push_back(new Lion("Nala", 4, carnivore, savanna));
    zoo.push_back(new Elephant("Dumbo", 10, herbivore, forest));
    zoo.push_back(new Elephant("Ella", 8, herbivore, forest));

    makeAllAnimalsSound(zoo);

    for (const auto& animal : zoo)
        animal->displayInfo();

    for (auto animal : zoo)
        delete animal;

    return 0;
}
