namespace constants
{
// since constexpr is implicitly have internal linkage, we have to enforce using
// extern keyword to make it external
extern constexpr double pi{3.14};
extern constexpr double avogadro{6.02e23};
extern constexpr double myGrav{9.2};
} // namespace constants
