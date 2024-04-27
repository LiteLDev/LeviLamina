#pragma once

#include <array>
#include <cmath>
#include <concepts>
#include <cstddef>

#include "ll/api/base/Macro.h"

#include "mc/math/vector/base/CommutativeGroup.h"

namespace ll::math {
struct FieldTag {};

template <typename T>
concept IsField = std::is_base_of_v<FieldTag, T>;

template <typename T, typename... Components>
struct LL_EBO Field : CommutativeGroup<T, Components...>, FieldTag {
public:
    using first_type = typename CommutativeGroup<T, Components...>::first_type;

    [[nodiscard]] constexpr std::array<T, Field::size() * 2> getNeighbors() const noexcept {
        std::array<T, Field::size() * 2> res;
        size_t                           i = 0;
        Field::forEachComponent([&]<typename axis_type>(size_t axis) constexpr {
            ll::meta::unroll<2>([&](size_t iter) {
                T tmp                              = *(static_cast<T const*>(this));
                tmp.template get<axis_type>(axis) += static_cast<axis_type>(iter * 2 - 1);
                res[i]                             = tmp;
                i++;
            });
        });
        return res;
    }

    constexpr T& operator*=(T const& b) noexcept {
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<axis_type>(iter) *= b.template get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator/=(T const& b) noexcept {
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<axis_type>(iter) /= b.template get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    [[nodiscard]] constexpr T operator*(T const& b) const noexcept {
        T tmp  = *(static_cast<T const*>(this));
        tmp   *= b;
        return tmp;
    }

    [[nodiscard]] constexpr T operator/(T const& b) const noexcept {
        T tmp  = *(static_cast<T const*>(this));
        tmp   /= b;
        return tmp;
    }

    template <std::convertible_to<first_type> V>
    constexpr T& operator*=(V const& b) noexcept {
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<first_type>(iter) *= static_cast<first_type>(b);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <std::convertible_to<first_type> V>
    constexpr T& operator/=(V const& b) noexcept {
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<first_type>(iter) /= static_cast<first_type>(b);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T operator*(V const& b) const noexcept {
        T tmp  = *(static_cast<T const*>(this));
        tmp   *= static_cast<first_type>(b);
        return tmp;
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T operator/(V const& b) const noexcept {
        T tmp  = *(static_cast<T const*>(this));
        tmp   /= static_cast<first_type>(b);
        return tmp;
    }

    [[nodiscard]] constexpr T mul(T const& b) const noexcept { return *(static_cast<T const*>(this)) * b; }

    [[nodiscard]] constexpr T div(T const& b) const noexcept { return *(static_cast<T const*>(this)) / b; }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T mul(V const& b) const noexcept {
        return *(static_cast<T const*>(this)) * static_cast<first_type>(b);
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T div(V const& b) const noexcept {
        return *(static_cast<T const*>(this)) / static_cast<first_type>(b);
    }

    [[nodiscard]] constexpr double dot(T const& b) const noexcept {
        double res = 0.0;
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            res +=
                (double)(static_cast<T const*>(this)->template get<axis_type>(iter)) * b.template get<axis_type>(iter);
        });
        return res;
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr double dot(V const& b) const noexcept {
        double res = 0.0;
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            res += (double)(static_cast<T const*>(this)->template get<axis_type>(iter)) * static_cast<first_type>(b);
        });
        return res;
    }

    [[nodiscard]] constexpr double lengthSqr() const noexcept { return dot(*(static_cast<T const*>(this))); }

    [[nodiscard]] constexpr double length() const noexcept { return sqrt(static_cast<double>(lengthSqr())); }

    [[nodiscard]] constexpr double distanceTo(T const& b) const noexcept {
        return (*(static_cast<T const*>(this)) - b).length();
    }

    [[nodiscard]] constexpr double distanceToSqr(T const& b) const noexcept {
        return (*(static_cast<T const*>(this)) - b).lengthSqr();
    }

    [[nodiscard]] constexpr bool operator<(T const& b) const noexcept { return lengthSqr() < b.lengthSqr(); }

    [[nodiscard]] constexpr bool operator>(T const& b) const noexcept { return lengthSqr() > b.lengthSqr(); }

    [[nodiscard]] constexpr bool operator<=(T const& b) const noexcept { return lengthSqr() <= b.lengthSqr(); }

    [[nodiscard]] constexpr bool operator>=(T const& b) const noexcept { return lengthSqr() >= b.lengthSqr(); }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> lt(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4)
    {
        boolN<sizeof...(Components)> res = true;
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (static_cast<T const*>(this)->template get<axis_type>(iter) < b.template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> le(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4)
    {
        boolN<sizeof...(Components)> res = true;
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (static_cast<T const*>(this)->template get<axis_type>(iter) <= b.template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> gt(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4)
    {
        boolN<sizeof...(Components)> res = true;
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (static_cast<T const*>(this)->template get<axis_type>(iter) > b.template get<axis_type>(iter));
        });
        return res;
    }

    [[nodiscard]] constexpr class boolN<sizeof...(Components)> ge(T const& b) const noexcept
        requires(sizeof...(Components) >= 2 && sizeof...(Components) <= 4)
    {
        boolN<sizeof...(Components)> res = true;
        Field::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            res[iter] = (static_cast<T const*>(this)->template get<axis_type>(iter) >= b.template get<axis_type>(iter));
        });
        return res;
    }
};

#define LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(TYPE, NAME)                                                                   \
    template <TYPE T>                                                                                                  \
    [[nodiscard]] constexpr T NAME(T const& x) noexcept {                                                              \
        T tmp;                                                                                                         \
        T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                           \
            tmp.template get<axis_type>(iter) = static_cast<axis_type>(std::NAME(x.template get<axis_type>(iter)));    \
        });                                                                                                            \
        return tmp;                                                                                                    \
    }
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsField, abs)
} // namespace ll::math
