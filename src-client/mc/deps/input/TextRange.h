#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mStartCaretPos;
    ::ll::TypedStorage<4, 4, int> mEndCaretPos;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::pair<int, int> getWordRange(::std::string const& textLine, int caret);
    // NOLINTEND
};
