///Matrix Algebra
#include "matrix_algebra.h"
#include <vector>

using namespace std;

Matrix_Algebra::Matrix_Algebra(){}


vector<vector<double> > Matrix_Algebra::m_mult(vector<double> a, vector<double> b) {
    vector<vector<double> > c(a.size(), vector<double>(b.size()));
    for (int i = 0; i < a.size(); i++) {
      for (int j = 0; j < b.size(); j++) {
        c[i][j] = a[i] * b[j];
      }
    }
    return c;
}
