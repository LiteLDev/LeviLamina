#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ActorBlockSyncMessage.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class Block;
class ILevel;
// clang-format on

struct UpdateBlockSyncedPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>              mPos;
    ::ll::TypedStorage<4, 4, uint>                     mLayer;
    ::ll::TypedStorage<1, 1, uchar>                    mUpdateFlags;
    ::ll::TypedStorage<4, 4, uint>                     mRuntimeId;
    ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mEntityBlockSyncMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateBlockSyncedPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateBlockSyncedPacketPayload(
        ::BlockPos const&              pos,
        uint                           layer,
        uint                           runtimeId,
        uchar                          updateFlags,
        ::ActorBlockSyncMessage const& syncMsg
    );

#ifdef LL_PLAT_C
    MCFOLD ::Block const& getBlock(::ILevel const& level) const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::BlockPos const& pos, uint layer, uint runtimeId, uchar updateFlags, ::ActorBlockSyncMessage const& syncMsg);
    // NOLINTEND
};
