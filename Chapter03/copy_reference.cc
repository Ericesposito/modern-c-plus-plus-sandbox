#include <array>
#include <cstdint>
#include <iostream>

template <std::size_t N>
void print_array_values(const std::array<std::uint32_t, N> &arr)
{
    // Printing the memory address of our local array function
    // & IS in the argument here, so our my_array is referenced
    // std::cout << &arr << '\n';
    for (size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

template <std::size_t N>
void double_values(std::array<std::uint32_t, N> &arr)
{
    // Printing the memory address of our local array function
    // & IS in the argument here, so our my_array is referenced
    for (size_t i = 0; i < arr.size(); i++)
    {
        arr[i] = arr[i] * 2;
    }
}

int main()
{
    auto my_array = std::array<std::uint32_t, 5U>{1, 2, 3, 4, 5};

    // Printing the memroy address of the my_array variable
    // std::cout << &my_array << '\n';

    print_array_values(my_array);
    double_values(my_array);
    print_array_values(my_array);

    return 0;
}
