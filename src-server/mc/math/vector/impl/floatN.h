#pragma once

#include "mc/math/vector/component/FloatN.h"
#include "mc/math/vector/impl/VecImpl.h"

namespace ll::math {
// template <size_t N>
// class floatN {
// public:
//     floatN()                        = delete;
//     floatN(floatN const&)           = delete;
//     floatN operator=(floatN const&) = delete;
// };
template <typename BaseType>
LL_VEC2_IMPL(floatN2, BaseType, float, FloatN);
template <typename BaseType>
LL_VEC3_IMPL(floatN3, BaseType, float, FloatN);
template <typename BaseType>
LL_VEC4_IMPL(floatN4, BaseType, float, FloatN);

// using float2 = floatN2<float2>;
// using float3 = floatN3<float3>;
// using float4 = floatN4<float4>;
} // namespace ll::math
