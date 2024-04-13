#include <array>
#include <cstdint>
#include <iostream>

// When passing in C-style arrays into a function, it will decay to a pointer
// Since we are running on a 64bit OS, pointers have a size of 8bytes (64bits)
void print_array_values1(const std::uint32_t arr[], const std::size_t len)
{
    for (std::uint32_t i = 0; i < len; i++)
    {
        std::cout << arr[i] << '\n';
    }
}

// Here is our template parameter N
template <std::size_t N>
void print_array_values2(const std::array<std::uint32_t, N> arr)
{
    for (std::size_t i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << '\n';
    }
}

int main()
{
    constexpr static auto len = std::size_t{5};

    // C-Style Array
    std::uint32_t my_array[len] = {1, 2, 3, 4, 5};
    print_array_values1(my_array, len);

    // C++ Array
    auto my_array2 = std::array<uint32_t, len>{1, 2, 3, 4, 5};
    print_array_values2(my_array2);

    return 0;
}
