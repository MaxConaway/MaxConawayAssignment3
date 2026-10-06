//
// Created by tothe on 9/22/2026.
//

#pragma once
#include <iostream>
#include "Node.h"
#include "List.h"

template <typename T>
class LinkedList : public List<T> {
public:
    LinkedList() : head_(nullptr), size_(0) {}
    void addFront(T* value) override {
    }
    void deleteFront() override {
    }
    bool search(T* value) const override {
    }
    void print() const override {
    }

    void addAnywhere(int position, T* value) override {
    }
    void deleteAnywhere(int position) override {
    }
    void reverse() override {
    }
    void concat(List<T>* other) override {
    }
    ~LinkedList() override {
    }

private:
    Node<T>* head_;
    int size_;
};