//
// Created by 이윤상 on 2023/09/14.
//

#include "Employee.h"

#include "fmt/format.h"

void Employee::print_info() const {
  fmt::println("({}, {}) => {} 만원",
              this->position,
              this->age,
              this->calculate_pay()
  );
}

int Employee::calculate_pay() const {
  return 200 + rank * 50;
}
