#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/block/BakedBlockLightType.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class BlockTessellator;
class ChunkSource;
class ChunkViewSource;
class IRenderChunkGarbage;
class MinecraftGameplayGraphicsResources;
class RenderChunkCoordinator;
class RenderChunkGeometry;
class RuntimeLocalLightingConfig;
class Tessellator;
struct BlockQueueEntry;
struct RenderChunkQuadInfo;
namespace ClientBlockPipeline { class BlockTessellatorPipeline; }
namespace ClientBlockPipeline { class Description; }
namespace ClientBlockPipeline { class MaterialRepository; }
namespace ClientBlockPipeline { class TessellatorContext; }
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
    ::ll::TypedStorage<4, 176, ::std::array<::RangeIndices, 22>>                            mRenderLayerRanges;
    ::ll::TypedStorage<8, 8, ::std::vector<::BlockQueueEntry>*>                             mQueues;
    ::ll::TypedStorage<8, 8, ::std::vector<::BlockQueueEntry>*>                             mSimpleOpaqueBlockQueue;
    ::ll::TypedStorage<8, 176, uint64[22]>                                                  mQueueIndexCounts;
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
    ::ll::TypedStorage<1, 1, bool>                                    mTextureShiftsEnabled;
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
    MCAPI RenderChunkBuilder(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::WeakRef<::RenderChunkCoordinator>                                 coordinator
    );

    MCAPI RenderChunkBuilder(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::std::weak_ptr<::IRenderChunkGarbage>                              garbage
    );

    MCAPI RenderChunkBuilder(
        ::MinecraftGameplayGraphicsResources&      minecraftGameplayGraphicsResources,
        ::ClientBlockPipeline::TessellatorContext& pipelineTessellatorContext,
        ::ChunkSource&                             mainSource,
        ::WeakRef<::RenderChunkCoordinator>        coordinator
    );

    MCAPI void build(
        ::RenderChunkGeometry&                                     renderChunkGeometry,
        bool                                                       transparentLeaves,
        ::BakedBlockLightType                                      lightingType,
        bool                                                       forExport,
        ::mce::framebuilder::FrameLightingModelCapabilities const& lightingModelCapabilities
    );

    MCAPI ~RenderChunkBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::WeakRef<::RenderChunkCoordinator>                                 coordinator
    );

    MCAPI void* $ctor(
        ::std::shared_ptr<::ClientBlockPipeline::MaterialRepository> const& materialRepository,
        ::ChunkSource&                                                      mainSource,
        ::Tessellator&                                                      tessellator,
        ::std::weak_ptr<::IRenderChunkGarbage>                              garbage
    );

    MCAPI void* $ctor(
        ::MinecraftGameplayGraphicsResources&      minecraftGameplayGraphicsResources,
        ::ClientBlockPipeline::TessellatorContext& pipelineTessellatorContext,
        ::ChunkSource&                             mainSource,
        ::WeakRef<::RenderChunkCoordinator>        coordinator
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
