#pragma once

#include <string>
#include <tuple>
#include <utility>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/base/TypeTraits.h"

namespace ll::concepts {

template <class T, class U>
concept IsInTypes = traits::is_in_types_v<T, U>;

template <class T, class... Ts>
concept IsOneOf = traits::is_one_of_v<T, Ts...>;

template <class T, class... Ts>
concept IsAllSame = traits::is_all_same_v<T, Ts...>;

template <class T>
concept IsNonCharIntegral = traits::is_non_char_integral_v<T>;

template <class T>
concept IsString = traits::is_string_v<T>;

template <class T, template <class> class Z>
concept Require = Z<T>::value;

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

template <class T, template <class...> class Z>
concept Specializes = traits::is_specialization_of_v<T, Z>;

template <class T>
inline constexpr bool tuple_like_impl =
    traits::is_specialization_of_v<T, ::std::tuple> || traits::is_specialization_of_v<T, ::std::pair>
    || traits::is_std_array_v<T> || traits::is_subrange_v<T>;

template <class T>
concept TupleLike = tuple_like_impl<std::remove_cvref_t<T>> || (!Rangeable<T> && requires(T t) {
                        std::tuple_size<std::remove_cvref_t<T>>::value;
                        std::get<0>(t);
                    });

template <class T>
concept ArrayLike = Rangeable<T> && !requires { typename std::remove_cvref_t<T>::mapped_type; };

template <class T, template <class...> class Z>
concept DerivedFromSpecializes = traits::is_derived_from_specialization_of_v<T, Z>;

template <class T>
concept VirtualCloneable = traits::is_virtual_cloneable_v<T>;

template <class T>
concept Stringable = requires(T t) {
    requires requires {
        { t.toString() } -> IsString;
    } || requires {
        { t.to_string() } -> IsString;
    };
};

} // namespace ll::concepts
