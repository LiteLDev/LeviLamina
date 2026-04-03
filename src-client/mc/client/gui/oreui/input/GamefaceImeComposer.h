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
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::string replaceRange(::std::string const& replacement, int from, int to);
    // NOLINTEND
};

} // namespace OreUI
