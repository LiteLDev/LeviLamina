#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/ChunkBuildOrderPolicyBase.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
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
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkfaf08b;
    ::ll::UntypedStorage<8, 32> mUnk6e03d6;
    ::ll::UntypedStorage<8, 24> mUnk73508d;
    ::ll::UntypedStorage<4, 4>  mUnk6c0761;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBuildOrderPolicy& operator=(ChunkBuildOrderPolicy const&);
    ChunkBuildOrderPolicy(ChunkBuildOrderPolicy const&);
    ChunkBuildOrderPolicy();

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
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
