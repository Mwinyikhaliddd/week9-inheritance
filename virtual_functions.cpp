#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    // Step 4 Fix: 'virtual' enables dynamic binding at runtime
    virtual void speak() {
        cout << "Animal makes a generic sound." << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void speak() override {
        cout << "Dog barks: Woof! Woof!" << endl;
    }
};

int main() {
    cout << "--- With Virtual Keyword (Dynamic Binding) ---" << endl;

    Animal* myPet = new Dog();
    myPet->speak(); // Calls Dog::speak()

    delete myPet;
    return 0;
}

