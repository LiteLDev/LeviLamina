#pragma once
#include "mc/math/vector/component/FloatN.h"
#include "mc/math/vector/component/base/vecN.h"

template <size_t N>
class floatN {
public:
    floatN()                        = delete;
    floatN(const floatN&)           = delete;
    floatN operator=(const floatN&) = delete;
};
template <>
VEC2_IMPL_(floatN<2>, float, FloatN);
template <>
VEC3_IMPL_(floatN<3>, float, FloatN);
template <>
VEC4_IMPL_(floatN<4>, float, FloatN);