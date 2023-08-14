#pragma once
#include "mc/math/vector/component/base/Field.h"

template <size_t N>
class doubleN;

template <typename T, typename... Components>
    requires AllSame<Components...>
class IntN : public Field<T, Components...>, IntNTag {
public:
    using first_type = Field<T, Components...>::first_type;

    [[nodiscard]] constexpr T cross(T const& b) const noexcept
        requires(IntN::size() == 3)
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

#define GEN_VEC_BASIC_MATH_FUNC_INT(NAME)                                                                              \
    template <IsIntN T>                                                                                                \
    [[nodiscard]] constexpr doubleN<T::size()> NAME(T const& x) noexcept                                               \
        requires(T::size() >= 2 && T::size() <= 4)                                                                     \
    {                                                                                                                  \
        doubleN<T::size()> tmp;                                                                                        \
        T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                           \
            tmp.template get<double>(iter) = static_cast<double>(NAME(x.template get<axis_type>(iter)));               \
        });                                                                                                            \
        return tmp;                                                                                                    \
    }

GEN_VEC_BASIC_MATH_FUNC_INT(acos)
GEN_VEC_BASIC_MATH_FUNC_INT(asin)
GEN_VEC_BASIC_MATH_FUNC_INT(atan)
GEN_VEC_BASIC_MATH_FUNC_INT(acosh)
GEN_VEC_BASIC_MATH_FUNC_INT(asinh)
GEN_VEC_BASIC_MATH_FUNC_INT(atanh)
GEN_VEC_BASIC_MATH_FUNC_INT(atan2)
GEN_VEC_BASIC_MATH_FUNC_INT(ceil)
GEN_VEC_BASIC_MATH_FUNC_INT(cos)
GEN_VEC_BASIC_MATH_FUNC_INT(cosh)
GEN_VEC_BASIC_MATH_FUNC_INT(exp)
GEN_VEC_BASIC_MATH_FUNC_INT(fabs)
GEN_VEC_BASIC_MATH_FUNC_INT(floor)
GEN_VEC_BASIC_MATH_FUNC_INT(fmod)
GEN_VEC_BASIC_MATH_FUNC_INT(log)
GEN_VEC_BASIC_MATH_FUNC_INT(log2)
GEN_VEC_BASIC_MATH_FUNC_INT(log10)
GEN_VEC_BASIC_MATH_FUNC_INT(modf)
GEN_VEC_BASIC_MATH_FUNC_INT(pow)
GEN_VEC_BASIC_MATH_FUNC_INT(round)
GEN_VEC_BASIC_MATH_FUNC_INT(sin)
GEN_VEC_BASIC_MATH_FUNC_INT(sinh)
GEN_VEC_BASIC_MATH_FUNC_INT(sqrt)
GEN_VEC_BASIC_MATH_FUNC_INT(tan)
GEN_VEC_BASIC_MATH_FUNC_INT(tanh)
