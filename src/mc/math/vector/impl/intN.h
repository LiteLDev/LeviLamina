#pragma once

#include "mc/math/vector/component/IntN.h"
#include "mc/math/vector/impl/VecImpl.h"

namespace ll::math {
// template <size_t N>
// class intN {
// public:
//     intN()                      = delete;
//     intN(intN const&)           = delete;
//     intN operator=(intN const&) = delete;
// };
template <typename BaseType>
LL_VEC2_IMPL(intN2, BaseType, int, IntN);
template <typename BaseType>
LL_VEC3_IMPL(intN3, BaseType, int, IntN);
template <typename BaseType>
LL_VEC4_IMPL(intN4, BaseType, int, IntN);

// using int2 = intN2<int2>;
// using int3 = intN3<int3>;
// using int4 = intN4<int4>;
} // namespace ll::math
