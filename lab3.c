#include<stdio.h>
#include<math.h>
#include<locale.h>


int main() {

    unsigned a;
    printf("������ �᫮ � 8 ��⥬� ��᫥���\n");
    scanf("%o", &a);
    printf("� 10 ��⥬� ��᫥��� ��� �룫廊� ⠪ %d\n", a);
    printf("��� ⠪ � 16 ��⥬� ��᫥���-%X, � ��� � ��� ����⮢� ᤢ�� �� 4 � 16 ��⥬� ��᫥��� %X\n", a,
           a >> 4);
    printf("��� �� 16 ��⥬� ��᫥��� %X � �� � ���栭��� %X\n", a, ~a);
    unsigned b, c;
    printf("������ �᫮ � 16 ��⥬�\n");
    scanf("%X", &b);
    c = b & a;
    printf("�����? � ��� � �� ����⮢�� '�'-%X", c);

    return 0;
}
