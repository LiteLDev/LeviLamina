#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/world/level/BlockPos.h"

struct BuildMatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>        mMatched;
    ::ll::TypedStorage<1, 1, uchar>       mForward;
    ::ll::TypedStorage<1, 1, uchar>       mUp;
    ::ll::TypedStorage<4, 4, int>         mNumPatterns;
    ::ll::TypedStorage<4, 4, int>         mPatternSize;
    ::ll::TypedStorage<4, 4, int>         mSubPatternIndex;
    ::ll::TypedStorage<4, 4, int>         mRowIndex;
    ::ll::TypedStorage<4, 12, ::BlockPos> mPattern;
    ::ll::TypedStorage<4, 12, ::Vec3>     mObjectPos;
    // NOLINTEND
};
