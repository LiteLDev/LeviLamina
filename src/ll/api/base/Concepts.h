#pragma once

#include <string>
#include <tuple>
#include <utility>

#include "ll/api/base/Macro.h"
#include "ll/api/base/StdInt.h"
#include "ll/api/base/TypeTraits.h"

namespace ll {
class Error;
}
namespace ll::concepts {

using traits::Require;

template <class T, class U>
concept IsInTypes = traits::is_in_types_v<T, U>;

template <class T, class... Ts>
concept IsOneOf = traits::is_one_of_v<T, Ts...>;

template <class T>
concept IsString = traits::is_string_v<T>;

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
concept IsLeviExpected = IsExpected<T> && std::same_as<typename std::remove_cvref_t<T>::error_type, Error>;

template <class T>
concept IsOptional = !IsExpected<T> && requires(T o) {
    o.value();
    o.has_value();
    o.operator*();
    typename std::remove_cvref_t<T>::value_type;
};

template <class T>
concept RangeLoopable = std::is_bounded_array_v<std::remove_cvref_t<T>> || requires(T t) {
    t.begin();
    t.end();
} || requires(T t) {
    begin(t);
    end(t);
};

template <class T>
concept Associative = RangeLoopable<T> && requires {
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
concept TupleLike = requires(T t) {
    std::tuple_size<std::remove_cvref_t<T>>::value;
    []<std::size_t... I>(T&& t, std::index_sequence<I...>) {
        ((void)std::get<I>(std::forward<T>(t)), ...);
    }(std::forward<T>(t), std::make_index_sequence<std::tuple_size<std::remove_cvref_t<T>>::value>{});
};

template <class T>
concept ArrayLike = RangeLoopable<T> && !requires { typename std::remove_cvref_t<T>::mapped_type; };

template <class T, template <class...> class Z>
concept DerivedFromSpecializes = traits::is_derived_from_specialization_of_v<T, Z>;

template <class T>
concept Stringable = requires(T t) {
    requires requires {
        { t.toString() } -> IsString;
    } || requires {
        { t.to_string() } -> IsString;
    };
};

template <class T>
concept VirtualCloneable = traits::is_virtual_cloneable_v<T>;

template <class T>
concept Awaitable = traits::is_awaitable_v<T>;

} // namespace ll::concepts
