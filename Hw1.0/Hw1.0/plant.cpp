//------------------------------------------------------------------------------
// plant.cpp - содержит процедуры св€занные с обработкой обобщенного растени€
// и создани€ произвольного растени€
//------------------------------------------------------------------------------

#include "plant.h"

//------------------------------------------------------------------------------
// ¬вод параметров обобщенного растени€ из файла
bool In(plant& p, ifstream& ifst) {
  int k;
  ifst >> k;
  switch (k) {
  case 1:
    p.k = plant::FLOWER;
    In(p.f, ifst);
    return true;
  case 2:
    p.k = plant::TREE;
    In(p.t, ifst);
    return true;
  case 3:
    p.k = plant::BUSH;
    In(p.b, ifst);
    return true;
  default:
    return false;
  }
}

// —лучайный ввод обобщенного растени€
bool InRnd(plant& p) {
  auto k = rand() % 3 + 1;
  switch (k) {
  case 1:
    p.k = plant::FLOWER;
    InRnd(p.f);
    return true;
  case 2:
    p.k = plant::TREE;
    InRnd(p.t);
    return true;
  case 3:
    p.k = plant::BUSH;
    InRnd(p.b);
    return true;
  default:
    return false;
  }
}

//------------------------------------------------------------------------------
// ¬ывод параметров текущего растени€ в поток
void Out(plant& p, ofstream& ofst) {
  switch (p.k) {
  case plant::FLOWER:
    Out(p.f, ofst);
    break;
  case plant::TREE:
    Out(p.t, ofst);
    break;
  case plant::BUSH:
    Out(p.b, ofst);
    break;
  default:
    ofst << "Incorrect plant!" << endl;
  }
}

//------------------------------------------------------------------------------
// ¬ычисление частного растени€
double Quotient(plant& p) {
  switch (p.k) {
  case plant::FLOWER:
    return Quotient(p.f);
    break;
  case plant::TREE:
    return Quotient(p.t);
    break;
  case plant::BUSH:
    return Quotient(p.b);
    break;
  default:
    return 0.0;
  }
}