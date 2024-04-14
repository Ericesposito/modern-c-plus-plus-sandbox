#include <iostream>

int main()
{
    // For a C-style array, the length CANNOT be non-const
    // constexpr static auto len = std::size_t{5};

    // C-style array - created on the Stack which means
    // the size of this array must be known at compile-time
    // std::uint32_t my_array[len] = {1, 2, 3, 4, 5}; // Stack

    auto len2 = std::size_t{};
    // This allows the user to enter the length of the array

    std::cin >> len2;
    // Memory needed will be len2, times the size of a uint32
    // This new keyword allows us to create new memory on the Heap
    // If user enters 4, Heap will allocate 4 x (32bit = 4Bytes) = 16Bytes

    std::uint32_t *heap_arr = new std::uint32_t[len2];
    // Here, we store the pointer into a heap_arr pointer variable
    // This new function returns a pointer to the memory location that the OS reserves for us
    // We receive a pointer to the FIRST address of our 16Bytes we have reserved

    std::cout << heap_arr << '\n';
    // This will print out our memory address to the console

    if (heap_arr != nullptr)
    {
        for (std::size_t i = 0; i < len2; i++)
        {
            // *(heap_arr + i) is EXACTLY the same as heap_arr[i]
            *(heap_arr + i) = static_cast<std::uint32_t>(i);
        }

        for (std::size_t i = 0; i < len2; i++)
        {
            std::cout << *(heap_arr + i) << '\n';
        }
    }

    delete[] heap_arr;
    heap_arr = nullptr;

    // false of a pointer: pointer == nullptr
    // true of a pointer: pointer != nullptr
    if (heap_arr == nullptr)
    {
        std::cout << "Invalid Pointer!" << '\n';
    }

    if (!heap_arr)
    {
        std::cout << "Invalid Pointer!" << '\n';
    }


    return 0;
}
