#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/OwnerPtr.h"
#include "mc/world/level/BlockChangedEventTarget.h"
#include "mc/world/level/LevelListener.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class ChunkSource;
class Dimension;
class IRenderChunkGarbage;
class Level;
class LevelChunk;
class LevelRenderer;
class LevelRendererCamera;
class RenderChunkCoordinatorProxy;
class RenderChunkPerformanceData;
class RenderChunkShared;
struct ActorBlockSyncMessage;
struct BlockActorBlockSyncMessage;
// clang-format on

class RenderChunkCoordinator : public ::LevelListener {
public:
    // RenderChunkCoordinator inner types declare
    // clang-format off
    struct DirtyChunkData;
    // clang-format on

    // RenderChunkCoordinator inner types define
    struct DirtyChunkData {};

    using RenderChunkMapType = ::std::unordered_map<::SubChunkPos, ::std::weak_ptr<::RenderChunkShared>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mSweepAndPruneRatio;
    ::ll::TypedStorage<
        8,
        8,
        ::std::_List_const_iterator<::std::_List_val<
            ::std::_List_simple_types<::std::pair<::SubChunkPos const, ::std::weak_ptr<::RenderChunkShared>>>>>>
        mSweepAndPruneIterator;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::std::weak_ptr<::RenderChunkShared>>>
                                                                     mRenderChunkSharedMap;
    ::ll::TypedStorage<8, 8, ::Level&>                               mLevel;
    ::ll::TypedStorage<8, 8, ::LevelRenderer&>                       mLevelRenderer;
    ::ll::TypedStorage<8, 24, ::std::vector<::LevelRendererCamera*>> mLevelRendererCameraListenerList;
    ::ll::TypedStorage<4, 4, ::DimensionType>                        mDimensionId;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::RenderChunkCoordinator::DirtyChunkData>>
        mVisibilityDirtyRenderChunkMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::std::vector<::ActorBlockSyncMessage>>>
        mRenderChunkChangedEntityNotificationMap;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::SubChunkPos, ::std::vector<::BlockActorBlockSyncMessage>>>
        mRenderChunkChangedBlockEntityNotificationMap;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RenderChunkCoordinatorProxy>> mProxy;
    ::ll::TypedStorage<8, 16, ::OwnerPtr<::RenderChunkPerformanceData>>        mRenderChunkPerformanceRegistry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::IRenderChunkGarbage>>        mGarbage;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkCoordinator& operator=(RenderChunkCoordinator const&);
    RenderChunkCoordinator(RenderChunkCoordinator const&);
    RenderChunkCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderChunkCoordinator() /*override*/;

    virtual void onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc) /*override*/;

    virtual void onSubChunkLoaded(
        ::ChunkSource&,
        ::LevelChunk& lc,
        short         absoluteSubChunkIndex,
        bool          subChunkVisibilityChanged
    ) /*override*/;

    virtual void onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos) /*override*/;

    virtual void onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max) /*override*/;

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
    // member functions
    // NOLINTBEGIN
    MCAPI RenderChunkCoordinator(::Level& level, ::LevelRenderer& levelRenderer, ::DimensionType dimensionID);

    MCAPI void _handleVisibilityUpdates();

    MCAPI void _launchVisibilityRebuild(::std::shared_ptr<::RenderChunkShared>& renderChunkShared);

    MCAPI void _notifyListenersForVisibilityChange(::RenderChunkShared& renderChunkShared);

    MCAPI void _setAllDirty(bool immediate, bool changesVisibility);

    MCAPI void
    _setDirty(::BlockPos const& min, ::BlockPos const& max, bool immediate, bool changesVisibility, bool canInterlock);

    MCAPI ::std::shared_ptr<::RenderChunkShared> getOrCreateChunkAtPos(::SubChunkPos const& pos);

    MCAPI uint64 getRenderChunkGeometryFaceMetadataMemoryUsed() const;

    MCAPI uint64 getRenderChunkInstancedCount() const;

    MCAPI uint64 getRenderChunkInstancedDifferentGeoCount() const;

    MCAPI uint64 getRenderChunkInstancedIndexMemoryUsed() const;

    MCAPI uint64 getRenderChunkSharedMemoryUsed() const;

    MCAPI void relightAllRenderChunkGeometry();

    MCAPI void tick();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Level& level, ::LevelRenderer& levelRenderer, ::DimensionType dimensionID);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onChunkLoaded(::ChunkSource& source, ::LevelChunk& lc);

    MCAPI void
    $onSubChunkLoaded(::ChunkSource&, ::LevelChunk& lc, short absoluteSubChunkIndex, bool subChunkVisibilityChanged);

    MCAPI void $onBrightnessChanged(::BlockSource& source, ::BlockPos const& pos);

    MCAPI void $onAreaChanged(::BlockSource& source, ::BlockPos const& min, ::BlockPos const& max);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
