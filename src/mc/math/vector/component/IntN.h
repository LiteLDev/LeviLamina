#pragma once

#include <cstddef>

#include "ll/api/base/Macro.h"

#include "mc/math/vector/base/Field.h"
#include "mc/math/vector/base/VectorBase.h"

namespace ll::math {
template <size_t N>
class doubleN;

template <typename T, typename... Components>
class LL_EBO IntN : public Field<T, Components...>, public IntNTag {
public:
    using first_type = Field<T, Components...>::first_type;

    [[nodiscard]] constexpr T cross(T const& b) const noexcept
        requires(IntN::size() == 3)
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

#define LL_VEC_GEN_BASIC_MATH_FUNC_INT(NAME)                                                                           \
    template <IsIntN T>                                                                                                \
    [[nodiscard]] constexpr doubleN<T::size()> NAME(T const& x) noexcept                                               \
        requires(T::size() >= 2 && T::size() <= 4)                                                                     \
    {                                                                                                                  \
        doubleN<T::size()> tmp;                                                                                        \
        T::forEachComponent([&]<typename axis_type>(size_t iter) constexpr {                                           \
            tmp.template get<double>(iter) = static_cast<double>(std::NAME(x.template get<axis_type>(iter)));          \
        });                                                                                                            \
        return tmp;                                                                                                    \
    }

LL_VEC_GEN_BASIC_MATH_FUNC_INT(acos)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(asin)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(atan)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(acosh)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(asinh)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(atanh)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(ceil)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(cos)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(cosh)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(exp)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(fabs)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(floor)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(log)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(log2)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(log10)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(round)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(sin)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(sinh)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(sqrt)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(tan)
LL_VEC_GEN_BASIC_MATH_FUNC_INT(tanh)

// LL_VEC_GEN_BASIC_MATH_FUNC_INT(atan2)
// LL_VEC_GEN_BASIC_MATH_FUNC_INT(modf)
// LL_VEC_GEN_BASIC_MATH_FUNC_INT(fmod)
// LL_VEC_GEN_BASIC_MATH_FUNC_INT(pow)
} // namespace ll::math
