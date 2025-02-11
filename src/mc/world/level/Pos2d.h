#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/BlockPos.h"

class Pos2d : public ll::math::intN2<Pos2d> {
public:
    using intN2::intN2;

    [[nodiscard]] constexpr Pos2d(BlockPos const& pos) : intN2(pos.x, pos.z) {}
};
