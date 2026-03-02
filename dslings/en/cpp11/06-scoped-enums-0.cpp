// d2mcpp: https://github.com/mcpp-community/d2mcpp
// license: Apache-2.0
// file: dslings/cpp11/06-scoped-enums-0.cpp
//
// Exercise: cpp11 | 06 - scoped enums | Traditional enum type potential issues
//
// Tips: Fix code through compiler error prompts and understand potential issues with traditional enum types
//
// Docs:
//   - https://en.cppreference.com/w/cpp/language/enum
//
// Auto-Checker command:
//
//   d2x checker scoped-enums
//

#include <d2x/cpp/common.hpp>

#include <iostream>

enum class Color {
    RED,
    GREEN,
    BLUE,
    ORANGE // 1. Type conflict - Orange color
};

enum class Fruit {
    Apple,
    Banana,
    ORANGE // 1. Type conflict - Orange fruit
};

int main() {
 
    Color color = Color::RED;
    Fruit fruit = Fruit::Apple;

    // d2x_assert_eq(color, Color::RED);
    // d2x_assert_eq(fruit, Fruit::Apple);
    d2x_assert(color == Color::RED);
    d2x_assert(fruit == Fruit::Apple);

    // 2. Syntactically correct, but logically wrong type matching
    if (color == Color::RED) { // Do not delete this line of code
        // Code will runFruit
        // D2X_WAIT
    }

    if (fruit == Fruit::Apple) {
        // D2X_WAIT
    }

    // D2X_WAIT

    return 0;
}