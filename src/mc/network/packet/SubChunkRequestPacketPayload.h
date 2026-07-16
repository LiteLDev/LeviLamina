#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SubChunkPacket.h"
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SubChunkRequestPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DimensionType>                                     mDimensionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPacket::SubChunkPosOffset>> mSubChunkPosOffsets;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                      mCenterPos;
    // NOLINTEND
};
