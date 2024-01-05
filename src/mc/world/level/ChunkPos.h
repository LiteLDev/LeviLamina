#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkPos : public ll::math::intN2<ChunkPos> {
public:
    template <std::floating_point T0, std::floating_point T1>
    [[nodiscard]] constexpr ChunkPos(T0 x, T1 z)
    : intN2((static_cast<int>(std::floor(x)) >> 4), (static_cast<int>(std::floor(z)) >> 4)) {}

    using intN2::intN2;

public:
    // NOLINTBEGIN
    // symbol: ??0ChunkPos@@QEAA@AEBVBlockPos@@@Z
    MCAPI explicit ChunkPos(class BlockPos const& pos);

    // symbol: ??0ChunkPos@@QEAA@AEBVVec3@@@Z
    MCAPI explicit ChunkPos(class Vec3 const& pos);

    // symbol: ?isWithinBounds@ChunkPos@@QEBA_NAEBV1@0@Z
    MCAPI bool isWithinBounds(class ChunkPos const& min, class ChunkPos const& max) const;

    // symbol: ?toBlockSpaceVec3@ChunkPos@@QEBA?AVVec3@@M@Z
    MCAPI class Vec3 toBlockSpaceVec3(float y) const;

    // symbol: ?INVALID@ChunkPos@@2V1@B
    MCAPI static class ChunkPos const INVALID;

    // symbol: ?MAX@ChunkPos@@2V1@B
    MCAPI static class ChunkPos const MAX;

    // symbol: ?MIN@ChunkPos@@2V1@B
    MCAPI static class ChunkPos const MIN;

    // symbol: ?ONE@ChunkPos@@2V1@B
    MCAPI static class ChunkPos const ONE;

    // NOLINTEND
};
