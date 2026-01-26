#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
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
    MCAPI BlockPos(::Vec3 const& v);

    MCAPI BlockPos(::ChunkPos const& cp, int y);

    MCAPI BlockPos(float x, float y, float z);

    MCAPI ::BlockPos above() const;

    MCAPI_C ::BlockPos below() const;

    MCAPI ::BlockPos east() const;

    MCAPI uint64 hashCode() const;

    MCAPI ::BlockPos north() const;

    MCAPI ::BlockPos relative(uchar facing, int steps) const;

    MCAPI ::BlockPos south() const;

    MCAPI_C ::std::string toCommandString() const;

    MCAPI ::BlockPos transform(::Rotation rotation, ::Mirror mirror, ::Vec3 const& pivot) const;

    MCAPI ::BlockPos west() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockPos const& MAX();

    MCAPI static ::BlockPos const& MIN();

    MCAPI static ::BlockPos const& ONE();

    MCAPI static ::BlockPos const& ZERO();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Vec3 const& v);

    MCAPI void* $ctor(::ChunkPos const& cp, int y);

    MCAPI void* $ctor(float x, float y, float z);
    // NOLINTEND
};
