#pragma once
#include "mc/math/vector/component/BoolN.h"
#include "mc/math/vector/component/base/vecN.h"

template <size_t N>
class boolN {
public:
    boolN()                       = delete;
    boolN(const boolN&)           = delete;
    boolN operator=(const boolN&) = delete;
};
template <>
VEC2_IMPL_(boolN<2>, boolN<2>, bool, BoolN);
template <>
VEC3_IMPL_(boolN<3>, boolN<3>, bool, BoolN);
template <>
VEC4_IMPL_(boolN<4>, boolN<4>, bool, BoolN);

using bool2 = boolN<2>;
using bool3 = boolN<3>;
using bool4 = boolN<4>;