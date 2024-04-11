#include <iostream>

// Input Only Parameters should be const
constexpr std::uint64_t faculty(const std::uint8_t n)
{
    auto result = std::uint64_t{}; // default value for uint64 is 0

    for (std::uint8_t i = 0; i <= n; i++)
    {
        result *= i;
    }

    return result;
}

int main()
{
    // const - run time only (only integers may be compile time)
    // constexpr (c++17) - compile and run time

    const auto value1 = faculty(5);            // executed at run-time
    constexpr static auto value2 = faculty(5); // excecuted at compile-time

    return 0;
}
