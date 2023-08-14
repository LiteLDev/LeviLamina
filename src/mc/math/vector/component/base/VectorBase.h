#pragma once
#include <concepts>
#include <format>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>

template <typename T>
constexpr void hashCombine(T const& v, std::size_t& seed) {
    seed ^= v + 2654435769LL + (seed << 6LL) + (seed >> 2LL);
}

template <typename T, typename... Types>
constexpr bool is_all_same_v = (std::is_same_v<T, Types> && ...);

template <typename... Types>
concept AllSame = is_all_same_v<Types...>;

template <typename... Components, typename F>
constexpr void unrollWithArgs(F&& func) {
    size_t i = 0;
    ((func.template operator()<Components>(i++)), ...);
}

template <typename Fn, size_t... N>
constexpr void unroll_impl(Fn fn, std::integer_sequence<size_t, N...>) {
    (void(fn(N)), ...);
}

template <size_t N, typename Fn>
constexpr void unroll(Fn fn) {
    unroll_impl(fn, std::make_index_sequence<N>());
}

template <std::size_t N, typename T, typename... Types>
struct get_type {
    using type = typename get_type<N - 1, Types...>::type;
};

template <typename T, typename... Types>
struct get_type<0, T, Types...> {
    using type = T;
};

template <std::size_t N, typename... Types>
using get_type_t = typename get_type<N, Types...>::type;

template <typename T, typename U, typename... Args>
struct max_type {
    using type = typename max_type<T, typename max_type<U, Args...>::type>::type;
};

template <typename T, typename U>
struct max_type<T, U> {
    using type = typename std::conditional<(sizeof(T) < sizeof(U)), U, T>::type;
};

template <typename T, typename = void>
struct has_toString : std::false_type {};

template <typename T>
struct has_toString<T, std::void_t<decltype(std::declval<T>().toString())>> : std::true_type {};

template <typename T, typename = void>
struct has_hash : std::false_type {};

template <typename T>
struct has_hash<T, std::void_t<decltype(std::declval<T>().hash())>> : std::true_type {};

struct VectorBaseTag {};

template <typename T>
concept IsVectorBase = std::is_base_of_v<VectorBaseTag, T>;

struct BoolNTag {};

template <typename T>
concept IsBoolN = std::is_base_of_v<BoolNTag, T>;

struct IntNTag {};

template <typename T>
concept IsIntN = std::is_base_of_v<IntNTag, T>;

struct FloatNTag {};

template <typename T>
concept IsFloatN = std::is_base_of_v<FloatNTag, T>;

template <size_t N>
class boolN;

template <typename T, typename... Components>
class VectorBase : VectorBaseTag {
public:
    using first_type = max_type<Components...>::type;

    [[nodiscard]] consteval static size_t size() noexcept { return sizeof...(Components); }

    template <typename F>
    constexpr static void forEachComponent(F&& func) noexcept {
        unrollWithArgs<Components...>(func);
    }

    [[nodiscard]] constexpr std::string toString() const noexcept {
        std::string res("(");
        unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res  = std::move(std::format("{}{}", res, static_cast<T const*>(this)->template get<axis_type>(iter)));
            res += ((iter < size() - 1) ? ", " : ")");
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator==(T const& b) const {
        bool res = true;
        unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res =
                res && (b.template get<axis_type>(iter) == static_cast<T const*>(this)->template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator!=(T const& b) const noexcept {
        return !(static_cast<bool>((static_cast<T const*>(this))->operator==(b)));
    }

    [[nodiscard]] constexpr first_type& operator[](size_t index) noexcept
        requires AllSame<Components...>
    {
        return static_cast<T*>(this)->template get<first_type>(index);
    }

    [[nodiscard]] constexpr first_type operator[](size_t index) const noexcept
        requires AllSame<Components...>
    {
        return static_cast<T const*>(this)->template get<first_type>(index);
    }

    [[nodiscard]] constexpr std::size_t hash() const noexcept {
        std::size_t res = 0;
        unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
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
        return V{*this};
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> eq(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4) {
        boolN<sizeof...(Components)> res = true;
        unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (b.template get<axis_type>(iter) == static_cast<T const*>(this)->template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)>
    ne(T const& b) const noexcept requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4) {
        boolN<sizeof...(Components)> res = true;
        unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
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
    std::size_t operator()(T const& vec) const noexcept { return vec.hash(); }
};

} // namespace std

// NOLINTEND