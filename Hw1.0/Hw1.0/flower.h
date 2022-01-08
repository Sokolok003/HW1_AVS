#ifndef __flower__
#define __flower__

//------------------------------------------------------------------------------
// flower.h - �������� �������� ��������������  � ��� ����������
//------------------------------------------------------------------------------

#include <fstream>
using namespace std;

# include "rnd.h"

// �������������
struct flower {
  char name[10];
  char type[10];
};

// ���� ���������� �������������� �� �����
void In(flower& f, ifstream& ifst);

// ��������� ���� ���������� ��������������
void InRnd(flower& f);

// ����� ���������� �������������� � ������������� �����
void Out(flower& f, ofstream& ofst);

// ���������� ��������� ��������������
double Quotient(flower& f);

#endif //__flower__

