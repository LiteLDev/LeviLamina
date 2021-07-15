#pragma once
#include <fstream>
#include <streambuf>
#include <string>
#include <string_view>
#include <type_traits>
using std::string, std::string_view;
static inline string ifs2str(std::ifstream &ifs) {
    return {(std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>()};
}

template <typename T>
static inline auto S(T &&x) {
    using DT = std::decay_t<T>;
    if constexpr (!(std::is_same_v<DT, string> || std::is_same_v<DT, string_view> ||
                    std::is_same_v<DT, const char *>))
        return std::to_string(std::forward<T>(x));
    else
        return x;
}
template <typename T>
static inline auto QUOTE(T &&x) {
    if (x.size() && x[0] == '"')
        return x;
    if constexpr (std::is_same_v<std::decay_t<T>, string>)
        return '"' + x + '"';
    else
        return '"' + string(x) + '"';
}
typedef int s32;
typedef int64_t s64;
typedef uint64_t u64;
typedef uint32_t u32;
typedef uint16_t u16;
typedef uint8_t u8;
