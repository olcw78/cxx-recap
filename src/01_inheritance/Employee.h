//
// Created by 이윤상 on 2023/09/14.
//

#ifndef RECAP_EMPLOYEE_H
#define RECAP_EMPLOYEE_H


#include <string>

class Employee {
private:
    std::string name;
    int age;

    std::string position;
    int rank;

public:
    Employee(
            const std::string &name,
            int age,
            const std::string &position,
            int rank
    ) : name(name), age(age),
        position(position),
        rank(rank) {}

    Employee() = default;

public:
    void print_info() const;

    int calculate_pay() const;
};


#endif //RECAP_EMPLOYEE_H
