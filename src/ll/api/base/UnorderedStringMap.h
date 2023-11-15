#pragma once

#include <string>
#include <unordered_map>

namespace ll {

namespace detail {
template <typename... Bases>
struct overload : Bases... {
    using is_transparent = void;
    using Bases::operator()...;
};

struct char_pointer_hash {
    auto operator()(const char* ptr) const noexcept { return std::hash<std::string_view>{}(ptr); }
};

using transparent_string_hash = overload<std::hash<std::string>, std::hash<std::string_view>, char_pointer_hash>;
} // namespace detail

template <typename T>
using UnorderedStringMap = std::unordered_map<std::string, T, detail::transparent_string_hash, std::equal_to<>>;

} // namespace ll
