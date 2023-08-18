#pragma once
#include "mc/math/vector/component/FloatN.h"
#include "mc/math/vector/component/base/vecN.h"

// template <size_t N>
// class floatN {
// public:
//     floatN()                        = delete;
//     floatN(const floatN&)           = delete;
//     floatN operator=(const floatN&) = delete;
// };
template <typename BaseType>
VEC2_IMPL_(floatN2, BaseType, float, FloatN);
template <typename BaseType>
VEC3_IMPL_(floatN3, BaseType, float, FloatN);
template <typename BaseType>
VEC4_IMPL_(floatN4, BaseType, float, FloatN);

// using float2 = floatN2<float2>;
// using float3 = floatN3<float3>;
// using float4 = floatN4<float4>;