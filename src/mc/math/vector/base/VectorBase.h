#pragma once

#include <concepts>
#include <cstddef>
#include <functional>
#include <string>
#include <string_view>
#include <type_traits>
#include <utility>

#include "ll/api/base/Concepts.h"
#include "ll/api/base/Macro.h"
#include "ll/api/base/Meta.h"
#include "ll/api/utils/HashUtils.h"

#include "fmt/format.h"

namespace ll::math {

template <typename T, typename = void>
struct has_toString : std::false_type {};

template <typename T>
struct has_toString<T, std::void_t<decltype(std::declval<T>().toString())>> : std::true_type {};

template <typename T, typename = void>
struct has_hash : std::false_type {};

template <typename T>
struct has_hash<T, std::void_t<decltype(std::declval<T>().hash())>> : std::true_type {};

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
struct LL_EBO VectorBase : concepts::VectorBaseTag {

    static_assert((std::is_trivially_copyable_v<Components> && ...));

    using first_type = typename ll::traits::max_type<Components...>::type;

    using size_type = size_t;

    [[nodiscard]] consteval static size_t size() noexcept { return sizeof...(Components); }

    template <typename F>
    static constexpr void forEachComponent(F&& func) noexcept {
        meta::unrollType<Components...>(func);
    }

    [[nodiscard]] constexpr std::string toString() const noexcept {
        std::string res("(");
        forEachComponent([&]<typename axis_type, size_t iter> {
            res  = fmt::format("{}{}", res, static_cast<T const*>(this)->template get<axis_type, iter>());
            res += ((iter < size() - 1) ? ", " : ")");
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator==(T const& b) const noexcept {
        bool res = true;
        forEachComponent([&]<typename axis_type, size_t iter> {
            res = res
               && (b.template get<axis_type, iter>() == static_cast<T const*>(this)->template get<axis_type, iter>());
        });
        return res;
    }

    [[nodiscard]] constexpr bool operator!=(T const& b) const noexcept {
        return !(static_cast<bool>((static_cast<T const*>(this))->operator==(b)));
    }

    [[nodiscard]] constexpr first_type& operator[](size_t index) noexcept
        requires(traits::is_all_same_v<first_type, Components...>)
    {
        return ::ll::meta::visitIndex<size()>(index, [&]<size_t I>() -> first_type& {
            return static_cast<T*>(this)->template get<first_type, I>();
        });
    }

    [[nodiscard]] constexpr first_type const& operator[](size_t index) const noexcept
        requires(traits::is_all_same_v<first_type, Components...>)
    {
        return ::ll::meta::visitIndex<size()>(index, [&]<size_t I>() -> first_type const& {
            return static_cast<T*>(this)->template get<first_type, I>();
        });
    }

    [[nodiscard]] constexpr size_t hash() const noexcept {
        hash_utils::HashCombiner res{};
        forEachComponent([&]<typename axis_type, size_t iter> {
            if constexpr (has_hash<axis_type>::value) {
                res.add(static_cast<T const*>(this)->template get<axis_type, iter>().hash());
            } else {
                res.add(std::hash<axis_type>()(static_cast<T const*>(this)->template get<axis_type, iter>()));
            }
        });
        return res;
    }

    template <ll::concepts::IsVectorBase V>
    [[nodiscard]] constexpr V as() const noexcept
        requires(V::size() == size() && std::convertible_to<T, V>)
    {
        return static_cast<V>(*this);
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> eq(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4)
    {
        boolN<sizeof...(Components)> res = true;
        forEachComponent([&]<typename axis_type, size_t iter> {
            res[iter] =
                (b.template get<axis_type, iter>() == static_cast<T const*>(this)->template get<axis_type, iter>());
        });
        return res;
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> ne(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4)
    {
        boolN<sizeof...(Components)> res = true;
        forEachComponent([&]<typename axis_type, size_t iter> {
            res[iter] =
                (b.template get<axis_type, iter>() != static_cast<T const*>(this)->template get<axis_type, iter>());
        });
        return res;
    }
};
} // namespace ll::math

// NOLINTBEGIN

namespace std {

template <ll::concepts::IsVectorBase T, class CharT>
struct formatter<T, CharT> : public std::formatter<basic_string_view<CharT>, CharT> {
    template <class FormatContext>
    auto format(T const& t, FormatContext& ctx) const noexcept {
        return std::formatter<string_view>::format(t.toString(), ctx);
    }
};

template <ll::concepts::IsVectorBase T>
struct hash<T> {
    constexpr size_t operator()(T const& vec) const noexcept { return vec.hash(); }
};

} // namespace std

// fmt support
template <ll::concepts::IsVectorBase T, class CharT>
struct fmt::formatter<T, CharT> : fmt::formatter<std::basic_string_view<CharT>, CharT> {
    template <class FormatContext>
    auto format(T const& t, FormatContext& ctx) const {
        return fmt::formatter<std::string_view>::format(t.toString(), ctx);
    }
};

// NOLINTEND
