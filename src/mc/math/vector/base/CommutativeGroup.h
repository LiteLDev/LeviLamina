#pragma once

#include <concepts>
#include <cstddef>

#include "ll/api/base/Macro.h"

#include "mc/math/vector/base/VectorBase.h"

namespace ll::math {
struct CommutativeGroupTag {};

template <typename T>
concept IsCommutativeGroup = std::is_base_of_v<CommutativeGroupTag, T>;

template <typename T, typename... Components>
struct LL_EBO CommutativeGroup : VectorBase<T, Components...>, CommutativeGroupTag {
public:
    using first_type = typename VectorBase<T, Components...>::first_type;

    constexpr T& operator+=(T const& b) noexcept
        requires(!IsCommutativeGroup<first_type>)
    {
        CommutativeGroup::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<axis_type>(iter) += b.template get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    constexpr T& operator-=(T const& b) noexcept
        requires(!IsCommutativeGroup<first_type>)
    {
        CommutativeGroup::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<axis_type>(iter) -= b.template get<axis_type>(iter);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    [[nodiscard]] constexpr T operator+(T const& b) const noexcept
        requires(!IsCommutativeGroup<first_type>)
    {
        T tmp  = *(static_cast<T const*>(this));
        tmp   += b;
        return tmp;
    }

    [[nodiscard]] constexpr T operator-(T const& b) const noexcept
        requires(!IsCommutativeGroup<first_type>)
    {
        T tmp  = *(static_cast<T const*>(this));
        tmp   -= b;
        return tmp;
    }
    template <std::convertible_to<first_type> V>
    constexpr T& operator+=(V const& b) noexcept {
        CommutativeGroup::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<first_type>(iter) += static_cast<first_type>(b);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }


    template <std::convertible_to<first_type> V>
    constexpr T& operator-=(V const& b) noexcept {
        CommutativeGroup::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
            static_cast<T*>(this)->template get<first_type>(iter) -= static_cast<first_type>(b);
        });
        return static_cast<T&>(*(static_cast<T*>(this)));
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T operator+(V const& b) const noexcept {
        T tmp  = *(static_cast<T const*>(this));
        tmp   += static_cast<first_type>(b);
        return tmp;
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T operator-(V const& b) const noexcept {
        T tmp  = *(static_cast<T const*>(this));
        tmp   -= static_cast<first_type>(b);
        return tmp;
    }

    [[nodiscard]] constexpr T add(T const& b) const noexcept
        requires(!IsCommutativeGroup<first_type>)
    {
        return *(static_cast<T const*>(this)) + b;
    }

    [[nodiscard]] constexpr T sub(T const& b) const noexcept
        requires(!IsCommutativeGroup<first_type>)
    {
        return *(static_cast<T const*>(this)) - b;
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T add(V const& b) const noexcept {
        return *(static_cast<T const*>(this)) + static_cast<first_type>(b);
    }

    template <std::convertible_to<first_type> V>
    [[nodiscard]] constexpr T sub(V const& b) const noexcept {
        return *(static_cast<T const*>(this)) - static_cast<first_type>(b);
    }
};

template <IsCommutativeGroup T>
[[nodiscard]] constexpr T min(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        if constexpr (std::is_base_of_v<CommutativeGroupTag, axis_type>) {
            tmp.template get<axis_type>(iter) =
                min<axis_type>(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
        } else {
            tmp.template get<axis_type>(iter) =
                std::min<axis_type>(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
        }
    });
    return tmp;
}

template <IsCommutativeGroup T>
[[nodiscard]] constexpr T max(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        if constexpr (std::is_base_of_v<CommutativeGroupTag, axis_type>) {
            tmp.template get<axis_type>(iter) =
                max<axis_type>(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
        } else {
            tmp.template get<axis_type>(iter) =
                std::max<axis_type>(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
        }
    });
    return tmp;
}
} // namespace ll::math
