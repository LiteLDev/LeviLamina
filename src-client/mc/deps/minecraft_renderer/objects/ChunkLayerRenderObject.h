#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class MaterialPtr; }
// clang-format on

struct ChunkLayerRenderObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64>                    mChunkIdx;
    ::ll::TypedStorage<8, 8, ::mce::MaterialPtr const*> mMaterial;
    ::ll::TypedStorage<4, 4, uint>                      mIndicesStart;
    ::ll::TypedStorage<4, 4, uint>                      mIndicesCount;
    ::ll::TypedStorage<4, 4, uint>                      mUnsortedIndicesStart;
    ::ll::TypedStorage<4, 4, uint>                      mUnsortedIndicesCount;
    ::ll::TypedStorage<4, 4, uint>                      mVisibleCameraMask;
    ::ll::TypedStorage<1, 1, bool>                      mShouldFallBackToUnsorted;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLayerRenderObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ChunkLayerRenderObject(
        ::mce::MaterialPtr const& material,
        uint64                    index,
        uint                      indicesStart,
        uint                      indicesCount,
        uint                      unsortedIndicesStart,
        uint                      unsortedIndicesCount,
        uint                      visibleCameraMask,
        bool                      unsortedIndices
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::mce::MaterialPtr const& material,
        uint64                    index,
        uint                      indicesStart,
        uint                      indicesCount,
        uint                      unsortedIndicesStart,
        uint                      unsortedIndicesCount,
        uint                      visibleCameraMask,
        bool                      unsortedIndices
    );
    // NOLINTEND
};
