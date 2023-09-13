//
// Created by 이윤상 on 2023/09/14.
//

#include "Employee.h"

using namespace std;

namespace {
    constexpr int RET_SUCCESS = 0;
    constexpr int RET_FAILURE = 1;
}


int main() {
  Employee e1("이윤상", 27, "사원", 1);
  e1.print_info();

  return ::RET_SUCCESS;
}