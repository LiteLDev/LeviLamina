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

#include "magic_enum/magic_enum_all.hpp"

namespace ll::reflection {
template <class T>
constexpr bool is_reflectable_v =
    std::is_aggregate_v<std::remove_cvref_t<T>> && !traits::is_std_array_v<std::remove_cvref_t<T>>;

template <class T>
concept Reflectable = is_reflectable_v<T>;

template <class T>
constexpr auto const member_name_array_v = boost::pfr::names_as_array<std::remove_cvref_t<T>>();

template <class T>
constexpr auto const member_count_v = boost::pfr::tuple_size_v<T>;

template <size_t I, class T>
using member_t = typename boost::pfr::tuple_element_t<I, T>;

template <class T>
struct OffsetGetter {
    template <size_t S, size_t A>
    struct AlignedStorage {
        alignas(A) char storage[S];
    };
    template <class... Ts>
    using AlignedTuple = boost::pfr::detail::sequence_tuple::tuple<AlignedStorage<sizeof(Ts), alignof(Ts)>...>;

    template <size_t I, size_t... Ns>
    static ptrdiff_t offset(std::index_sequence<Ns...>) noexcept {
        AlignedTuple<member_t<Ns, T>...> layout{};
        return static_cast<char const*>(&get<I>(layout).storage[0])
             - static_cast<char const*>(&get<0>(layout).storage[0]);
    }
};

template <size_t I, class T>
inline auto const member_offset_v = OffsetGetter<T>::template offset<I>(std::make_index_sequence<member_count_v<T>>());

template <Reflectable T, class F>
constexpr void forEachMember(T&& value, F&& func) {
    boost::pfr::for_each_field(std::forward<T>(value), [func = std::forward<F>(func)](auto&& field, std::size_t idx) {
        func(member_name_array_v<T>[idx], std::forward<decltype((field))>(field));
    });
}
} // namespace ll::reflection
