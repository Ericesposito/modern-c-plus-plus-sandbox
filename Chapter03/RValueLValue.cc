#include <iostream>

// LValue: Left
// RValue: Right

void copy_by_value(int v) // input only, just a copy
{
    std::cout << v << std::endl;
}

void copy_by_value_const(const int v) // input only, just a copy
{
    std::cout << v << std::endl;
}

void reference(int &v) // input and output
{
    std::cout << v << std::endl;
}

void reference_const(const int &v) // input only
{
    std::cout << v << std::endl;
}

int main()
{
    int lvalue = 2;
    const int lvalue_const = 2;

    // All 3 alternatives are valid when creating copies
    copy_by_value(lvalue);
    copy_by_value(lvalue_const);
    copy_by_value(2);

    // All 3 alternatives are valid when creating const copies as well
    copy_by_value_const(lvalue);
    copy_by_value_const(lvalue_const);
    copy_by_value_const(2);

    // Here, we CANNOT use an R value
    reference(lvalue);
    // reference(lvalue_const);
    // reference(2);

    // Here,
    reference_const(lvalue);
    reference_const(lvalue_const);
    reference_const(2); // a temp. variable would be created and referenced inside the fn

    return 0;
}
