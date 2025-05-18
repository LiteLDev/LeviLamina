#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
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

public:
    // prevent constructor by default
    ChunkPos();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ChunkPos(::BlockPos const& pos);

    MCAPI explicit ChunkPos(::Vec3 const& pos);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ChunkPos const& INVALID();

    MCAPI static ::ChunkPos const& MAX();

    MCAPI static ::ChunkPos const& MIN();

    MCAPI static ::ChunkPos const& ONE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BlockPos const& pos);

    MCAPI void* $ctor(::Vec3 const& pos);
    // NOLINTEND
};
