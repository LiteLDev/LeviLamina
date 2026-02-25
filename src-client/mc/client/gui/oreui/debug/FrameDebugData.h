#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct FrameDebugData {
public:
    // FrameDebugData inner types declare
    // clang-format off
    struct DrawcallDebugData;
    // clang-format on

    // FrameDebugData inner types define
    struct DrawcallDebugData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int> mLogicalShader;
        ::ll::TypedStorage<4, 4, int> mShaderType;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                                                        mDrawCount;
    ::ll::TypedStorage<4, 4, int>                                                        mMaxDraws;
    ::ll::TypedStorage<1, 1, bool>                                                       mDebugDraws;
    ::ll::TypedStorage<1, 1, bool>                                                       mLimitDraws;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FrameDebugData::DrawcallDebugData>> mDrawcallDebugData;
    // NOLINTEND
};

} // namespace OreUI
