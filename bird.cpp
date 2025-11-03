#include <iostream>
#include "bird.h"
#include <string>

class Duck : public Bird {
public:
    Duck() : Bird("Duck") {
        cry();
    }
    void cry() override {
        std::cout << "Quack!" << std::endl;
    }
    ~Duck() override {
        cry();
    }
};

class Penguin : public Bird {
public:
    Penguin() : Bird("Penguin") {
        cry();
    }
    void cry() override {
        std::cout << "Squawk!" << std::endl;
    }
    void fly() override {
        std::cout << "This bird can't fly." << std::endl;
    }
    ~Penguin() override {
        cry();
    }
};

class Eagle : public Bird {
public:
    Eagle() : Bird("Eagle") {
        cry();
    }
    void cry() override {
        std::cout << "Screech!" << std::endl;
    }
    void swim() override {
        std::cout << "This bird can't swim." << std::endl;
    }
    ~Eagle() override {
        cry();
    }
};