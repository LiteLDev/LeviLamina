#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MeasureResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>      mFormattedText;
    ::ll::TypedStorage<4, 8, ::glm::vec2>         mSize;
    ::ll::TypedStorage<8, 24, ::std::vector<int>> mCaretOffsets;
    ::ll::TypedStorage<4, 4, float>               mCaretHeightOffset;
    ::ll::TypedStorage<4, 4, float>               mLineHeight;
    ::ll::TypedStorage<1, 1, bool>                mUsingEllipses;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MeasureResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
