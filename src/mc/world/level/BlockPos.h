#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class BlockPos {
public:
    // prevent constructor by default
    BlockPos& operator=(BlockPos const&);
    BlockPos(BlockPos const&);
    BlockPos();

public:
    // NOLINTBEGIN
    // symbol: ??0BlockPos@@QEAA@AEBVSubChunkPos@@@Z
    MCAPI explicit BlockPos(class SubChunkPos const&);

    // symbol: ??0BlockPos@@QEAA@AEBVVec3@@@Z
    MCAPI explicit BlockPos(class Vec3 const& v);

    // symbol: ??0BlockPos@@QEAA@AEBVChunkPos@@H@Z
    MCAPI BlockPos(class ChunkPos const& cp, int y);

    // symbol: ??0BlockPos@@QEAA@AEBVChunkPos@@AEBVChunkBlockPos@@F@Z
    MCAPI BlockPos(class ChunkPos const& cp, class ChunkBlockPos const& offset, short);

    // symbol: ??0BlockPos@@QEAA@MMM@Z
    MCAPI BlockPos(float x, float y, float z);

    // symbol: ?above@BlockPos@@QEBA?AV1@XZ
    MCAPI class BlockPos above() const;

    // symbol: ?center@BlockPos@@QEBA?AVVec3@@XZ
    MCAPI class Vec3 center() const;

    // symbol: ?neighbor@BlockPos@@QEBA?AV1@E@Z
    MCAPI class BlockPos neighbor(uchar direction) const;

    // symbol: ??BBlockPos@@QEBA?AVVec3@@XZ
    MCAPI explicit operator class Vec3() const;

    // symbol: ??9BlockPos@@QEBA_NAEBV0@@Z
    MCAPI bool operator!=(class BlockPos const&) const;

    // symbol: ??HBlockPos@@QEBA?AV0@AEBV0@@Z
    MCAPI class BlockPos operator+(class BlockPos const&) const;

    // symbol: ??8BlockPos@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class BlockPos const& rhs) const;

    // symbol: ?randomSeed@BlockPos@@QEBAHXZ
    MCAPI int randomSeed() const;

    // symbol: ?relative@BlockPos@@QEBA?AV1@EH@Z
    MCAPI class BlockPos relative(uchar facing, int steps) const;

    // symbol: ?toString@BlockPos@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

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
