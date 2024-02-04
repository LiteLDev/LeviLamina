#pragma once

#include "ll/api/base/Concepts.h" // IWYU pragma: keep
#include "ll/api/base/FixedString.h"
#include "ll/api/command/SoftEnum.h"
#include "ll/api/reflection/TypeName.h"

namespace ll::command {
template <class T>
struct unprefix_name_for_c {
    static constexpr auto stored_name =
        FixedString<ll::reflection::type_unprefix_name_v<T>.size()>{ll::reflection::type_unprefix_name_v<T>};
};

template <class T>
struct enum_name {
    static constexpr char const* value = std::is_enum_v<T> ? (char const*)unprefix_name_for_c<T>::stored_name : nullptr;
};
template <class T>
struct enum_name<SoftEnum<T>> {
    static constexpr char const* value = unprefix_name_for_c<T>::stored_name;
};
template <class T>
static constexpr char const* enum_name_v = enum_name<T>::value;
} // namespace ll::command
