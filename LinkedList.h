//
// Created by Cristian Alexis Gonzalez Aranda on 9/17/26.
//
#pragma once
#include <iostream>
using namespace std;


template <typename T>
class LinkedList {
public:
    Node<T>* head;
    int size;
    Node<T> *tail;

    LinkedList(T *value) {
        Node<T> *temp = new Node<T>(value);
        head = temp;
        size = 1;
    }
    LinkedList() {
        head = nullptr;
        size = 0;
    }
    void print() {
        Node<T> *temp1 = head;
        while (temp1 != nullptr) {
            temp1 -> print();
            temp1 = temp1 -> next;
        }
    }
    void append(T *value) {
        Node<T> *newNode = new Node<T>(value);
        if (head == nullptr) {
            head = newNode;
            size++;
            return;
        }
        tail -> next = newNode;
        tail = tail -> next; // tail = newNode
        size++;
    }
    // Delete at the end
};
