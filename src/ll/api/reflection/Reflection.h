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
#include "boost/pfr/detail/make_integer_sequence.hpp"
#include "boost/pfr/detail/offset_based_getter.hpp"

#include "magic_enum.hpp"

namespace ll::reflection {
template <class T>
inline constexpr bool is_reflectable_v =
    std::is_aggregate_v<std::remove_cvref_t<T>> && !requires { typename std::remove_cvref_t<T>::size_type; };

template <class T>
concept Reflectable = is_reflectable_v<T>;

template <class T>
inline constexpr auto const name_array_v = boost::pfr::names_as_array<std::remove_cvref_t<T>>();

// template <class T, std::size_t... I>
// constexpr auto makeSequenceTupleFromTieTuple(const T& t, std::index_sequence<I...>) noexcept {
//     return boost::pfr::detail::sequence_tuple::make_sequence_tuple(boost::pfr::detail::sequence_tuple::get<I>(t)...);
// }

// template <
//     typename U,
//     typename S = decltype(makeSequenceTupleFromTieTuple(
//         boost::pfr::detail::tie_as_tuple(boost::pfr::detail::fake_object<U>),
//         boost::pfr::detail::make_index_sequence<boost::pfr::tuple_size_v<U>>()
//     ))>
// struct OffsetGetter {
//     using this_t = OffsetGetter<U, S>;

//     static_assert(
//         sizeof(U) == sizeof(S),
//         "Member sequence does not indicate correct size for struct type! Maybe the user-provided type is not a "
//         "SimpleAggregate?"
//     );
//     static_assert(alignof(U) == alignof(S), " Member sequence does not indicate correct alignment for struct type!");

//     // Get offset of idx'th member
//     // Idea: Layout object has the same offsets as instance of S, so if S and U are layout compatible, then these offset
//     // calculations are correct.
//     template <std::size_t idx>
//     static consteval std::ptrdiff_t offset() noexcept {
// #if defined(__INTELLISENSE__) || defined(__clangd__) || defined(__clang__)
//         return 0; // TODO: fix this
// #else
//         constexpr boost::pfr::detail::tuple_of_aligned_storage_t<S> layout{};
//         return (&boost::pfr::detail::sequence_tuple::get<idx>(layout).storage_)
//              - (&boost::pfr::detail::sequence_tuple::get<0>(layout).storage_);
// #endif
//     }
// };

// template <class T, std::size_t... I>
// consteval auto makeOffsetArrayImpl(std::index_sequence<I...>) {
//     return boost::pfr::detail::make_stdarray((OffsetGetter<T>::template offset<I>())...);
// }
// template <class T>
// inline constexpr auto const offset_array_v =
//     makeOffsetArrayImpl<T>(std::make_index_sequence<boost::pfr::tuple_size_v<T>>());

template <Reflectable T, class F>
constexpr void forEachMember(T&& value, F&& func) {
    boost::pfr::for_each_field(std::forward<T>(value), [func = std::forward<F>(func)](auto&& field, std::size_t idx) {
        func(name_array_v<T>[idx], std::forward<decltype(field)>(field));
    });
}
} // namespace ll::reflection
