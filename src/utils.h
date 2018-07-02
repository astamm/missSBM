#ifndef _utils_optim_H
#define _utils_optim_H

#include <cmath>

inline double logistic(double x) {
  return (1/(1+std::exp(-x)));
}

inline double g(double x) {
  return (-std::log(1+std::exp(-x)));
}

inline double u(double x) {
  return (std::exp(-x)/(1+std::exp(-x)));
}

#endif
