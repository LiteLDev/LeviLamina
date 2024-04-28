#pragma once

#include <cstddef>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Meta.h"
#include "ll/api/reflection/TypeName.h"

#if defined(__clang__) && !defined(BOOST_PFR_CORE_NAME_PARSING)
#define BOOST_PFR_CORE_NAME_PARSING                                                                                    \
    (sizeof("auto boost::pfr::detail::name_of_field_impl() [MsvcWorkaround = ") - 1, sizeof("}]") - 1, backward("."))

#endif

#include "boost/pfr.hpp"

#include "magic_enum.hpp"

namespace ll::reflection {
template <class T>
inline constexpr bool is_reflectable_v =
    std::is_aggregate_v<std::remove_cvref_t<T>> && !requires { typename std::remove_cvref_t<T>::size_type; };

template <class T>
concept Reflectable = is_reflectable_v<T>;

template <class T>
inline constexpr auto const name_array_v = boost::pfr::names_as_array<std::remove_cvref_t<T>>();

template <Reflectable T, class F>
constexpr void forEachMember(T&& value, F&& func) {
    boost::pfr::for_each_field(std::forward<T>(value), [func = std::forward<F>(func)](auto&& field, std::size_t idx) {
        func(name_array_v<T>[idx], std::forward<decltype((field))>(field));
    });
}
} // namespace ll::reflection
