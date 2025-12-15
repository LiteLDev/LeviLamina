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
    // prevent constructor by default
    MeasureResult();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MeasureResult(
        ::std::string      formattedText,
        ::glm::vec2 const& size,
        ::std::vector<int> caretOffsets,
        float              caretHeightOffset,
        bool               usingEllipses,
        float              lineHeight
    );

    MCAPI ~MeasureResult();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::string      formattedText,
        ::glm::vec2 const& size,
        ::std::vector<int> caretOffsets,
        float              caretHeightOffset,
        bool               usingEllipses,
        float              lineHeight
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
