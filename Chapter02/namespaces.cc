#include <iostream>

namespace // anonymous
{
constexpr std::uint64_t faculty(const std::uint8_t n)
{
    auto result = std::uint64_t{}; // default value for uint64 is 0

    for (std::uint8_t i = 0; i <= n; i++)
    {
        result *= i;
    }

    return result;
}
} // namespace

namespace MyStd
{
enum class Status
{
    Unknown,
    Connected,
    Disconnected,
};

// POD
struct User
{
    Status status;
    std::uint64_t id;
};
} // namespace MyStd


int main()
{
    // User user1 = {Status::Connected, 42U};
    MyStd::User user1 = {.status = MyStd::Status::Connected, .id = 42U};

    std::cout << user1.id << '\n';

    std::cout << (std::int32_t)user1.status << '\n';              // C Approach
    std::cout << static_cast<std::int32_t>(user1.status) << '\n'; // C++ Approach

    return 0;
}
