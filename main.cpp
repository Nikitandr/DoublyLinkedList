#include "DoublyLinkedList.h"

int main()
{
    setlocale(LC_ALL, "Rus");

    DoublyLinkedList list;

    list.append(10);
    list.append(20);
    list.append(30);

    cout << "������: ";
    list.print();

    cout << "����� 20: " << (list.search(20) ? "������" : "�� ������") << endl;
    cout << "����� 40: " << (list.search(40) ? "������" : "�� ������") << endl;

    list.removeLast();
    cout << "������ ����� �������� ���������� ��������: ";
    list.print();

    return 0;
}
