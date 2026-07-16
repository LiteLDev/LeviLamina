#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class UICustomRenderer;
struct BatchClippingState;
struct BatchKey;
struct RenderControlMetadata;
struct TextureState;
// clang-format on

class ScreenRenderBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::RenderControlMetadata>>       mRenderControls;
    ::ll::TypedStorage<8, 24, ::std::vector<::ComponentRenderBatch>>        mRenderBatches;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::TextureState>> mTextureStates;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::BatchKey createBatchKey(
        ::UICustomRenderer const&   renderer,
        int                         pass,
        float                       alpha,
        int                         depth,
        ::BatchClippingState const& clip
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::pair<int, int>>& GRID_DIMENSIONS();
    // NOLINTEND
};
