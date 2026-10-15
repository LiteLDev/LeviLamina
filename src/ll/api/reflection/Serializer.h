#pragma once
#include "ll/api/reflection/ReflectionError.h"
#include "ll/api/utils/StringUtils.h"
#include <type_traits>

namespace ll::reflection {

template <typename T, typename J = void>
struct Serializer {};

template <>
struct Serializer<bool> {
    static std::string        to_string(bool t) { return t ? "true" : "false"; }
    static ll::Expected<bool> from_string(std::string_view s) { return ll::string_utils::svtobool(s); }
};

template <typename T>
    requires(std::is_arithmetic_v<T> && !std::is_same_v<T, bool> && !traits::is_char_v<T>)
struct Serializer<T> {
    static std::string     to_string(T t) { return fmt::to_string(t); }
    static ll::Expected<T> from_string(std::string_view s) { return ll::string_utils::svtonum<T>(s); }
};

} // namespace ll::reflection
