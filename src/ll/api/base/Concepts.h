#pragma once

#include <format>
#include <string>
#include <tuple>
#include <type_traits>
#include <xutility>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"

namespace ll::concepts {

template <class T, class U>
struct is_in_types;

template <class T, template <class...> class U, class... Ts>
struct is_in_types<T, U<Ts...>> : std::bool_constant<(std::is_same_v<T, Ts> || ...)> {};

template <class T, class U>
static constexpr bool is_in_types_v = is_in_types<T, U>::value;

template <class T, class U>
concept IsInTypes = is_in_types_v<T, U>;

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

template <class T>
static constexpr bool is_string_v = std::is_constructible_v<std::string, T>;

template <class T>
constexpr bool is_non_char_integral_v =
    is_one_of_v<std::remove_cv_t<T>, bool, schar, uchar, short, ushort, int, uint, long, ulong, int64, uint64>;

template <class T>
concept IsNonCharIntegral = is_non_char_integral_v<T>;

template <class T>
concept IsString = is_string_v<T>;

template <class T, template <class> class Z>
concept Require = Z<T>::value;

template <class T>
concept Formattable =
    requires(T const& v, std::format_context ctx) { std::formatter<std::remove_cvref_t<T>>().format(v, ctx); };

template <class T>
concept IsExpected = requires(T e) {
    typename std::remove_cvref_t<T>::value_type;
    typename std::remove_cvref_t<T>::error_type;
    typename std::remove_cvref_t<T>::unexpected_type;
    e.has_value();
    e.error();
    requires std::is_same_v<void, typename std::remove_cvref_t<T>::value_type> || requires(T e) { e.value(); };
};

template <class T>
concept IsOptional = !IsExpected<T> && requires(T o) {
    o.value();
    o.has_value();
    o.operator*();
    typename std::remove_cvref_t<T>::value_type;
};

template <class T>
concept Rangeable = requires(T t) {
    t.begin();
    t.end();
};

template <class T>
concept Associative = Rangeable<T> && requires {
    typename std::remove_cvref_t<T>::key_type;
    typename std::remove_cvref_t<T>::mapped_type;
};

template <class T>
concept IsDispatcher = requires(T t) {
    typename std::remove_cvref_t<T>::storage_type;
    typename std::remove_cvref_t<T>::listener_type;
    t.storage;
    t.call();
};

struct LL_EBO VectorBaseTag {};

template <typename T>
concept IsVectorBase = std::is_base_of_v<VectorBaseTag, T>;

template <class T>
concept TupleLike = std::_Tuple_like<T> || (!Rangeable<T> && requires(T t) {
                        std::tuple_size<std::remove_cvref_t<T>>::value;
                        std::get<0>(t);
                    });

template <class T>
concept ArrayLike = Rangeable<T> && !requires { typename std::remove_cvref_t<T>::mapped_type; };

template <class T, template <class...> class Z>
inline constexpr bool is_specialization_of_v = false;

template <template <class...> class Z, class... Args>
inline constexpr bool is_specialization_of_v<Z<Args...>, Z> = true;

template <class T, template <class...> class Z>
struct is_specialization_of : std::bool_constant<is_specialization_of_v<T, Z>> {};

template <class T, template <class...> class Z>
concept Specializes = is_specialization_of_v<T, Z>;

template <template <class...> class T, class... Ts>
void DerivedFromSpecializationImpl(T<Ts...> const&);

template <class T, template <class...> class Z>
concept DerivedFromSpecializes = requires(T const& t) { DerivedFromSpecializationImpl<Z>(t); };

template <class T, template <class...> class Z>
inline constexpr bool is_derived_from_specialization_of_v = DerivedFromSpecializes<T, Z>;

template <class T, template <class...> class Z>
struct is_derived_from_specialization_of : std::bool_constant<is_derived_from_specialization_of_v<T, Z>> {};

template <class...>
inline constexpr bool always_false = false;

template <class T>
concept Stringable = requires(T t) {
    requires requires {
        { t.toString() } -> IsString;
    } || requires {
        { t.to_string() } -> IsString;
    };
};

} // namespace ll::concepts
