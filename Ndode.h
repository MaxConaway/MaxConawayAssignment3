//
// Created by tothe on 9/22/2026.
//

template <typename T>
class Node {
public:
    T* data;
    Node<T>* next;

    explicit Node(T* value) : data(value), next(nullptr) {}
};
