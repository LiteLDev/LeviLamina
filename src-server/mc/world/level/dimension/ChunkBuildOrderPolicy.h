#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/SpinLockImpl.h"
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class SpinLockImpl;
class Vec3;
// clang-format on

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
        ::ll::UntypedStorage<8, 8>  mUnk6eb64a;
        ::ll::UntypedStorage<4, 12> mUnk2033fc;
        ::ll::UntypedStorage<4, 4>  mUnkc7237f;
        // NOLINTEND

    public:
        // prevent constructor by default
        Influence& operator=(Influence const&);
        Influence(Influence const&);
        Influence();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI int getPriority(::ChunkPos const& cp) const;
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
    MCNAPI int $getChunkRebuildPriority(::ChunkPos const& cp) const;

    MCNAPI uint $registerForUpdates();

    MCNAPI void $unregisterForUpdates(uint handle);

    MCNAPI void
    $setPlayerInfluence(uint handle, ::ChunkPos const& playerPosition, ::Vec3 const& playerMovementDirection);

    MCNAPI void $setTickingAreaInfluence(
        uint              handle,
        ::ChunkPos const& tickingAreaPosition,
        int               sizeX,
        int               sizeZ,
        bool              isCircle,
        bool              preload
    );

    MCNAPI void $updateInfluences();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
