#pragma once

#include <format>
#include <string>
#include <tuple>
#include <type_traits>

namespace ll::concepts {

template <typename T, class... Ts>
static constexpr bool is_one_of_v = (std::is_same_v<T, Ts> || ...);

template <typename T, class... Ts>
struct is_one_of : std::bool_constant<is_one_of_v<T, Ts...>> {};

template <typename T, typename... Ts>
concept IsOneOf = is_one_of_v<T, Ts...>;

template <typename T, class... Ts>
static constexpr bool is_all_same_v = (std::is_same_v<T, Ts> && ...);

template <typename T, class... Ts>
struct is_all_same : std::bool_constant<is_all_same_v<T, Ts...>> {};

template <typename T, typename... Ts>
concept IsAllSame = is_all_same_v<T, Ts...>;

template <typename T, class... Ts>
static constexpr bool is_string_v = std::convertible_to<T, std::string_view>;

template <class T>
concept IsString = is_string_v<T>;

template <typename T, template <typename> class Z>
concept ConceptFor = Z<T>::value;

template <typename T>
concept Formattable =
    requires(T const& v, std::format_context ctx) { std::formatter<std::remove_cvref_t<T>>().format(v, ctx); };

template <typename T>
concept IsExpected = requires(T e) {
    typename std::remove_cvref_t<T>::value_type;
    typename std::remove_cvref_t<T>::error_type;
    typename std::remove_cvref_t<T>::unexpected_type;
    e.has_value();
    e.error();
    requires std::is_same_v<void, typename std::remove_cvref_t<T>::value_type> || requires(T e) { e.value(); };
};

template <typename T>
concept IsOptional = !IsExpected<T> && requires(T o) {
    o.value();
    o.has_value();
    o.operator*();
    typename std::remove_cvref_t<T>::value_type;
};

template <typename T>
concept Rangeable = requires(T t) {
    { t.begin() } -> std::same_as<typename std::remove_cvref_t<T>::iterator>;
    { t.end() } -> std::same_as<typename std::remove_cvref_t<T>::iterator>;
};

template <typename T>
concept Associative = Rangeable<T> && requires {
    typename std::remove_cvref_t<T>::key_type;
    typename std::remove_cvref_t<T>::mapped_type;
};

template <typename T>
concept TupleLike = !Rangeable<T> && requires(T t) {
    std::tuple_size<std::remove_cvref_t<T>>::value;
    std::get<0>(t);
};

template <typename T>
concept ArrayLike = Rangeable<T> && !requires { typename std::remove_cvref_t<T>::mapped_type; };

template <typename T, template <typename...> class Z>
inline constexpr bool is_specialization_of_v = false;

template <template <typename...> class Z, class... Args>
inline constexpr bool is_specialization_of_v<Z<Args...>, Z> = true;

template <typename T, template <typename...> class Z>
struct is_specialization_of : std::bool_constant<is_specialization_of_v<T, Z>> {};

template <typename T, template <typename...> class Z>
concept Specializes = is_specialization_of_v<T, Z>;

template <class>
inline constexpr bool always_false = false;

template <typename T>
concept Stringable = requires(T t) {
    { t.toString() } -> std::convertible_to<std::string>;
};

} // namespace ll::concepts
