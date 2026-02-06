#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct RenderChunkDirectIndexData;
struct RenderChunkDirectVertexData;
namespace mce { class IndexBufferContainer; }
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
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>> const>
        mChunkIndices;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::Mesh>,
            ::std::shared_ptr<::RenderChunkDirectVertexData>> const>
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
