#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t N>
void print_array_values(const std::array<std::uint32_t, N> *arr)
{
    // Printing out the actual address of the pointed-to array
    std::cout << arr << '\n';
    for (size_t i = 0; i < arr->size(); i++)
    {
        std::cout << (*arr)[i] << '\n';
    }
}

int main()
{
    std::uint32_t value = 42;

    std::uint32_t *value_ptr = &value;
    std::cout << value_ptr << '\n';
    std::cout << *value_ptr << '\n';

    auto my_array = std::array<std::uint32_t, 5U>{1, 2, 3, 4, 5};
    // Printing out the actual address of the original
    std::cout << &my_array << '\n';
    print_array_values(&my_array);

    return 0;
}

