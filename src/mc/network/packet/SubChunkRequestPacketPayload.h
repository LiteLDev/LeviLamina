#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacketPayload.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SubChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType>                                            mDimensionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPacketPayload::SubChunkPosOffset>> mSubChunkPosOffsets;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                             mCenterPos;
    // NOLINTEND

#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    SubChunkRequestPacketPayload();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI SubChunkRequestPacketPayload(
        ::DimensionType                     dimensionType,
        ::SubChunkPos const&                playerPos,
        ::std::vector<::SubChunkPos> const& positions
    );
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void*
    $ctor(::DimensionType dimensionType, ::SubChunkPos const& playerPos, ::std::vector<::SubChunkPos> const& positions);
#endif
    // NOLINTEND
};
