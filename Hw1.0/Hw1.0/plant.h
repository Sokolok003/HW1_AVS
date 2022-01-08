#ifndef __plant__
#define __plant__

//------------------------------------------------------------------------------
// plant.h - �������� �������� ���������� �������������� ������,
//------------------------------------------------------------------------------

#include "flower.h"
#include "bush.h"
#include "tree.h"
//------------------------------------------------------------------------------
// ���������, ���������� ��� ��������� ��������
struct plant {
  // �������� ������ ��� ������ �� �����
  enum key { FLOWER, BUSH, TREE };
  key k; // ����
  // ������������ ������������
  union { // ���������� ���������� ����������
    flower f;
    bush b;
    tree t;
  };
};

// ���� ���������� ������
bool In(plant& p, ifstream& ifdt);

// ��������� ���� ���������� ������
bool InRnd(plant& p);

// ����� ���������� ������
void Out(plant& p, ofstream& ofst);

// ���������� ��������� ���������� ������
double Quotient(plant& p);

#endif
