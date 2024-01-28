#pragma once

#include <functional>
#include <string>
#include <string_view>
#include <unordered_map>

namespace ll {

namespace detail {
template <class... Bases>
struct overload : Bases... {
    using is_transparent = void;
    using Bases::operator()...;
};

struct char_pointer_hash {
    auto operator()(char const* ptr) const noexcept { return std::hash<std::string_view>{}(ptr); }
};

using transparent_string_hash = overload<std::hash<std::string>, std::hash<std::string_view>, char_pointer_hash>;
} // namespace detail

template <class T>
using UnorderedStringMap = std::unordered_map<std::string, T, detail::transparent_string_hash, std::equal_to<>>;

} // namespace ll
