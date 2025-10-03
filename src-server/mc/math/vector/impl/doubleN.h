#pragma once

#include <cstddef>

#include "mc/math/vector/component/FloatN.h"
#include "mc/math/vector/impl/VecImpl.h"

namespace ll::math {
template <size_t N>
class doubleN {
public:
    doubleN()                         = delete;
    doubleN(doubleN const&)           = delete;
    doubleN operator=(doubleN const&) = delete;
};
template <>
LL_VEC2_IMPL(doubleN<2>, doubleN<2>, double, FloatN);
template <>
LL_VEC3_IMPL(doubleN<3>, doubleN<3>, double, FloatN);
template <>
LL_VEC4_IMPL(doubleN<4>, doubleN<4>, double, FloatN);

using double2 = doubleN<2>;
using double3 = doubleN<3>;
using double4 = doubleN<4>;
} // namespace ll::math
