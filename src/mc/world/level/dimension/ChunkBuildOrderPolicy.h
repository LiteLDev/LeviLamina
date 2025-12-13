#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

class ChunkBuildOrderPolicy : public ::ChunkBuildOrderPolicyBase {
public:
    // ChunkBuildOrderPolicy inner types declare
    // clang-format off
    struct Influence;
    // clang-format on

    // ChunkBuildOrderPolicy inner types define
    enum class HintType : int {
        Player            = 0,
        TickingAreaBox    = 1,
        TickingAreaCircle = 2,
    };

    struct Influence {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::ChunkPos>                        position;
        ::ll::TypedStorage<4, 12, ::Vec3>                           parameter;
        ::ll::TypedStorage<4, 4, ::ChunkBuildOrderPolicy::HintType> type;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI int getPriority(::ChunkPos const& cp) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint, ::ChunkBuildOrderPolicy::Influence>> mPositionMap;
    ::ll::TypedStorage<8, 32, ::SpinLockImpl>                                                 mChunkPosAsyncSpinLock;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkBuildOrderPolicy::Influence>> mChunkPosAndDirectionAsync;
    ::ll::TypedStorage<4, 4, uint>                                               mLastHandle;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ChunkBuildOrderPolicy() /*override*/ = default;

    // vIndex: 1
    virtual int getChunkRebuildPriority(::ChunkPos const& cp) const /*override*/;

    // vIndex: 2
    virtual uint registerForUpdates() /*override*/;

    // vIndex: 3
    virtual void unregisterForUpdates(uint handle) /*override*/;

    // vIndex: 4
    virtual void setPlayerInfluence(
        uint              handle,
        ::ChunkPos const& playerPosition,
        ::Vec3 const&     playerMovementDirection
    ) /*override*/;

    // vIndex: 5
    virtual void setTickingAreaInfluence(
        uint              handle,
        ::ChunkPos const& tickingAreaPosition,
        int               sizeX,
        int               sizeZ,
        bool              isCircle,
        bool              preload
    ) /*override*/;

    // vIndex: 6
    virtual void updateInfluences() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getChunkRebuildPriority(::ChunkPos const& cp) const;

    MCAPI uint $registerForUpdates();

    MCAPI void $unregisterForUpdates(uint handle);

    MCAPI void
    $setPlayerInfluence(uint handle, ::ChunkPos const& playerPosition, ::Vec3 const& playerMovementDirection);

    MCAPI void $setTickingAreaInfluence(
        uint              handle,
        ::ChunkPos const& tickingAreaPosition,
        int               sizeX,
        int               sizeZ,
        bool              isCircle,
        bool              preload
    );

    MCAPI void $updateInfluences();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
