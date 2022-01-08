#include "bush.h"

//------------------------------------------------------------------------------
// bush.cpp - содержит функции обработки куста
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// Ввод параметров куста из потока
void In(bush& b, ifstream& ifst) {
  ifst >> b.type >> b.name;
}

// Случайный ввод параметров куста
void InRnd(bush& b) {
  
  Random(b.type,'t');
  Random(b.name,'n');
}

//------------------------------------------------------------------------------
// Вывод параметров куста в поток
void Out(bush& b, ofstream& ofst) {
  ofst << "It is bush: type = "
    << b.type << ", name = " << b.name
    << ". Quotient = " << Quotient(b) << "\n";
}

//------------------------------------------------------------------------------
// Вычисление частного куста
double Quotient(bush& b) {
  char vowel[] = "AEIOUYaeiouy";
  int sum_char = 0;
  int sum_vowel = 0;
  for (int i = 0; i < 10; ++i) {
    sum_char++;
    for (int j = 0; j < 12; ++j) {
      if (b.name[i] == vowel[j])
        sum_vowel++;
    }
  }
  return double(sum_vowel / sum_char);
}