#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/BlockSourceListener.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
struct ActorBlockSyncMessage;
// clang-format on

class BlockEventTracker : public ::BlockSourceListener {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::Block const&>> mBlockChangesMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::Block const&>> mExtraBlockChangesMap;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mMapMutex;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockEventTracker() /*override*/ = default;

    // vIndex: 4
    virtual void onBlockChanged(
        ::BlockSource&,
        ::BlockPos const&,
        uint,
        ::Block const&,
        ::Block const&,
        int,
        ::ActorBlockSyncMessage const*,
        ::BlockChangedEventTarget,
        ::Actor*
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
