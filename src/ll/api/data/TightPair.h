#pragma once

#include <type_traits>

namespace ll::data {

constexpr inline struct ZeroThenVariadicArgsT {
} zeroThenVariadicArgs;
constexpr inline struct OneThenVariadicArgsT {
} oneThenVariadicArgs;

template <class Base, class Other, bool = std::is_empty_v<Base> && !std::is_final_v<Base>>
class TightPair final : private Base {
    Other sec;

public:
    using first_type  = Base;
    using second_type = Other;

    template <class... Ts2>
    constexpr explicit TightPair(
        ZeroThenVariadicArgsT,
        Ts2&&... val2
    ) noexcept(std::is_nothrow_default_constructible_v<Base> && std::is_nothrow_constructible_v<Other, Ts2...>)
    : Base(),
      sec(std::forward<Ts2>(val2)...) {}

    template <class Ts1, class... Ts2>
    constexpr TightPair(
        OneThenVariadicArgsT,
        Ts1&& val1,
        Ts2&&... val2
    ) noexcept(std::is_nothrow_constructible_v<Base, Ts1> && std::is_nothrow_constructible_v<Other, Ts2...>)
    : Base(std::forward<Ts1>(val1)),
      sec(std::forward<Ts2>(val2)...) {}

    constexpr first_type& first() noexcept { return *this; }

    constexpr const first_type& first() const noexcept { return *this; }

    constexpr second_type& second() noexcept { return sec; }

    constexpr const second_type& second() const noexcept { return sec; }
};

template <class Base, class Other>
class TightPair<Base, Other, false> final {
    Base  fst;
    Other sec;

public:
    using first_type  = Base;
    using second_type = Other;

    template <class... Ts2>
    constexpr explicit TightPair(
        ZeroThenVariadicArgsT,
        Ts2&&... val2
    ) noexcept(std::is_nothrow_default_constructible_v<Base> && std::is_nothrow_constructible_v<Other, Ts2...>)
    : fst(),
      sec(std::forward<Ts2>(val2)...) {}

    template <class Ts1, class... Ts2>
    constexpr TightPair(
        OneThenVariadicArgsT,
        Ts1&& val1,
        Ts2&&... val2
    ) noexcept(std::is_nothrow_constructible_v<Base, Ts1> && std::is_nothrow_constructible_v<Other, Ts2...>)
    : fst(std::forward<Ts1>(val1)),
      sec(std::forward<Ts2>(val2)...) {}

    constexpr first_type& first() noexcept { return fst; }

    constexpr const first_type& first() const noexcept { return fst; }

    constexpr second_type& second() noexcept { return sec; }

    constexpr const second_type& second() const noexcept { return sec; }
};
} // namespace ll::data
