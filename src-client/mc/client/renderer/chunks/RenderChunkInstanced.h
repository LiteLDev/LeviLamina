#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/MPMCQueue.h"

// auto generated forward declare list
// clang-format off
class RenderChunkGeometry;
class RenderChunkShared;
class RenderChunkSorter;
class Vec3;
struct RangeIndices;
struct RenderChunkDirectIndexData;
namespace mce { class IndexBufferContainer; }
namespace mce { struct BufferResourceService; }
// clang-format on

class RenderChunkInstanced {
public:
    // RenderChunkInstanced inner types define
    enum class SortState : uchar {
        Sorting = 0,
        Idle    = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                            mDistanceFromCamera2;
    ::ll::TypedStorage<4, 4, float>                                            mChunkBuildPriority;
    bool                                                                       mCanRender                      : 1;
    bool                                                                       mCameraMovedEnough              : 1;
    bool                                                                       mFallbackToUnsorted             : 1;
    bool                                                                       mNewSortData                    : 1;
    bool                                                                       mCurrentGeometryHasSortedLayers : 1;
    bool                                                                       mEmpty                          : 1;
    ::ll::TypedStorage<1, 1, ::std::atomic<::RenderChunkInstanced::SortState>> mSortState;
    ::ll::TypedStorage<1, 1, uchar>                                            mLastSortRenderChunkGeometryVersion;
    ::ll::TypedStorage<4, 4, float>                                            mAverageBrightness;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkShared>>          mRenderChunkShared;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkGeometry>>        mCurrentRenderChunkGeometry;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>>>
                                                                                  mCurrentIndices;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::array<::RangeIndices, 22>>> mCurrentIndexRanges;
    ::ll::TypedStorage<8, 8, uint64>                                              mIndexBufferSizeEstimate;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkGeometry>>           mSortingRenderChunkGeometry;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkGeometry>>           mNextRenderChunkGeometry;
    ::ll::TypedStorage<
        8,
        24,
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>>>
                                                                                  mNextIndices;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::std::array<::RangeIndices, 22>>> mNextIndexRanges;
    ::ll::TypedStorage<4, 12, ::glm::ivec3>                                       mLastSortCameraDelta;
    ::ll::TypedStorage<4, 12, ::glm::ivec3>                                       mCurrentIndexBufferCameraDelta;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point>             mGuaranteedPromoteTime;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::mce::BufferResourceService>>      mBufferResourceService;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RenderChunkInstanced();

    MCAPI void _startSortCommon(::RenderChunkSorter& sorter);

    MCAPI void clearMeshData();

    MCAPI void endSort(::RenderChunkSorter& sorter, ::mce::BufferResourceService& bufferResourceService);

    MCAPI void onOrthographicCameraMoved(::Vec3 const& currentCameraForward);

    MCAPI void onPerspectiveCameraMoved(::Vec3 const& currentCameraPos, bool forceAccurateSort);

    MCAPI void promoteSortedGeometry();

    MCAPI void setRenderChunkShared(::std::shared_ptr<::RenderChunkShared> renderChunkShared);

    MCAPI ~RenderChunkInstanced();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _resetIndices(
        ::std::variant<
            ::std::monostate,
            ::std::shared_ptr<::mce::IndexBufferContainer>,
            ::std::shared_ptr<::RenderChunkDirectIndexData>>& indices
    );

    MCAPI static void garbageCollectIndexBuffers();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::MPMCQueue<::std::variant<
        ::std::monostate,
        ::std::shared_ptr<::mce::IndexBufferContainer>,
        ::std::shared_ptr<::RenderChunkDirectIndexData>>>&
    mIndexBufferGarbageList();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
