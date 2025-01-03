#pragma once

#include <array>
#include <concepts>
#include <type_traits>
#include <utility>

namespace ll::traits {

template <class T, template <class...> class Z, class... Ts>
concept Require = Z<T, Ts...>::value;

template <size_t N, class T, class... Ts>
struct get_type {
    using type = typename get_type<N - 1, Ts...>::type;
};

template <class T, class... Ts>
struct get_type<0, T, Ts...> {
    using type = T;
};

template <size_t N, class... Ts>
using get_type_t = typename get_type<N, Ts...>::type;

template <class T, class U, class... Args>
struct max_type {
    using type = typename max_type<T, typename max_type<U, Args...>::type>::type;
};

template <class T, class U>
struct max_type<T, U> {
    using type = typename std::conditional<(sizeof(T) < sizeof(U)), U, T>::type;
};

template <class T, class... Ts>
struct index_of;

template <class T, class... Ts>
struct index_of<T, T, Ts...> : std::integral_constant<size_t, 0> {};

template <class T, class U, class... Ts>
struct index_of<T, U, Ts...> : std::integral_constant<size_t, 1 + index_of<T, Ts...>::value> {};


template <class>
struct function_traits;

template <class Ret, class... Args>
struct function_traits<Ret (*)(Args...)> : function_traits<Ret(Args...)> {};

template <class F>
struct function_traits : function_traits<decltype(&F::operator())> {};

#ifndef LL_BUILD_FUNCTION_SIGNATURE
#define LL_BUILD_FUNCTION_SIGNATURE(CVREF, NOEXCEPT)                                                                   \
    template <class Ret, class... Args>                                                                                \
    struct function_traits<Ret(Args...) CVREF noexcept(NOEXCEPT)> {                                                    \
        using function_type          = Ret(Args...);                                                                   \
        using function_type_noexcept = Ret(Args...) noexcept(NOEXCEPT);                                                \
        template <class T>                                                                                             \
        using cvref                               = T       CVREF;                                                     \
        static constexpr bool is_noexcept         = NOEXCEPT;                                                          \
        static constexpr bool is_const            = std::is_const_v<cvref<int>>;                                       \
        static constexpr bool is_volatile         = std::is_volatile_v<cvref<int>>;                                    \
        static constexpr bool is_reference        = std::is_reference_v<cvref<int>>;                                   \
        static constexpr bool is_lvalue_reference = std::is_lvalue_reference_v<cvref<int>>;                            \
        static constexpr bool is_rvalue_reference = std::is_rvalue_reference_v<cvref<int>>;                            \
    };                                                                                                                 \
    template <class Ret, class Cls, class... Args>                                                                     \
    struct function_traits<Ret (Cls::*)(Args...) CVREF noexcept(NOEXCEPT)>                                             \
    : function_traits<Ret(Args...) CVREF noexcept(NOEXCEPT)> {};

LL_BUILD_FUNCTION_SIGNATURE(, false)
LL_BUILD_FUNCTION_SIGNATURE(const, false)
LL_BUILD_FUNCTION_SIGNATURE(volatile, false)
LL_BUILD_FUNCTION_SIGNATURE(const volatile, false)
LL_BUILD_FUNCTION_SIGNATURE(, true)
LL_BUILD_FUNCTION_SIGNATURE(const, true)
LL_BUILD_FUNCTION_SIGNATURE(volatile, true)
LL_BUILD_FUNCTION_SIGNATURE(const volatile, true)
LL_BUILD_FUNCTION_SIGNATURE(&, false)
LL_BUILD_FUNCTION_SIGNATURE(const&, false)
LL_BUILD_FUNCTION_SIGNATURE(volatile&, false)
LL_BUILD_FUNCTION_SIGNATURE(const volatile&, false)
LL_BUILD_FUNCTION_SIGNATURE(&, true)
LL_BUILD_FUNCTION_SIGNATURE(const&, true)
LL_BUILD_FUNCTION_SIGNATURE(volatile&, true)
LL_BUILD_FUNCTION_SIGNATURE(const volatile&, true)
LL_BUILD_FUNCTION_SIGNATURE(&&, false)
LL_BUILD_FUNCTION_SIGNATURE(const&&, false)
LL_BUILD_FUNCTION_SIGNATURE(volatile&&, false)
LL_BUILD_FUNCTION_SIGNATURE(const volatile&&, false)
LL_BUILD_FUNCTION_SIGNATURE(&&, true)
LL_BUILD_FUNCTION_SIGNATURE(const&&, true)
LL_BUILD_FUNCTION_SIGNATURE(volatile&&, true)
LL_BUILD_FUNCTION_SIGNATURE(const volatile&&, true)
#undef LL_BUILD_FUNCTION_SIGNATURE
#endif

template <class T, class U>
struct is_in_types;

template <class T, template <class...> class U, class... Ts>
struct is_in_types<T, U<Ts...>> : std::bool_constant<(std::is_same_v<T, Ts> || ...)> {};

template <class T, class U>
constexpr bool is_in_types_v = is_in_types<T, U>::value;

template <class T, class... Ts>
constexpr bool is_one_of_v = (std::is_same_v<T, Ts> || ...);

template <class T, class... Ts>
struct is_one_of : std::bool_constant<is_one_of_v<T, Ts...>> {};

template <class T, class... Ts>
constexpr bool is_all_same_v = (std::is_same_v<T, Ts> && ...);

template <class T, class... Ts>
struct is_all_same : std::bool_constant<is_all_same_v<T, Ts...>> {};

template <class T>
constexpr bool is_string_v = std::is_constructible_v<std::string, T>;

template <class T>
constexpr bool is_char_v = is_one_of_v<std::remove_cv_t<T>, char, wchar_t, char8_t, char16_t, char32_t>;

template <class T, template <class...> class Z>
constexpr bool is_specialization_of_v = false;

template <template <class...> class Z, class... Args>
constexpr bool is_specialization_of_v<Z<Args...>, Z> = true;

template <class T, template <class...> class Z>
struct is_specialization_of : std::bool_constant<is_specialization_of_v<T, Z>> {};

template <class>
constexpr bool is_std_array_v = false;

template <class T, size_t N>
constexpr bool is_std_array_v<::std::array<T, N>> = true;

template <class>
constexpr bool is_subrange_v = false;

template <class I, class S, ::std::ranges::subrange_kind K>
constexpr bool is_subrange_v<::std::ranges::subrange<I, S, K>> = true;

template <template <class...> class T, class... Ts>
void derivedFromSpecializationImpl(T<Ts...> const&);

template <class T, template <class...> class Z>
constexpr bool is_derived_from_specialization_of_v = requires(T const& t) { derivedFromSpecializationImpl<Z>(t); };

template <class T, template <class...> class Z>
struct is_derived_from_specialization_of : std::bool_constant<is_derived_from_specialization_of_v<T, Z>> {};

template <class...>
constexpr bool always_false = false;

template <class T>
constexpr bool is_virtual_cloneable_v =
    std::is_polymorphic_v<T> && (requires(std::remove_cv_t<T> const& t) {
        static_cast<T*>(t.clone());
    } || requires(std::remove_cv_t<T> const& t) { static_cast<T*>(t.clone().release()); });

template <class T>
constexpr bool is_awaiter_v = requires(std::remove_cv_t<T>& t) {
    { t.await_ready() } -> std::same_as<bool>;
    t.await_resume();
};
template <class T>
struct is_awaiter : std::bool_constant<is_awaiter_v<T>> {};

template <class T>
constexpr bool has_member_operator_co_await_v = requires(T t) {
    { t.operator co_await() } -> Require<is_awaiter>;
};
template <class T>
struct has_member_operator_co_await : std::bool_constant<has_member_operator_co_await_v<T>> {};

template <class T>
constexpr bool has_non_member_operator_co_await_v = requires(T t) {
    { operator co_await(t) } -> Require<is_awaiter>;
};
template <class T>
struct has_non_member_operator_co_await : std::bool_constant<has_non_member_operator_co_await_v<T>> {};

template <class T>
constexpr bool is_awaitable_v =
    has_member_operator_co_await_v<T> || has_non_member_operator_co_await_v<T> || is_awaiter_v<T>;

template <class T>
struct is_awaitable : std::bool_constant<is_awaitable_v<T>> {};

} // namespace ll::traits
