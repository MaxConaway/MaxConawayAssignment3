//
// Created by tothe on 9/22/2026.
//


#include <iostream>
#include <memory>
#include "List.h"
#include "Player.h"

int main() {
    // Part 1: Test the new list operations
    std::cout << "== List<int>: addAnywhere / deleteAnywhere / reverse =="
              << std::endl;

    std::unique_ptr<List<int>> nums = makeList<int>();

    nums->addFront(new int(10));
    nums->addFront(new int(20));
    nums->addFront(new int(30));
    nums->print();

    nums->addAnywhere(1, new int(99));
    nums->print();

    nums->deleteAnywhere(2);
    nums->print();

    nums->reverse();
    nums->print();

    std::cout << std::endl;
    std::cout << "== List<int>: concat ==" << std::endl;

    std::unique_ptr<List<int>> more = makeList<int>();

    more->addFront(new int(2));
    more->addFront(new int(1));
    more->print();

    nums->concat(more.get());
    nums->print();
    more->print();

    return 0;
}
