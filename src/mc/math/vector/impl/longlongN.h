#pragma once

#include <cstddef>
#include <cstdint>

#include "mc/math/vector/component/IntN.h"
#include "mc/math/vector/impl/VecImpl.h"

namespace ll::math {
template <size_t N>
class longlongN {
public:
    longlongN()                           = delete;
    longlongN(longlongN const&)           = delete;
    longlongN operator=(longlongN const&) = delete;
};
template <>
LL_VEC2_IMPL(longlongN<2>, longlongN<2>, intmax_t, IntN);
template <>
LL_VEC3_IMPL(longlongN<3>, longlongN<3>, intmax_t, IntN);
template <>
LL_VEC4_IMPL(longlongN<4>, longlongN<4>, intmax_t, IntN);

using longlong2 = longlongN<2>;
using longlong3 = longlongN<3>;
using longlong4 = longlongN<4>;
} // namespace ll::math
