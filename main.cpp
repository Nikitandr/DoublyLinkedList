#include "DoublyLinkedList.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    DoublyLinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "Список: ";
    list.print();

    cout << "Поиск 20: " << (list.search(20) ? "найден" : "не найден") << endl;
    cout << "Поиск 40: " << (list.search(40) ? "найден" : "не найден") << endl;

    list.removeLast();
    cout << "Список после удаления последнего элемента: ";
    list.print();

    return 0;
}
