#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/saveddata/maps/MapDecoration.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkViewSource;
class Dimension;
class MapItemSavedData;
class Packet;
// clang-format on

class MapItemTrackedActor {
public:
    // MapItemTrackedActor inner types declare
    // clang-format off
    struct UniqueId;
    // clang-format on

    // MapItemTrackedActor inner types define
    enum class Type : int {
        Entity      = 0,
        BlockEntity = 1,
        Other       = 2,
    };

    struct UniqueId {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::MapItemTrackedActor::Type> type;
        ::ll::TypedStorage<8, 8, ::ActorUniqueID>             keyEntityId;
        ::ll::TypedStorage<4, 12, ::BlockPos>                 keyBlockPos;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MapItemTrackedActor::UniqueId>      mUniqueId;
    ::ll::TypedStorage<1, 1, bool>                                  mNeedsResend;
    ::ll::TypedStorage<4, 4, uint>                                  mMinDirtyX;
    ::ll::TypedStorage<4, 4, uint>                                  mMinDirtyY;
    ::ll::TypedStorage<4, 4, uint>                                  mMaxDirtyX;
    ::ll::TypedStorage<4, 4, uint>                                  mMaxDirtyY;
    ::ll::TypedStorage<4, 4, int>                                   mTick;
    ::ll::TypedStorage<4, 4, float>                                 mLastRotation;
    ::ll::TypedStorage<1, 1, ::MapDecoration::Type>                 mDecorationType;
    ::ll::TypedStorage<4, 4, ::DimensionType>                       mDimensionId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>> mChunkViewSource;
    // NOLINTEND

public:
    // prevent constructor by default
    MapItemTrackedActor();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapItemTrackedActor(::MapItemTrackedActor::UniqueId const& id, ::BlockSource& region);

    MCAPI ::std::unique_ptr<::Packet> nextUpdatePacket(::MapItemSavedData const& savedData);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MapItemTrackedActor::UniqueId const& id, ::BlockSource& region);
    // NOLINTEND
};
