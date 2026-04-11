#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/util/Bounds.h"
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/Tick.h"

// auto generated forward declare list
// clang-format off
class FaceSortingMetaDataBase;
class IRenderChunkGarbage;
class MinecraftGraphics;
class RenderChunkBuilder;
class RenderChunkSorter;
class TerrainTextures;
class TextureAtlas;
struct BlockQueueEntry;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct RenderChunkQuadInfo;
namespace dragon { struct RenderMetadata; }
namespace mce { class IndexBufferContainer; }
namespace mce { class Mesh; }
namespace mce { class TextureGroup; }
namespace mce { struct BufferResourceService; }
namespace mce { struct ServerTexture; }
// clang-format on

class RenderChunkGeometry {
public:
    // RenderChunkGeometry inner types define
    enum class Bit : uchar {
        CanRender                    = 0,
        Built                        = 1,
        RayTracingModeOnAtBuildStart = 2,
        RayTracingModeOnAtBuildEnd   = 3,
        HasSortedLayers              = 4,
        ImmediateChange              = 5,
        BlendCanRenderAsOpaque       = 6,
        Count                        = 7,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Tick> mLastChangeTick;
    ::ll::TypedStorage<8, 8, ::Tick> mFirstChangeTick;
    ::ll::TypedStorage<
        8,
        24,
        ::std::
            variant<::std::monostate, ::std::shared_ptr<::mce::Mesh>, ::std::shared_ptr<::RenderChunkDirectVertexData>>>
                                                                                              mMeshData;
    ::ll::TypedStorage<4, 4, ::std::bitset<7>>                                                mFlags;
    ::ll::TypedStorage<4, 4, float>                                                           mReadyTime;
    ::ll::TypedStorage<4, 4, int>                                                             mBuildIterationCount;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                     mPosition;
    ::ll::TypedStorage<4, 12, ::BlockPos>                                                     mCenter;
    ::ll::TypedStorage<4, 48, ::Bounds>                                                       mDataBounds;
    ::ll::TypedStorage<4, 192, ::std::array<::RangeIndices, 24>>                              mUnsortedIndexRange;
    ::ll::TypedStorage<4, 4, ::EntityId>                                                      mEntityId;
    ::ll::TypedStorage<8, 112, ::std::array<::std::shared_ptr<::FaceSortingMetaDataBase>, 7>> mFaceSortingMetaData;
    ::ll::TypedStorage<4, 176, ::std::array<::RangeIndices, 22>>                              mRenderLayerIndexRanges;
    ::ll::TypedStorage<4, 4, float>                                                           mAverageSkyLight;
    ::ll::TypedStorage<4, 4, ::std::bitset<6>>                                                mInterlockBitField;
    ::ll::TypedStorage<1, 6, ::std::array<uchar, 6>>                  mInterlockNeighborVersionNumbers;
    ::ll::TypedStorage<1, 1, uchar>                                   mBuildVersionNumber;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockQueueEntry>>       mPointLightCandidates;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::IRenderChunkGarbage>> mRenderChunkGarbage;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkGeometry();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderChunkGeometry(
        ::BlockPos                             p,
        bool                                   immediateChangeRequested,
        int                                    buildIterationCount,
        double                                 overrideReadyTime,
        uchar                                  versionNum,
        ::std::weak_ptr<::IRenderChunkGarbage> garbage,
        ::EntityId                             entityId
    );

    MCAPI void _convertFaceMetaDataToFaceSortingMetaData(
        ::std::array<::std::vector<::RenderChunkQuadInfo>, 7> const& faceMetadata,
        bool                                                         hasSortedLayers
    );

    MCAPI uint64 endFaceSortOnly(
        ::mce::BufferResourceService& bufferResourceService,
        ::RenderChunkSorter&          sorter,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>>& nextIndices,
        ::std::array<::RangeIndices, 24>&                     sortedIndexRange,
        ::dragon::RenderMetadata const&                       renderMetadata
    );

    MCAPI void endRebuild(
        ::RenderChunkBuilder&           builder,
        ::mce::BufferResourceService&   bufferResourceService,
        bool                            isBuilding,
        ::dragon::RenderMetadata const& renderMetadata,
        bool                            useSplitStream
    );

    MCAPI bool isEmpty() const;

    MCAPI void reset();

    MCAPI ~RenderChunkGeometry();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::mce::ServerTexture> createTerrainTextureList(::SubClientId player);

    MCAPI static void initTextures(
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> const&  minecraftGraphics,
        ::std::shared_ptr<::mce::TextureGroup>                     textureGroup,
        ::Bedrock::NotNullNonOwnerPtr<::TextureAtlas const> const& atlas
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::TerrainTextures>& mTerrainTextures();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::BlockPos                             p,
        bool                                   immediateChangeRequested,
        int                                    buildIterationCount,
        double                                 overrideReadyTime,
        uchar                                  versionNum,
        ::std::weak_ptr<::IRenderChunkGarbage> garbage,
        ::EntityId                             entityId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
