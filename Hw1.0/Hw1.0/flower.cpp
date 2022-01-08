#include "flower.h"

//------------------------------------------------------------------------------
// flower.cpp - содержит функции обработки цветка
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Ввод параметров цветка из потока
void In(flower& f, ifstream& ifst) {
  ifst >> f.type >> f.name;
}

// Случайный ввод параметров цветка
void InRnd(flower& f) {
  Random(f.type, 't');
  Random(f.name, 'n');
}

//------------------------------------------------------------------------------
// Вывод параметров цветка в поток
void Out(flower& f, ofstream& ofst) {
  ofst << "It is flower: type = "
    << f.type << ", name = " << f.name
    << ". Quotient = " << Quotient(f) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление частного цветка
double Quotient(flower& f) {
  char vowel[] = "AEIOUYaeiouy";
  int sum_char = 0;
  int sum_vowel = 0;
  for (int i = 0; i < 10; ++i) {
    sum_char++;
    for (int j = 0; j < 12; ++j) {
      if (f.name[i] == vowel[j])
        sum_vowel++;
    }
  }
  return double(sum_vowel / sum_char);
}