#pragma once

#include <format>
#include <string>
#include <tuple>
#include <type_traits>

namespace ll::concepts {

template <typename T, typename... Ts>
concept IsOneOf = (std::is_same_v<T, Ts> || ...);
template <typename T, typename... Ts>
concept IsAllSame = (std::is_same_v<T, Ts> && ...);
template <class T>
concept IsString = std::convertible_to<T, std::string_view>;

template <typename T>
concept Formattable =
    requires(T const& v, std::format_context ctx) { std::formatter<std::remove_cvref_t<T>>().format(v, ctx); };

template <typename T>
concept Rangeable = requires(T t) {
    { t.begin() } -> std::same_as<typename T::iterator>;
    { t.end() } -> std::same_as<typename T::iterator>;
};

template <typename T>
concept Associative = Rangeable<T> && requires {
    typename T::key_type;
    typename T::mapped_type;
};

template <typename T>
concept TupleLike = !Rangeable<T> && requires(T t) {
    std::tuple_size<T>::value;
    std::get<0>(t);
};

template <typename T>
concept ArrayLike = Rangeable<T> && !requires { typename T::mapped_type; };

template <typename T, template <typename...> class Z>
inline constexpr bool is_specialization_of = false;

template <template <typename...> class Z, class... Args>
inline constexpr bool is_specialization_of<Z<Args...>, Z> = true;

template <typename T, template <typename...> class Z>
concept Specializes = is_specialization_of<T, Z>;

template <typename T>
concept Stringable = requires(T t) {
    { t.toString() } -> std::convertible_to<std::string>;
};

} // namespace ll::concepts
