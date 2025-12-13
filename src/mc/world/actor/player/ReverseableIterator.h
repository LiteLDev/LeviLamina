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
        ::ll::UntypedStorage<4, 4> mUnk16bfb3;
        ::ll::UntypedStorage<1, 1> mUnk47ba99;
        // NOLINTEND

    public:
        // prevent constructor by default
        Iterator& operator=(Iterator const&);
        Iterator(Iterator const&);
        Iterator();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkd414e2;
    ::ll::UntypedStorage<4, 4> mUnk417f60;
    ::ll::UntypedStorage<1, 1> mUnkb6dff4;
    // NOLINTEND

public:
    // prevent constructor by default
    ReverseableIterator& operator=(ReverseableIterator const&);
    ReverseableIterator(ReverseableIterator const&);
    ReverseableIterator();
};
