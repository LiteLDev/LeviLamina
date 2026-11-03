#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/minecraft_renderer/objects/ChunkLayerRenderObject.h"
#include "mc/deps/minecraft_renderer/objects/ChunkRenderData.h"
#include "mc/deps/minecraft_renderer/resources/ServerTexture.h"

// auto generated forward declare list
// clang-format off
struct ChunkLayerRenderObject;
struct ChunkRenderData;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct RenderChunkLayerGroupIndexData;
struct RenderChunkLayerGroupVertexData;
namespace mce { class Mesh; }
namespace mce { struct ServerTexture; }
// clang-format on

struct ChunkRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::ServerTexture>>              mTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkRenderData>>                 mChunkQueue;
    ::ll::TypedStorage<8, 1224, ::std::vector<::ChunkLayerRenderObject>[3][17]> mTerrainLayerChunkQueue;
    ::ll::TypedStorage<4, 4, uint>                                              mMaximumChunkVertexCount;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRenderObjectCollection& operator=(ChunkRenderObjectCollection const&);
    ChunkRenderObjectCollection(ChunkRenderObjectCollection const&);
    ChunkRenderObjectCollection();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkRenderObjectCollection(::ChunkRenderObjectCollection&& other);

    MCNAPI ChunkRenderObjectCollection(uint64 lastQueueSize, uint64 (*const lastLayerQueueSizes)[17]);

    MCNAPI uint64 addToChunkQueue(
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::RenderChunkDirectIndexData>,
            ::std::shared_ptr<::RenderChunkLayerGroupIndexData>> const& chunkIndices,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::Mesh>,
            ::std::shared_ptr<::RenderChunkDirectVertexData>,
            ::std::shared_ptr<::RenderChunkLayerGroupVertexData>> const& chunkMesh,
        ::glm::ivec3 const&                                              chunkPos,
        double                                                           timeDiff
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ChunkRenderObjectCollection&& other);

    MCNAPI void* $ctor(uint64 lastQueueSize, uint64 (*const lastLayerQueueSizes)[17]);
    // NOLINTEND
};
