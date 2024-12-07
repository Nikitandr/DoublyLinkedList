#include "DoublyLinkedList.h"

// Добавление элемента в конец списка
void DoublyLinkedList::append(int value)
{
    Node* newNode = new Node(value);

    if (tail == nullptr)
    {   // Список пуст
        head = tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

// Удаление элемента из конца списка
void DoublyLinkedList::removeLast()
{
    if (head == nullptr)
    {   // Список пуст
        cout << "Список пуст. Удаление невозможно.\n";
        return;
    }
    else if (head == tail)
    {   // В списке один элемент
        delete head;
        head = tail = nullptr;
    }
    else
    {
        Node* temp = tail;

        tail = tail->prev;
        tail->next = nullptr;

        delete temp;
    }
}

// Печать списка
void DoublyLinkedList::print() const
{
    Node* current = head;

    while (current != nullptr)
    {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

// Поиск элемента в списке
bool DoublyLinkedList::search(int value) const
{
    Node* current = head;

    while (current != nullptr)
    {
        if (current->data == value)
        {
            return true;
        }
        
        current = current->next;
    }

    return false;
}

// Деструктор для освобождения памяти
DoublyLinkedList::~DoublyLinkedList()
{
    Node* current = head;

    while (current != nullptr)
    {
        Node* nextNode = current->next;

        delete current;
        current = nextNode;
    }
}