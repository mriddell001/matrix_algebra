#include "matrix_algebra.h"
#include <vector>
#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
  vector<double> a, b;
  for (double i = 1; i < 6; i++) {
    a.push_back(i);
  }
  for (double i = 1; i < 7; i++) {
    b.push_back(i);
  }
  vector<vector<double> > c(a.size(), vector<double>(b.size()));
  Matrix_Algebra ma;
  c = ma.m_mult(a,b);
  for (int i = 0; i < a.size(); i++) {
    for (int j = 0; j < b.size(); j++) {
      cout << c[i][j];
      if (j < b.size()-1) {
        cout << " ";
      }
    }
    cout << endl;
  }
  return 0;
}
