#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/UpdateSubChunkBlocksChangedInfo.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
struct UpdateSubChunkNetworkBlockInfo;
// clang-format on

struct UpdateSubChunkBlocksPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::UpdateSubChunkBlocksChangedInfo> mBlocksChanged;
    ::ll::TypedStorage<4, 12, ::BlockPos>                        mSubChunkBlockPosition;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkBlocksPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateSubChunkBlocksPacketPayload(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );

#ifdef LL_PLAT_C
    MCFOLD ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& getExtraBlocks() const;

    MCFOLD ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& getStandardBlocks() const;
#endif

    MCAPI void setSubChunkPosition(::SubChunkPos const& subChunkPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& blocksChanged,
        ::std::vector<::UpdateSubChunkNetworkBlockInfo> const& extraBlocksChanged
    );
    // NOLINTEND
};
