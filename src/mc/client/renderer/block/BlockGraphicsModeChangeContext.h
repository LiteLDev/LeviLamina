#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockGraphicsModeChangeContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mFancyRendering;
    ::ll::TypedStorage<1, 1, bool> mTransparentLeaves;
    ::ll::TypedStorage<1, 1, bool> mFancyBubbles;
    ::ll::TypedStorage<1, 1, bool> mRayTracing;
    ::ll::TypedStorage<1, 1, bool> mDeferred;
    // NOLINTEND
};
