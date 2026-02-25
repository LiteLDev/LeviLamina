#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct ViewDebugSettings {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mContinuousRepaint;
    ::ll::TypedStorage<1, 1, bool> mShowPaintRects;
    ::ll::TypedStorage<1, 1, bool> mShowElementAABBs;
    ::ll::TypedStorage<1, 1, bool> mEmulateTouchEvents;
    // NOLINTEND
};

} // namespace OreUI
