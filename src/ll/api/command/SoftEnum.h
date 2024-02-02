#pragma once

#include "ll/api/base/Concepts.h"

namespace ll::command {
template <concepts::ConceptFor<std::is_enum> T>
class SoftEnum : public std::string {
    using std::string::string;
};
template <class T>
struct remove_soft_enum {
    using type = T;
};
template <class T>
struct remove_soft_enum<SoftEnum<T>> {
    using type = T;
};

template <class T>
using remove_soft_enum_t = remove_soft_enum<T>::type;

} // namespace ll::command
