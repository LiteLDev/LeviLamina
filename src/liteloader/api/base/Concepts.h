#pragma once

#include <string>
#include <type_traits>

namespace ll::concepts {

template <typename T, typename... Ts>
concept IsOneOf = (std::is_same_v<T, Ts> || ...);


template <typename T>
concept Stringable = requires(T t) {
    { t.toString() } -> std::convertible_to<std::string>;
};

} // namespace ll::concepts
