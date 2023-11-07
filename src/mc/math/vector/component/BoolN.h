#pragma once
#include "mc/math/vector/component/base/Field.h"

template <typename T, typename... Components>
    requires ll::concepts::IsAllSame<bool, Components...>
class LL_EBO BoolN : public CommutativeGroup<T, Components...>, BoolNTag {
public:
    using first_type = bool;
    [[nodiscard]] constexpr bool any() const noexcept {
        bool res = false;
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res = res || static_cast<T const*>(this)->template get<bool>(iter);
        });
        return res;
    }
    [[nodiscard]] constexpr bool all() const noexcept {
        bool res = true;
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            res = res && static_cast<T const*>(this)->template get<bool>(iter);
        });
        return res;
    }
    [[nodiscard]] constexpr T operator!() const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = !(tmp.template get<bool>(iter));
        });
        return tmp;
    }
    [[nodiscard]] constexpr T operator||(T const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = tmp.template get<bool>(iter) || x.template get<bool>(iter);
        });
        return tmp;
    }
    [[nodiscard]] constexpr T operator&&(T const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = tmp.template get<bool>(iter) && x.template get<bool>(iter);
        });
        return tmp;
    }
    [[nodiscard]] constexpr T operator xor(T const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = tmp.template get<bool>(iter) xor x.template get<bool>(iter);
        });
        return tmp;
    }
    [[nodiscard]] constexpr T xnor(T const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = !(tmp.template get<bool>(iter) xor x.template get<bool>(iter));
        });
        return tmp;
    }
    [[nodiscard]] constexpr T operator||(first_type const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = tmp.template get<bool>(iter) || x;
        });
        return tmp;
    }
    [[nodiscard]] constexpr T operator&&(first_type const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = tmp.template get<bool>(iter) && x;
        });
        return tmp;
    }
    [[nodiscard]] constexpr T operator xor(first_type const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = tmp.template get<bool>(iter) xor x;
        });
        return tmp;
    }
    [[nodiscard]] constexpr T xnor(first_type const& x) const noexcept {
        T tmp = *(static_cast<T const*>(this));
        ll::meta::unrollWithArgs<Components...>([&]<typename axis_type>(size_t iter) constexpr {
            tmp.template get<bool>(iter) = !(tmp.template get<bool>(iter) xor x);
        });
        return tmp;
    }
    explicit(false) operator bool() const noexcept { return all(); }
};

template <IsBoolN T>
[[nodiscard]] constexpr bool any(T const& x) noexcept {
    return x.any();
}

template <IsBoolN T>
[[nodiscard]] constexpr bool all(T const& x) noexcept {
    return x.all();
}

template <IsBoolN T, IsVectorBase T2>
[[nodiscard]] constexpr T2 select(T const& x, T2 const& a, T2 const& b) noexcept
    requires(T::size() == T2::size())
{
    T2 tmp;
    T2::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) =
            x.template get<bool>(iter) ? a.template get<axis_type>(iter) : b.template get<axis_type>(iter);
    });
    return tmp;
}
