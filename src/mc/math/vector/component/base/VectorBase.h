#pragma once
#include <concepts>
#include <format>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/Meta.h"
#include "ll/api/utils/Hash.h"

template <typename T, typename = void>
struct has_toString : std::false_type {};

template <typename T>
struct has_toString<T, std::void_t<decltype(std::declval<T>().toString())>> : std::true_type {};

template <typename T, typename = void>
struct has_hash : std::false_type {};

template <typename T>
struct has_hash<T, std::void_t<decltype(std::declval<T>().hash())>> : std::true_type {};

struct LL_EBO VectorBaseTag {};

template <typename T>
concept IsVectorBase = std::is_base_of_v<VectorBaseTag, T>;

struct LL_EBO BoolNTag {};

template <typename T>
concept IsBoolN = std::is_base_of_v<BoolNTag, T>;

struct LL_EBO IntNTag {};

template <typename T>
concept IsIntN = std::is_base_of_v<IntNTag, T>;

struct LL_EBO FloatNTag {};

template <typename T>
concept IsFloatN = std::is_base_of_v<FloatNTag, T>;

template <size_t N>
class boolN;

template <typename T, typename... Components>
class LL_EBO VectorBase : VectorBaseTag {
public:
    using first_type = typename ll::meta::max_type<Components...>::type;

    [[nodiscard]] consteval static size_t size() noexcept { return sizeof...(Components); }

    template <typename F>
    constexpr static void forEachComponent(F&& func) noexcept {
        ll::meta::unrollWithArgs<Components...>(func);
    }

    [[nodiscard]] constexpr std::string toString() const noexcept {
        std::string res("(");
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res  = std::move(std::format("{}{}", res, static_cast<T const*>(this)->template get<axis_type>(iter)));
            res += ((iter < size() - 1) ? ", " : ")");
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator==(T const& b) const noexcept {
        bool res = true;
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res =
                res && (b.template get<axis_type>(iter) == static_cast<T const*>(this)->template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator!=(T const& b) const noexcept {
        return !(static_cast<bool>((static_cast<T const*>(this))->operator==(b)));
    }

    [[nodiscard]] constexpr first_type& operator[](size_t index) noexcept
        requires ll::concepts::IsAllSame<Components...>
    {
        return static_cast<T*>(this)->template get<first_type>(index);
    }

    [[nodiscard]] constexpr first_type operator[](size_t index) const noexcept
        requires ll::concepts::IsAllSame<Components...>
    {
        return static_cast<T const*>(this)->template get<first_type>(index);
    }

    [[nodiscard]] constexpr size_t hash() const noexcept {
        size_t res = 0;
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            if constexpr (std::is_integral_v<axis_type>) {
                hashCombine(static_cast<T const*>(this)->template get<axis_type>(iter), res);
            } else if constexpr (has_hash<axis_type>::value) {
                hashCombine(static_cast<T const*>(this)->template get<axis_type>(iter).hash(), res);
            } else {
                hashCombine(std::hash<axis_type>()(static_cast<T const*>(this)->template get<axis_type>(iter)), res);
            }
        });
        return res;
    }

    template <IsVectorBase V>
    [[nodiscard]] constexpr V as() const noexcept
        requires(V::size() == size() && std::convertible_to<T, V>)
    {
        return static_cast<V>(*this);
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> eq(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4) {
        boolN<sizeof...(Components)> res = true;
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (b.template get<axis_type>(iter) == static_cast<T const*>(this)->template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)>
    ne(T const& b) const noexcept requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4) {
        boolN<sizeof...(Components)> res = true;
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (b.template get<axis_type>(iter) != static_cast<T const*>(this)->template get<axis_type>(iter));
        });
        return res;
    }
};

template <IsVectorBase T>
std::ostream& operator<<(std::ostream& os, T const& obj) noexcept {
    os << obj.toString();
    return os;
}

// NOLINTBEGIN

namespace std {

template <IsVectorBase T, typename CharT>
struct formatter<T, CharT> : public std::formatter<string_view, CharT> {
    template <typename FormatContext>
    auto format(T const& t, FormatContext& ctx) const noexcept {
        return std::formatter<string_view>::format(t.toString(), ctx);
    }
};

// template <IsVectorBase T>
// string to_string(T const& _Val) noexcept {
//     return _Val.toString();
// }

template <IsVectorBase T>
struct hash<T> {
    size_t operator()(T const& vec) const noexcept { return vec.hash(); }
};

} // namespace std

// NOLINTEND