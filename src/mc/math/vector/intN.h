#pragma once
#include "mc/math/vector/component/IntN.h"
#include "mc/math/vector/component/base/vecN.h"

template <size_t N>
class intN {
public:
    intN()                      = delete;
    intN(const intN&)           = delete;
    intN operator=(const intN&) = delete;
};
template <>
VEC2_IMPL_(intN<2>, int, IntN);
template <>
VEC3_IMPL_(intN<3>, int, IntN);
template <>
VEC4_IMPL_(intN<4>, int, IntN);