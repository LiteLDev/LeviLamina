#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/VisibilityNode.h"
#include "mc/deps/minecraft_renderer/framebuilder/dragon/RenderMetadata.h"
#include "mc/world/level/ActorBlockSyncMessage.h"
#include "mc/world/level/BlockActorBlockSyncMessage.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class RenderChunkBuilder;
class RenderChunkGeometry;
class SubChunkPos;
class Vec3;
namespace mce { struct BufferResourceService; }
// clang-format on

class RenderChunkShared {
public:
    // RenderChunkShared inner types declare
    // clang-format off
    struct ActorBlockSyncMessageWithVersion;
    struct BlockActorBlockSyncMessageWithVersion;
    // clang-format on

    // RenderChunkShared inner types define
    enum class VisibilityBuildState : int {
        Dirty            = 0,
        Building         = 1,
        BuildingButDirty = 2,
        Ready            = 3,
    };

    enum class DataState : int {
        WontLoad = 0,
        Loading  = 1,
        Loaded   = 2,
    };

    enum class BuildState : int {
        Building            = 0,
        NotBuldingOrSorting = 1,
    };

    struct ActorBlockSyncMessageWithVersion {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::ActorBlockSyncMessage> mEntityBlockSyncMessage;
        ::ll::TypedStorage<1, 1, uchar>                    mRenderChunkGeometryVersion;
        // NOLINTEND
    };

    struct BlockActorBlockSyncMessageWithVersion {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 16, ::BlockActorBlockSyncMessage> mBlockEntityBlockSyncMessage;
        ::ll::TypedStorage<1, 1, uchar>                         mRenderChunkGeometryVersion;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                     mEmpty;
    ::ll::TypedStorage<1, 1, bool>                                                     mSkyLit;
    ::ll::TypedStorage<1, 1, bool>                                                     mAllDark;
    ::ll::TypedStorage<1, 1, bool>                                                     mImmediateChangeRequested;
    ::ll::TypedStorage<4, 4, ::std::atomic<::RenderChunkShared::BuildState>>           mBuildState;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                              mCenter;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                              mPosition;
    ::ll::TypedStorage<4, 4, ::std::atomic<::RenderChunkShared::VisibilityBuildState>> mVisibilityBuildState;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkGeometry>>                mCurrentRenderChunkGeometry;
    ::ll::TypedStorage<1, 6, ::VisibilityNode>                                         mVisibility;
    ::ll::TypedStorage<1, 1, bool>                                                     mVisibilityMatrixChanged;
    ::ll::TypedStorage<1, 1, uchar>                                                    mVisibleCameraSet;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkGeometry>>                mBuildingRenderChunkGeometry;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderChunkShared::ActorBlockSyncMessageWithVersion>>
        mEntityBlockMessageList;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderChunkShared::BlockActorBlockSyncMessageWithVersion>>
                                                        mBlockEntityBlockMessageList;
    ::ll::TypedStorage<8, 64, ::dragon::RenderMetadata> mRenderMetadata;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkShared();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RenderChunkShared(::SubChunkPos const& rcp);

    MCAPI void
    endRebuild(::RenderChunkBuilder& builder, ::mce::BufferResourceService& bufferResourceService, bool useSplitStream);

    MCAPI ::std::vector<::BlockActorBlockSyncMessage> getAndPruneBlockEntityBlockSyncMessages(uchar version);

    MCAPI ::std::vector<::ActorBlockSyncMessage> getAndPruneEntityBlockSyncMessages(uchar version);

    MCAPI void rebuildVisbility(::BlockSource& region);

    MCAPI void startRebuild(::RenderChunkBuilder& builder, ::Vec3 const& currentCameraPosition);

    MCAPI ~RenderChunkShared();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::SubChunkPos const& rcp);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
