#pragma once

#include <format>
#include <string>
#include <tuple>
#include <type_traits>

namespace ll::concepts {

template <class T, class... Ts>
static constexpr bool is_one_of_v = (std::is_same_v<T, Ts> || ...);

template <class T, class... Ts>
struct is_one_of : std::bool_constant<is_one_of_v<T, Ts...>> {};

template <class T, class... Ts>
concept IsOneOf = is_one_of_v<T, Ts...>;

template <class T, class... Ts>
static constexpr bool is_all_same_v = (std::is_same_v<T, Ts> && ...);

template <class T, class... Ts>
struct is_all_same : std::bool_constant<is_all_same_v<T, Ts...>> {};

template <class T, class... Ts>
concept IsAllSame = is_all_same_v<T, Ts...>;

template <class T, class... Ts>
static constexpr bool is_string_v = std::convertible_to<T, std::string_view>;

template <class T>
concept IsString = is_string_v<T>;

template <class T, template <class> class Z>
concept ConceptFor = Z<T>::value;

template <class T>
concept Formattable =
    requires(T const& v, std::format_context ctx) { std::formatter<std::remove_cvref_t<T>>().format(v, ctx); };

template <class T>
concept IsExpected = requires(T e) {
    typename T::value_type;
    typename T::error_type;
    typename T::unexpected_type;
    e.has_value();
    e.error();
    requires std::is_same_v<void, typename T::value_type> || requires(T e) { e.value(); };
};

template <class T>
concept IsOptional = !IsExpected<T> && requires(T o) {
    o.value();
    o.has_value();
    o.operator*();
    typename T::value_type;
};

template <class T>
concept Rangeable = requires(T t) {
    { t.begin() } -> std::same_as<typename T::iterator>;
    { t.end() } -> std::same_as<typename T::iterator>;
};

template <class T>
concept Associative = Rangeable<T> && requires {
    typename T::key_type;
    typename T::mapped_type;
};

template <class T>
concept IsDispatcher = requires(T t) {
    typename T::storage_type;
    typename T::listener_type;
    t.storage;
    t.call();
};

template <class T>
concept TupleLike = !Rangeable<T> && requires(T t) {
    std::tuple_size<std::remove_cvref_t<T>>::value;
    std::get<0>(t);
};

template <class T>
concept ArrayLike = Rangeable<T> && !requires { typename T::mapped_type; };

template <class T, template <class...> class Z>
inline constexpr bool is_specialization_of_v = false;

template <template <class...> class Z, class... Args>
inline constexpr bool is_specialization_of_v<Z<Args...>, Z> = true;

template <class T, template <class...> class Z>
struct is_specialization_of : std::bool_constant<is_specialization_of_v<T, Z>> {};

template <class T, template <class...> class Z>
concept Specializes = is_specialization_of_v<T, Z>;

template <class...>
inline constexpr bool always_false = false;

template <class T>
concept Stringable = requires(T t) {
    { t.toString() } -> std::convertible_to<std::string>;
};

} // namespace ll::concepts
