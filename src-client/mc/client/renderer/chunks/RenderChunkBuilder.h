#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/client/renderer/chunks/RenderChunkPerformanceTrackingData.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/world/level/chunk/ChunkSourceViewGenerateMode.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class ChunkSource;
class ChunkViewSource;
class MinecraftGameplayGraphicsResources;
class Tessellator;
struct AirAndSimpleBlockBits;
struct BlockQueueEntry;
struct BlockTessellator;
struct IRenderChunkGarbage;
struct RenderChunkCoordinator;
struct RenderChunkGeometry;
struct RenderChunkQuadInfo;
struct RuntimeLocalLightingConfig;
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { struct BlockTessellatorPipeline; }
namespace ClientBlockPipeline { struct Description; }
namespace ClientBlockPipeline { struct TessellatorContext; }
namespace mce { class Mesh; }
namespace mce { class MeshData; }
namespace mce::framebuilder { struct FrameLightingModelCapabilities; }
// clang-format on

class RenderChunkBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ChunkViewSource>>                         mLocalSource;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::BlockTessellator>>                         mBlockTessellator;
    ::ll::TypedStorage<1, 1, bool>                                                          mAllDark;
    ::ll::TypedStorage<1, 1, bool>                                                          mSkyLit;
    ::ll::TypedStorage<1, 1, bool>                                                          mBlendCanRenderAsOpaque;
    ::ll::TypedStorage<4, 4, float>                                                         mAverageSkyLight;
    ::ll::TypedStorage<8, 168, ::std::array<::std::vector<::RenderChunkQuadInfo>, 7>>       mFaceMetadata;
    ::ll::TypedStorage<4, 136, ::std::array<::RangeIndices, 17>>                            mRenderLayerRanges;
    ::ll::TypedStorage<8, 8, ::std::vector<::BlockQueueEntry>*>                             mQueues;
    ::ll::TypedStorage<8, 8, ::std::vector<::BlockQueueEntry>*>                             mSimpleOpaqueBlockQueue;
    ::ll::TypedStorage<8, 136, uint64[17]>                                                  mQueueIndexCounts;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Tessellator>>                              mOwnedTessellator;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository>> mMaterialRepository;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::RuntimeLocalLightingConfig const>>          mLocalLightingConfig;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBlockPipeline::BlockTessellatorPipeline>> mPipelineTessellator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ClientBlockPipeline::Description>>              mPipelineDescription;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                                                     mTessellator;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::Mesh>>                                     mBuiltMesh;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::MeshData>>                                 mMeshData;
    ::ll::TypedStorage<1, 1, bool>                                                               mGUIRendering;
    ::ll::TypedStorage<4, 24, ::AABB>                                                            mBuildBoundingBox;
    ::ll::TypedStorage<1, 1, bool>                                    mUseNewTessellationPipeline;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IRenderChunkGarbage>> mRenderChunkGarbage;
    ::ll::TypedStorage<8, 16, ::WeakRef<::RenderChunkCoordinator>>    mRenderChunkCoordinator;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkBuilder& operator=(RenderChunkBuilder const&);
    RenderChunkBuilder(RenderChunkBuilder const&);
    RenderChunkBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RenderChunkBuilder(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::WeakRef<::RenderChunkCoordinator>                                 coordinator
    );

    MCNAPI RenderChunkBuilder(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::std::weak_ptr<::IRenderChunkGarbage>                              garbage
    );

    MCNAPI RenderChunkBuilder(
        ::MinecraftGameplayGraphicsResources&      minecraftGameplayGraphicsResources,
        ::ClientBlockPipeline::TessellatorContext& pipelineTessellatorContext,
        ::ChunkSource&                             mainSource,
        ::WeakRef<::RenderChunkCoordinator>        coordinator
    );

    MCNAPI void _buildRanges(::RenderChunkPerformanceTrackingData::RenderChunkBuildDetails& renderChunkBuildDetails);

    MCNAPI bool _sortBlocks(
        ::BlockSource&                                                 region,
        ::RenderChunkGeometry&                                         renderChunkGeometry,
        bool                                                           transparentLeaves,
        ::AirAndSimpleBlockBits&                                       airAndSimpleBlocks,
        ::RenderChunkPerformanceTrackingData::RenderChunkBuildDetails& renderChunkBuildDetails
    );

    MCNAPI bool _tessellateQueues(
        ::RenderChunkGeometry&                                         renderChunkGeometry,
        ::BlockSource&                                                 region,
        ::AirAndSimpleBlockBits&                                       airAndSimpleBlocks,
        ::RenderChunkPerformanceTrackingData::RenderChunkBuildDetails& renderChunkBuildDetails
    );

    MCNAPI void _updateFacesMetadata();

    MCNAPI void build(
        ::RenderChunkGeometry&                                     renderChunkGeometry,
        bool                                                       transparentLeaves,
        ::BakedBlockLightType                                      lightingType,
        bool                                                       forExport,
        ::mce::framebuilder::FrameLightingModelCapabilities const& lightingModelCapabilities
    );

    MCNAPI void prepareWorldData(::BlockPos const& pos, ::ChunkSourceViewGenerateMode viewMoveMode);

    MCNAPI ~RenderChunkBuilder();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void checkNeighborBlockIsAirOrSimpleBlock(
        ::Block const&           block,
        uint64                   blockBitsetIndex,
        ::AirAndSimpleBlockBits& airAndSimpleBlocks
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::WeakRef<::RenderChunkCoordinator>                                 coordinator
    );

    MCNAPI void* $ctor(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::std::weak_ptr<::IRenderChunkGarbage>                              garbage
    );

    MCNAPI void* $ctor(
        ::MinecraftGameplayGraphicsResources&      minecraftGameplayGraphicsResources,
        ::ClientBlockPipeline::TessellatorContext& pipelineTessellatorContext,
        ::ChunkSource&                             mainSource,
        ::WeakRef<::RenderChunkCoordinator>        coordinator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
