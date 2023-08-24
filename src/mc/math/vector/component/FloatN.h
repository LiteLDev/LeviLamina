#pragma once
#include "mc/math/vector/component/base/Field.h"

template <typename T, typename... Components>
    requires AllSame<Components...>
class FloatN : public Field<T, Components...>, FloatNTag {
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
            static_cast<T const*>(this)->template get<first_type>(1) * b.template get<first_type>(2) -
                static_cast<T const*>(this)->template get<first_type>(2) * b.template get<first_type>(1),
            static_cast<T const*>(this)->template get<first_type>(2) * b.template get<first_type>(0) -
                static_cast<T const*>(this)->template get<first_type>(0) * b.template get<first_type>(2),
            static_cast<T const*>(this)->template get<first_type>(0) * b.template get<first_type>(1) -
                static_cast<T const*>(this)->template get<first_type>(1) * b.template get<first_type>(0)};
    }
};

template <IsFloatN T>
[[nodiscard]] constexpr T lerp(T const& a, T const& b, T const& x) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = std::lerp(
            a.template get<axis_type>(iter), b.template get<axis_type>(iter), x.template get<axis_type>(iter)
        );
    });
    return tmp;
}

GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, acos)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, asin)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, atan)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, acosh)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, asinh)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, atanh)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, atan2)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, ceil)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, cos)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, cosh)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, exp)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, fabs)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, floor)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, log)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, log2)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, log10)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, round)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, sin)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, sinh)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, sqrt)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, tan)
GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, tanh)

// GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, fmod)
// GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, modf)
// GEN_VEC_BASIC_MATH_FUNC1(IsFloatN, pow)



template <IsFloatN T>
[[nodiscard]] constexpr T fmod(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = fmod(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}

template <IsFloatN T>
[[nodiscard]] constexpr T modf(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = modf(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}

template <IsFloatN T>
[[nodiscard]] constexpr T pow(T const& a, T const& b) noexcept {
    T tmp;
    T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {
        tmp.template get<axis_type>(iter) = pow(a.template get<axis_type>(iter), b.template get<axis_type>(iter));
    });
    return tmp;
}
