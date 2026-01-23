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

class BlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPos();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockPos(::Vec3 const& v);

    MCAPI BlockPos(::ChunkPos const& cp, int y);

    MCAPI BlockPos(float x, float y, float z);

    MCAPI ::BlockPos above() const;

    MCAPI_C ::BlockPos below() const;

    MCAPI_C ::Vec3 center() const;

    MCAPI ::BlockPos east() const;

    MCAPI uint64 hashCode() const;

    MCAPI ::BlockPos north() const;

    MCAPI explicit operator ::Vec3() const;

    MCFOLD bool operator!=(::BlockPos const& rhs) const;

    MCAPI_C ::BlockPos operator+(::BlockPos const& rhs) const;

    MCAPI_C ::BlockPos operator+(int s) const;

    MCAPI ::BlockPos operator-(::BlockPos const& rhs) const;

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
