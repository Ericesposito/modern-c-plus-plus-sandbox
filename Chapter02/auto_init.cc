#include <iostream>

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

// AAA = Almost Always Auto
// DRY = Don't Repeat Yourself
int main()
{
    float a = 10.0F;

    // std::int32_t b = a; // gives warning for data loss

    // auto c = std::int32_t{a}; // compilation error due to lack of narrowing conversion

    auto d = static_cast<std::int32_t>(a); // casting to proper data type

    auto e = std::int32_t{a}; // This works, but we're not DRY

    auto user1 = User{.status = Status::Connected, .id = 42U};

    return 0;
}
