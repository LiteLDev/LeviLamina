#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/chunks/RenderChunkSorter.h"
#include "mc/world/level/BlockPos.h"

// auto generated forward declare list
// clang-format off
class RenderChunkBuilder;
class RenderChunkInstanced;
class RenderChunkSorterSharedInfo;
// clang-format on

class EditorVolumeHighlightRendererInstanceData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::RenderChunkBuilder>> mChunkBuilder;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::BlockPos, ::std::unique_ptr<::RenderChunkInstanced>>>
                                                                                mRenderChunkInstances;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::RenderChunkSorterSharedInfo>> mSharedSortInfo;
    ::ll::TypedStorage<8, 448, ::RenderChunkSorter>                             mChunkSorter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void reset();
    // NOLINTEND
};
