//
// Created by tothe on 9/22/2026.
//



#include <iostream>
#include <memory>
#include "List.h"
#include "Player.h"

int main() {

    // test harness
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


    // Uno game
    std::cout << std::endl;
    std::cout << "== Uno Turn Order ==" << std::endl;

    std::unique_ptr<List<Player>> table1 = makeList<Player>();

    table1->addFront(new Player(3, "David"));
    table1->addFront(new Player(2, "Bob"));
    table1->addFront(new Player(1, "Alice"));

    std::cout << "Starting players: ";
    table1->print();

    table1->addAnywhere(2, new Player(4, "David"));

    std::cout << "David joins the game: ";
    table1->print();

    std::cout << "Before Reverse card: ";
    table1->print();

    table1->reverse();

    std::cout << "After Reverse card: ";
    table1->print();

    table1->deleteAnywhere(1);

    std::cout << "After a player leaves: ";
    table1->print();

    std::unique_ptr<List<Player>> table2 = makeList<Player>();

    table2->addFront(new Player(6, "Frank"));
    table2->addFront(new Player(5, "Emma"));

    std::cout << "First table before merge: ";
    table1->print();

    std::cout << "Second table before merge: ";
    table2->print();

    table1->concat(table2.get());

    std::cout << "First table after merge: ";
    table1->print();

    std::cout << "Second table after merge: ";
    table2->print();

    return 0;
}
