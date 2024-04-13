#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class AABB;
class BoundingBox;
class Vec3;

class BlockPos : public ll::math::intN3<BlockPos> {
public:
    using intN3::intN3;

    LLNDAPI operator AABB() const;
    LLNDAPI operator BoundingBox() const;

    LLNDAPI Vec3 bottomCenter() const;
    LLNDAPI Vec3 center() const;

public:
    // NOLINTBEGIN
    // symbol: ??0BlockPos@@QEAA@AEBVSubChunkPos@@@Z
    MCAPI BlockPos(class SubChunkPos const& subChunkPos);

    // symbol: ??0BlockPos@@QEAA@AEBVChunkPos@@H@Z
    MCAPI BlockPos(class ChunkPos const& cp, int y);

    // symbol: ??0BlockPos@@QEAA@AEBVChunkPos@@AEBVChunkBlockPos@@F@Z
    MCAPI BlockPos(class ChunkPos const& cp, class ChunkBlockPos const& offset, short minDimensionHeight);

    // symbol: ??0BlockPos@@QEAA@MMM@Z
    MCAPI BlockPos(float x, float y, float z);

    // symbol: ?above@BlockPos@@QEBA?AV1@XZ
    MCAPI class BlockPos above() const;

    // symbol: ?neighbor@BlockPos@@QEBA?AV1@E@Z
    MCAPI class BlockPos neighbor(uchar direction) const;

    // symbol: ??BBlockPos@@QEBA?AVVec3@@XZ
    MCAPI operator class Vec3() const;

    // symbol: ?randomSeed@BlockPos@@QEBAHXZ
    MCAPI int randomSeed() const;

    // symbol: ?relative@BlockPos@@QEBA?AV1@EH@Z
    MCAPI class BlockPos relative(uchar facing, int steps) const;

    // symbol: ?transform@BlockPos@@QEBA?AV1@W4Rotation@@W4Mirror@@AEBVVec3@@@Z
    MCAPI class BlockPos transform(::Rotation rotation, ::Mirror mirror, class Vec3 const& pivot) const;

    // symbol: ?bindType@BlockPos@@SAXAEAUReflectionCtx@cereal@@@Z
    MCAPI static void bindType(struct cereal::ReflectionCtx&);

    // symbol: ?MAX@BlockPos@@2V1@B
    MCAPI static class BlockPos const MAX;

    // symbol: ?MIN@BlockPos@@2V1@B
    MCAPI static class BlockPos const MIN;

    // symbol: ?ONE@BlockPos@@2V1@B
    MCAPI static class BlockPos const ONE;

    // symbol: ?ZERO@BlockPos@@2V1@B
    MCAPI static class BlockPos const ZERO;

    // NOLINTEND
};
