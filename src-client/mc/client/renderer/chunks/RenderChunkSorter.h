#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/buffer_span.h"
#include "mc/deps/minecraft_renderer/game/RangeIndices.h"
#include "mc/deps/minecraft_renderer/game/TerrainLayerLOD.h"

// auto generated forward declare list
// clang-format off
class FaceSortingMetaDataBase;
class RenderChunkSorterSharedInfo;
class SubChunkPos;
struct TerrainLayer;
// clang-format on

class RenderChunkSorter {
public:
    // RenderChunkSorter inner types declare
    // clang-format off
    struct FaceInfo;
    // clang-format on

    // RenderChunkSorter inner types define
    struct FaceInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> distance;
        uint                            index   : 31;
        uint                            reverse : 1;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uchar>>                             mRawIndexBytes;
    ::ll::TypedStorage<4, 176, ::std::array<::RangeIndices, 22>>                mSortedLayers;
    ::ll::TypedStorage<4, 176, ::std::array<::RangeIndices, 22>>                mLayers;
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderChunkSorter::FaceInfo>>     mFaceInfo;
    ::ll::TypedStorage<4, 4, uint>                                              mIndexSize;
    ::ll::TypedStorage<4, 12, ::glm::ivec3>                                     mCameraDelta;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkSorterSharedInfo>> mSharedInfo;
    ::ll::TypedStorage<1, 1, bool>                                              mForceDisableCulling;
    // NOLINTEND

public:
    // prevent constructor by default
    RenderChunkSorter();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RenderChunkSorter();

    virtual void sortAndCullFaces(
        ::SubChunkPos const&                                        renderChunkPos,
        ::buffer_span<::std::shared_ptr<::FaceSortingMetaDataBase>> faceSortingData
    );
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RenderChunkSorter(::std::shared_ptr<::RenderChunkSorterSharedInfo> sharedInfo);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::RangeIndices getRangeIndices(
        ::buffer_span<::RangeIndices> renderLayerRange,
        ::TerrainLayer const&         terrainLayer,
        ::TerrainLayerLOD             terrainLayerLOD,
        bool                          mergeBlendInOpaqueLayer
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::RenderChunkSorterSharedInfo> sharedInfo);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $sortAndCullFaces(
        ::SubChunkPos const&                                        renderChunkPos,
        ::buffer_span<::std::shared_ptr<::FaceSortingMetaDataBase>> faceSortingData
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
