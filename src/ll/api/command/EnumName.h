#pragma once

#include "ll/api/base/Concepts.h"
#include "ll/api/command/SoftEnum.h"
#include "ll/api/reflection/TypeName.h"

namespace ll::command {

template <class T>
struct enum_name {
    static constexpr char const* value = std::is_enum_v<T> ? ll::reflection::type_unprefix_name_v<T>.data() : nullptr;
};
template <class T>
struct enum_name<SoftEnum<T>> {
   static constexpr char const* value = ll::reflection::type_unprefix_name_v<T>.data();
};
} // namespace ll::command
