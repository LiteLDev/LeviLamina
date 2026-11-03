#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
struct RenderChunkLayerGroupIndexData;
struct RenderChunkLayerGroupVertexData;
namespace mce { class Mesh; }
// clang-format on

struct ChunkRenderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::glm::ivec3> mPosition;
    ::ll::TypedStorage<8, 8, double>        mReadyTimeDiff;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::RenderChunkDirectIndexData>,
            ::std::shared_ptr<::RenderChunkLayerGroupIndexData>> const>
        mChunkIndices;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::Mesh>,
            ::std::shared_ptr<::RenderChunkDirectVertexData>,
            ::std::shared_ptr<::RenderChunkLayerGroupVertexData>> const>
        mChunkMesh;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ChunkRenderData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
