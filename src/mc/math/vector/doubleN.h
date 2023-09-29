#pragma once
#include "mc/math/vector/component/FloatN.h"
#include "mc/math/vector/component/base/vecN.h"

template <size_t N>
class doubleN {
public:
    doubleN()                         = delete;
    doubleN(doubleN const&)           = delete;
    doubleN operator=(doubleN const&) = delete;
};
template <>
VEC2_IMPL_(doubleN<2>, doubleN<2>, double, FloatN);
template <>
VEC3_IMPL_(doubleN<3>, doubleN<3>, double, FloatN);
template <>
VEC4_IMPL_(doubleN<4>, doubleN<4>, double, FloatN);

using double2 = doubleN<2>;
using double3 = doubleN<3>;
using double4 = doubleN<4>;