#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

// clang-format off
class BlockPos;
class Vec3;
// clang-format on

class alignas(uint64) ChunkPos : public ll::math::intN2<ChunkPos> {
public:
    template <std::floating_point T0, std::floating_point T1>
    [[nodiscard]] constexpr ChunkPos(T0 x, T1 z)
    : intN2((static_cast<int>(std::floor(x)) >> 4), (static_cast<int>(std::floor(z)) >> 4)) {}

    using intN2::intN2;

    ChunkPos(BlockPos const& bp) {
        x = bp.x >> 4;
        z = bp.z >> 4;
    }

    ChunkPos(Vec3 const& pos) {
        x = static_cast<int>(floorf(pos.x)) >> 4;
        z = static_cast<int>(floorf(pos.z)) >> 4;
    }

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ChunkPos const& INVALID();

    MCAPI static ::ChunkPos const& MAX();

    MCAPI static ::ChunkPos const& MIN();

    MCAPI static ::ChunkPos const& ONE();
    // NOLINTEND
};
