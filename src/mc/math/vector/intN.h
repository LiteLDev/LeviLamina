#pragma once
#include "mc/math/vector/component/IntN.h"
#include "mc/math/vector/component/base/vecN.h"

// template <size_t N>
// class intN {
// public:
//     intN()                      = delete;
//     intN(const intN&)           = delete;
//     intN operator=(const intN&) = delete;
// };
template <typename BaseType>
VEC2_IMPL_(intN2, BaseType, int, IntN);
template <typename BaseType>
VEC3_IMPL_(intN3, BaseType, int, IntN);
template <typename BaseType>
VEC4_IMPL_(intN4, BaseType, int, IntN);

// using int2 = intN2<int2>;
// using int3 = intN3<int3>;
// using int4 = intN4<int4>;