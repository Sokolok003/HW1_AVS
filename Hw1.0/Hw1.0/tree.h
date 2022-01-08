#ifndef __tree__
#define __tree__

//------------------------------------------------------------------------------
// tree.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// �������������
struct tree {
  int age;
  char name[10];
};

// ���� ���������� �������������� �� �����
void In(tree& t, ifstream& ifst);

// ��������� ���� ���������� ��������������
void InRnd(tree& t);

// ����� ���������� �������������� � ������������� �����
void Out(tree& t, ofstream& ofst);

// ���������� ��������� ��������������
double Quotient(tree& t);

#endif //__tree__
