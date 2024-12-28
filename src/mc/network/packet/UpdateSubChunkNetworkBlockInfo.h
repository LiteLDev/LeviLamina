#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkBlockPosition;
struct ActorBlockSyncMessage;
// clang-format on

struct UpdateSubChunkNetworkBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition>  mPos;
    ::ll::TypedStorage<4, 4, uint>                     mRuntimeId;
    ::ll::TypedStorage<1, 1, uchar>                    mUpdateFlags;
    ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mSyncMessage;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateSubChunkNetworkBlockInfo& operator=(UpdateSubChunkNetworkBlockInfo const&);
    UpdateSubChunkNetworkBlockInfo(UpdateSubChunkNetworkBlockInfo const&);
    UpdateSubChunkNetworkBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UpdateSubChunkNetworkBlockInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
