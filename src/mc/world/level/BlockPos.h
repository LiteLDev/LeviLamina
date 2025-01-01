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

class BlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BlockPos(::SubChunkPos const& subChunkPos);

    MCAPI explicit BlockPos(::Vec3 const& v);

    MCAPI BlockPos(::ChunkPos const& cp, int y);

    MCAPI BlockPos(::ChunkPos const& cp, ::ChunkBlockPos const& offset, short minDimensionHeight);

    MCAPI BlockPos(float x, float y, float z);

    MCAPI ::BlockPos above() const;

    MCAPI ::Vec3 bottomCenter() const;

    MCAPI ::BlockPos neighbor(uchar direction) const;

    MCAPI bool operator!=(::BlockPos const& rhs) const;

    MCAPI int randomSeed() const;

    MCAPI int64 randomSeed64() const;

    MCAPI ::BlockPos relative(uchar facing, int steps) const;

    MCAPI ::std::string toCommandString() const;

    MCAPI ::std::string toString() const;

    MCAPI ::BlockPos transform(::Rotation rotation, ::Mirror mirror, ::Vec3 const& pivot) const;
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
    MCAPI void* $ctor(::SubChunkPos const& subChunkPos);

    MCAPI void* $ctor(::Vec3 const& v);

    MCAPI void* $ctor(::ChunkPos const& cp, int y);

    MCAPI void* $ctor(::ChunkPos const& cp, ::ChunkBlockPos const& offset, short minDimensionHeight);

    MCAPI void* $ctor(float x, float y, float z);
    // NOLINTEND
};
