#pragma once

#include <cstddef>

#include "ll/api/base/Macro.h"

#include "mc/math/vector/base/Field.h"
#include "mc/math/vector/base/VectorBase.h"

namespace ll::math {
template <typename T, typename... Components>
class LL_EBO FloatN : public Field<T, Components...>, public FloatNTag {
public:
    using first_type = Field<T, Components...>::first_type;

    [[nodiscard]] constexpr T normalize() const noexcept {
        return *(static_cast<T const*>(this)) / static_cast<first_type>(this->length());
    }

    [[nodiscard]] constexpr double angle(T const& b) const noexcept { return acos(normalize().dot(b.normalize())); }

    [[nodiscard]] constexpr T cross(T const& b) const noexcept
        requires(FloatN::size() == 3)
    {
        return {
            static_cast<T const*>(this)->template get<first_type>(1) * b.template get<first_type>(2)
                - static_cast<T const*>(this)->template get<first_type>(2) * b.template get<first_type>(1),
            static_cast<T const*>(this)->template get<first_type>(2) * b.template get<first_type>(0)
                - static_cast<T const*>(this)->template get<first_type>(0) * b.template get<first_type>(2),
            static_cast<T const*>(this)->template get<first_type>(0) * b.template get<first_type>(1)
                - static_cast<T const*>(this)->template get<first_type>(1) * b.template get<first_type>(0)
        };
    }
};

template <IsFloatN T>
[[nodiscard]] constexpr T lerp(T const& a, T const& b, T const& x) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = std::lerp(
            a.template get<axis_type>(iter),
            b.template get<axis_type>(iter),
            x.template get<axis_type>(iter)
        );
    });
    return tmp;
}

LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, acos)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, asin)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, atan)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, acosh)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, asinh)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, atanh)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, ceil)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, cos)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, cosh)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, exp)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, fabs)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, floor)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, log)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, log2)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, log10)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, round)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, sin)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, sinh)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, sqrt)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, tan)
LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, tanh)

// LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, atan2)
// LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, fmod)
// LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, modf)
// LL_VEC_GEN_BASIC_MATH_FUNC_FLOAT(IsFloatN, pow)


template <IsFloatN T>
[[nodiscard]] constexpr T atan2(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) =
            std::atan2(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}

template <IsFloatN T>
[[nodiscard]] constexpr T fmod(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = std::fmod(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}

template <IsFloatN T>
[[nodiscard]] constexpr T modf(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = std::modf(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}

template <IsFloatN T>
[[nodiscard]] constexpr T pow(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = std::pow(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}
} // namespace ll::math
