//
// Created by tothe on 10/5/2026.
//


#pragma once
#include <iostream>
#include <string>

class Player {
public:
    int id;
    std::string name;

    Player(int id, std::string name)
        : id(id), name(name) {}

    bool operator==(const Player& other) const {
        return id == other.id;
    }

    friend std::ostream& operator<<(std::ostream& os, const Player& player) {
        os << player.name;
        return os;
    }
};
