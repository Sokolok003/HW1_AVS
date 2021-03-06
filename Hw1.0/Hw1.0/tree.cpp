#include "tree.h"

//------------------------------------------------------------------------------
// tree.cpp - ???????? ??????? ????????? ??????
//------------------------------------------------------------------------------


//------------------------------------------------------------------------------
// ???? ?????????? ?????? ?? ??????
void In(tree& t, ifstream& ifst) {
  ifst >> t.age >> t.name;
}

// ????????? ???? ?????????? ??????
void InRnd(tree& t) {
  t.age = Random(0);
  Random(t.name,'n');
}

//------------------------------------------------------------------------------
// ????? ?????????? ?????? ? ?????
void Out(tree& t, ofstream& ofst) {
  ofst << "It is Tree: age = "
    << t.age << ", name = " << t.name
    << ". Quotient = " << Quotient(t) << "\n";
}

//------------------------------------------------------------------------------
// ?????????? ???????? ??????
double Quotient(tree& t) {
  char vowel[] = "AEIOUYaeiouy";
  int sum_char = 0;
  int sum_vowel = 0;
  for (int i = 0; i < 10; ++i) {
    sum_char++;
    for (int j = 0; j < 12; ++j) {
      if (t.name[i] == vowel[j])
        sum_vowel++;
    }
  }
  return double(sum_vowel / sum_char);
}