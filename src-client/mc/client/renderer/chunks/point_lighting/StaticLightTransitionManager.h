#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/point_lighting/ColorGroupTable.h"
#include "mc/client/renderer/chunks/point_lighting/ILightLODResourceProvider.h"
#include "mc/deps/core/checked_resource_service/CheckedResourceService.h"
#include "mc/deps/minecraft_renderer/game/VoxelLightingBuffer.h"
#include "mc/platform/brstd/bitset.h"
#include "mc/world/level/SubChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class ChunkSource;
class RuntimeLocalLightingConfig;
class TaskGroup;
namespace LightPropagation { class LightPropagationCoordinator; }
namespace LightPropagation { class VoxelVolumeBuffersHandler; }
namespace LightPropagation { struct LightAccumulationVolume; }
namespace PointLighting { struct BakedLightResources; }
namespace PointLighting::Detail { struct ColorGroup; }
namespace dragon { struct ResolvedShaderBufferResource; }
namespace mce { struct DefaultVoxelBufferTraits; }
namespace mce { struct PointLightParameters; }
namespace mce::framebuilder { struct PointLightBudgetParameters; }
namespace mce::framebuilder { struct TransitioningVoxelVolumeDescription; }
// clang-format on

namespace PointLighting {

class StaticLightTransitionManager
: public ::PointLighting::ILightLODResourceProvider<::PointLighting::BakedLightResources>,
  public ::std::enable_shared_from_this<::PointLighting::StaticLightTransitionManager> {
public:
    // StaticLightTransitionManager inner types declare
    // clang-format off
    struct PropagationResult;
    struct PendingTask;
    struct InFlightTaskGuard;
    // clang-format on

    // StaticLightTransitionManager inner types define
    struct PropagationResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>                                                          mGroupIndex;
        ::ll::TypedStorage<4, 12, ::SubChunkPos>                                                 mPos;
        ::ll::TypedStorage<1, 1, bool>                                                           mIsNeighbor;
        ::ll::TypedStorage<1, 1, bool>                                                           mDeferred;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LightPropagation::LightAccumulationVolume>> mCurrentVolume;
        ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LightPropagation::LightAccumulationVolume>> mNextVolume;
        ::ll::TypedStorage<4, 4, ::brstd::bitset<27, uint>>                                      mModified;
        // NOLINTEND
    };

    struct PendingTask {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, short>          mGroupIndex;
        ::ll::TypedStorage<4, 12, ::SubChunkPos> mPos;
        ::ll::TypedStorage<1, 1, bool>           mIsNeighbor;
        ::ll::TypedStorage<1, 1, bool>           mDeferred;
        // NOLINTEND
    };

    struct InFlightTaskGuard {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::weak_ptr<::PointLighting::StaticLightTransitionManager>> mManager;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::std::atomic<int>> mInFlightTasksCount;
    ::ll::TypedStorage<4, 4, int>                mMaxInFlightTasks;
    ::ll::TypedStorage<4, 4, int>                mMaxCommitsPerFrame;
    ::ll::TypedStorage<8, 8, uint64>             mMaxStagedResults;
    ::ll::TypedStorage<8, 8, uint64>             mMaxPendingTransitionTasks;
    ::ll::TypedStorage<8, 8, uint64>             mMaxTransitionVolumeCount;
    ::ll::TypedStorage<8, 80, ::std::mutex>      mResultQueueMutex;
    ::ll::TypedStorage<
        8,
        40,
        ::std::queue<
            ::PointLighting::StaticLightTransitionManager::PropagationResult,
            ::std::deque<::PointLighting::StaticLightTransitionManager::PropagationResult>>>
        mResultQueue;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<
            short,
            ::std::queue<
                ::PointLighting::StaticLightTransitionManager::PendingTask,
                ::std::deque<::PointLighting::StaticLightTransitionManager::PendingTask>>>>
        mPendingTasksByGroup;
    ::ll::TypedStorage<
        8,
        16,
        ::std::map<short, ::std::vector<::PointLighting::StaticLightTransitionManager::PropagationResult>>>
                                                                        mStagedResults;
    ::ll::TypedStorage<2, 2, short>                                     mSpawnCursor;
    ::ll::TypedStorage<8, 88, ::PointLighting::Detail::ColorGroupTable> mColorGroups;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::VoxelLightingBuffer<::mce::DefaultVoxelBufferTraits>>>
        mVoxelLightingBuffer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::LightPropagation::VoxelVolumeBuffersHandler>>
        mVoxelVolumeBuffersHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StaticLightTransitionManager() /*override*/ = default;

    virtual bool atCapacity() const /*override*/;

    virtual bool canReserve(::BlockPos const&) const /*override*/;

    virtual void beginTransition(
        ::BlockPos const&,
        ::mce::PointLightParameters const&,
        float const,
        ::PointLighting::BakedLightResources&
    ) /*override*/;

    virtual bool
    acquired(::BlockPos const&, ::mce::PointLightParameters const&, ::PointLighting::BakedLightResources&) const
        /*override*/;

    virtual void advance(::BlockPos const&, ::PointLighting::BakedLightResources&, float) /*override*/;

    virtual void
    refresh(::BlockPos const&, ::mce::PointLightParameters const&, ::PointLighting::BakedLightResources&) /*override*/;

    virtual void finalize(::BlockPos const&, ::PointLighting::BakedLightResources&) /*override*/;

    virtual void release(::BlockPos const&, ::PointLighting::BakedLightResources&) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _advanceGroup(::PointLighting::Detail::ColorGroup& group, short groupIndex, float transitionStepSize);

    MCAPI bool _asyncResourcesSaturated() const;

    MCAPI void _clearStaleCells(::PointLighting::Detail::ColorGroup& group, short groupIndex);

    MCAPI void _commitPropagationResults();

    MCAPI void _flushStagedStep(::PointLighting::Detail::ColorGroup& group, short groupIndex);

    MCAPI void _spawnPendingTasks(
        ::TaskGroup&                                                       taskGroup,
        ::ChunkSource&                                                     chunkSource,
        ::std::shared_ptr<::LightPropagation::LightPropagationCoordinator> lightPropagationCoordinator
    );

    MCAPI void _writeVolume(
        ::std::unique_ptr<::LightPropagation::LightAccumulationVolume const> volumePtr,
        ::SubChunkPos                                                        pos,
        short                                                                layer
    );

    MCAPI ::std::optional<::mce::framebuilder::TransitioningVoxelVolumeDescription>
    getVoxelVolumeBuffers(::mce::CheckedResourceService<::dragon::ResolvedShaderBufferResource>* bufferResourceService);

    MCAPI void processPropagationTasks(
        ::TaskGroup&                                                       taskGroup,
        ::ChunkSource&                                                     chunkSource,
        ::std::shared_ptr<::LightPropagation::LightPropagationCoordinator> lightPropagationCoordinator,
        ::mce::framebuilder::PointLightBudgetParameters const&             pointLightParameters
    );

    MCAPI void reset();

    MCAPI void resetLightingConfig(::std::weak_ptr<::RuntimeLocalLightingConfig const> localLightConfig);
    // NOLINTEND
};

} // namespace PointLighting
