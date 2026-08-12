#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class ChunkBlockPos;
class ChunkPos;
class SubChunkPos;
class Vec3;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AABB;
class BoundingBox;

class BlockPos : public ll::math::intN3<BlockPos> {
public:
    using intN3::intN3;

    LLNDAPI operator AABB() const;
    LLNDAPI operator BoundingBox() const;

    LLNDAPI Vec3 bottomCenter() const;
    LLNDAPI Vec3 center() const;

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPos east() const;

    MCAPI ::BlockPos north() const;

    MCAPI ::BlockPos south() const;

    MCAPI ::std::string toString() const;

    MCAPI ::BlockPos west() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockPos const& MAX();

    MCAPI static ::BlockPos const& MIN();

    MCAPI static ::BlockPos const& ZERO();
    // NOLINTEND
};
