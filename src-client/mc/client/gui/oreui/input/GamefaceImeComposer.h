#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

class GamefaceImeComposer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mComposition;
    ::ll::TypedStorage<4, 4, int>            mStartPosition;
    ::ll::TypedStorage<4, 4, int>            mMaxLength;
    ::ll::TypedStorage<4, 4, int>            mPositionOffset;
    // NOLINTEND
};

} // namespace OreUI
