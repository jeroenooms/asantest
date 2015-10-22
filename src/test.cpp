#include <Rcpp.h>

// [[Rcpp::export]]
std::vector<int> test(int n = 100) {
  std::vector<int> fields;
  for (int i = 0; i < n; i++) {
    fields.resize(i);
  }
  return fields;
}
