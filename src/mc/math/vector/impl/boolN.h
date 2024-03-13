#pragma once

#include <cstddef>

#include "mc/math/vector/component/BoolN.h"
#include "mc/math/vector/impl/VecImpl.h"

namespace ll::math {
template <size_t N>
class boolN {
public:
    boolN()                       = delete;
    boolN(boolN const&)           = delete;
    boolN operator=(boolN const&) = delete;
};
template <>
LL_VEC2_IMPL(boolN<2>, boolN<2>, bool, BoolN);
template <>
LL_VEC3_IMPL(boolN<3>, boolN<3>, bool, BoolN);
template <>
LL_VEC4_IMPL(boolN<4>, boolN<4>, bool, BoolN);

using bool2 = boolN<2>;
using bool3 = boolN<3>;
using bool4 = boolN<4>;
} // namespace ll::math
