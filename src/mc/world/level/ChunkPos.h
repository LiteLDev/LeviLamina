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
    MCAPI explicit ChunkPos(class BlockPos const& pos);

    MCAPI explicit ChunkPos(class Vec3 const& pos);

    MCAPI bool isWithinBounds(class ChunkPos const& min, class ChunkPos const& max) const;

    MCAPI class Vec3 toBlockSpaceVec3(float y) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI static class ChunkPos const& INVALID();

    MCAPI static class ChunkPos const& MAX();

    MCAPI static class ChunkPos const& MIN();

    MCAPI static class ChunkPos const& ONE();

    // NOLINTEND
};
