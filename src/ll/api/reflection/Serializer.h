#pragma once
#include <ll/api/utils/StringUtils.h>

namespace ll::reflection {

namespace detail {
struct SerializerDefaultTag {};
}

template <typename T, typename J = detail::SerializerDefaultTag>
struct Serializer {};

template <>
struct Serializer<bool> {
    static std::string        to_string(bool t) { return t ? "true" : "false"; }
    static ll::Expected<bool> from_string(std::string_view s) { return ll::string_utils::svtobool(s); }
};

} // namespace ll::reflection
