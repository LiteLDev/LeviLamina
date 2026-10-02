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
    requires std::is_integral_v<T>
struct Serializer<T> {
    static std::string     to_string(T t) { return fmt::to_string(t); }
    static ll::Expected<T> from_string(std::string_view s) { return ll::string_utils::svtonum<T>(s, nullptr, 10); }
};

template <typename T>
    requires std::is_floating_point_v<T>
struct Serializer<T> {
    static std::string     to_string(T t) { return fmt::to_string(t); }
    static ll::Expected<T> from_string(std::string_view s) {
        return ll::string_utils::svtonum<T>(s, nullptr, std::chars_format::general);
    }
};

} // namespace ll::reflection
