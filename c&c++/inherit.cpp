#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void eat() {
        cout << "Animal is eating...\n";
    }
};

// Derived class inheriting from Animal
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog is barking...\n";
    }
};

int main() {
    Dog myDog;
    myDog.eat();  // Accessing function from base class
    myDog.bark(); // Accessing function from derived class
    return 0;
}
