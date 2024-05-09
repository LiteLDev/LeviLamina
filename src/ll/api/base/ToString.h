#pragma once

#include <format>
#include <ostream>
#include <string>

#include "fmt/core.h"
#include "fmt/format.h"

#include "ll/api/base/Concepts.h"

namespace nonstd {

template <ll::concepts::Stringable T>
std::string to_string(T const& t) {
    if constexpr (requires { t.toString(); }) {
        return t.toString();
    } else if constexpr (requires { t.to_string(); }) {
        return t.to_string();
    } else {
        static_assert(ll::concepts::always_false<T>, "T must be a stringable type");
    }
}

} // namespace nonstd

template <ll::concepts::Stringable T>
std::ostream& operator<<(std::ostream& os, T const& t) {
    return os << nonstd::to_string(t);
}

// fmt support
template <ll::concepts::Stringable T>
struct fmt::formatter<T> : fmt::formatter<std::string> {
    template <class FormatContext>
    auto format(T const& t, FormatContext& ctx) const {
        return formatter<std::string>::format(nonstd::to_string(t), ctx);
    }
};

// std::format support
template <ll::concepts::Stringable T>
struct std::formatter<T> : std::formatter<std::string> { // NOLINT
    template <class FormatContext>
    auto format(T const& t, FormatContext& ctx) const {
        return std::formatter<std::string>::format(nonstd::to_string(t), ctx);
    }
};
