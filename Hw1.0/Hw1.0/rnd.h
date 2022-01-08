#ifndef __rnd__
#define __rnd__

#include <cstdlib>

//------------------------------------------------------------------------------
// rnd.h - содержит генератор случайных чисел в диапазоне от 1 до 10000
//------------------------------------------------------------------------------

inline int Random(int age) {
  return rand() % 10000 + 1;
}

inline void Random(char* s, char a) {
  int len = 9;
  char alphanum[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";
  switch (a) {
  case 'n':
    for (int i = 0; i < len; ++i) {
      s[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    s[len] = 0;
    break;

  case 't':

    int index = rand() % 12;
    switch (index) {
    case 0:
      s[0] = 'J';
      s[1] = 'a';
      s[2] = 'n';
      s[3] = 0;

    case 1:
      s[0] = 'F';
      s[1] = 'e';
      s[2] = 'b';
      s[3] = 0;
    case 2:
      s[0] = 'M';
      s[1] = 'a';
      s[2] = 'r';
      s[3] = 0;
    case 3:
      s[0] = 'A';
      s[1] = 'p';
      s[2] = 'r';
      s[3] = 0;
    case 4:
      s[0] = 'M';
      s[1] = 'a';
      s[2] = 'y';
      s[3] = 0;
    case 5:
      s[0] = 'J';
      s[1] = 'u';
      s[2] = 'n';
      s[3] = 0;
    case 6:
      s[0] = 'J';
      s[1] = 'u';
      s[2] = 'l';
      s[3] = 0;
    case 7:
      s[0] = 'A';
      s[1] = 'u';
      s[2] = 'g';
      s[3] = 0;
    case 8:
      s[0] = 'S';
      s[1] = 'e';
      s[2] = 'p';
      s[3] = 0;
    case 9:
      s[0] = 'O';
      s[1] = 'c';
      s[2] = 't';
      s[3] = 0;
    case 10:
      s[0] = 'N';
      s[1] = 'o';
      s[2] = 'v';
      s[3] = 0;
    case 11:
      s[0] = 'D';
      s[1] = 'e';
      s[2] = 'c';
      s[3] = 0;


    }

    break;
  }
}

#endif //__rnd__

