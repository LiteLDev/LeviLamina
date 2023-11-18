#pragma once

#include <concepts>
#include <format>
#include <string>

#include "fmt/format.h"

#include "ll/api/base/Concepts.h"

namespace std {

template <ll::concepts::Stringable T>
string to_string(T const& t) { // NOLINT
    return t.toString();
}

} // namespace std

template <ll::concepts::Stringable T>
std::ostream& operator<<(std::ostream& os, T const& t) {
    os << t.toString();
    return os;
}

// fmt support
template <ll::concepts::Stringable T>
struct fmt::formatter<T> : fmt::formatter<std::string> {
    template <class FormatContext>
    auto format(T const& t, FormatContext& ctx) {
        return formatter<std::string>::format(t.toString(), ctx);
    }
};

// std::format support
template <ll::concepts::Stringable T>
struct std::formatter<T> : std::formatter<std::string> { // NOLINT
    template <class FormatContext>
    auto format(T const& t, FormatContext& ctx) {
        return std::formatter<std::string>::format(t.toString(), ctx);
    }
};
