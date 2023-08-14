#pragma once
#include "mc/math/vector/component/IntN.h"
#include "mc/math/vector/component/base/vecN.h"

template <size_t N>
class longlongN {
public:
    longlongN()                           = delete;
    longlongN(const longlongN&)           = delete;
    longlongN operator=(const longlongN&) = delete;
};
template <>
VEC2_IMPL_(longlongN<2>, int64_t, IntN);
template <>
VEC3_IMPL_(longlongN<3>, int64_t, IntN);
template <>
VEC4_IMPL_(longlongN<4>, int64_t, IntN);