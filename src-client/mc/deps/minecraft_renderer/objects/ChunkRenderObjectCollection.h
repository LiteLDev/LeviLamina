#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ChunkLayerRenderObject;
struct ChunkRenderData;
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
namespace mce { class IndexBufferContainer; }
namespace mce { class Mesh; }
namespace mce { struct ServerTexture; }
// clang-format on

struct ChunkRenderObjectCollection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::mce::ServerTexture>>              mTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::ChunkRenderData>>                 mChunkQueue;
    ::ll::TypedStorage<8, 1368, ::std::vector<::ChunkLayerRenderObject>[3][19]> mTerrainLayerChunkQueue;
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
    MCAPI ChunkRenderObjectCollection(::ChunkRenderObjectCollection&& other);

    MCAPI ChunkRenderObjectCollection(uint64 lastQueueSize, uint64 const* lastLayerQueueSizes[19]);

    MCAPI uint64 addToChunkQueue(
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>> const& chunkIndices,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::Mesh>,
            ::std::shared_ptr<::RenderChunkDirectVertexData>> const& chunkMesh,
        ::glm::ivec3 const&                                          chunkPos,
        double                                                       timeDiff
    );

    MCAPI ~ChunkRenderObjectCollection();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ChunkRenderObjectCollection&& other);

    MCAPI void* $ctor(uint64 lastQueueSize, uint64 const* lastLayerQueueSizes[19]);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
