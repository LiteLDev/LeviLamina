#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReverseableIterator {
public:
    // ReverseableIterator inner types declare
    // clang-format off
    class Iterator;
    // clang-format on

    // ReverseableIterator inner types define
    class Iterator {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  mI;
        ::ll::TypedStorage<1, 1, bool> mReversed;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>  mStartValue;
    ::ll::TypedStorage<4, 4, int const>  mEndValue;
    ::ll::TypedStorage<1, 1, bool const> mReversed;
    // NOLINTEND
};
