#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackedGraphBars {
public:
    // StackedGraphBars inner types declare
    // clang-format off
    struct ColorKey;
    // clang-format on

    // StackedGraphBars inner types define
    struct ColorKey {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1>  mUnkb538f5;
        ::ll::UntypedStorage<8, 32> mUnk18e600;
        // NOLINTEND

    public:
        // prevent constructor by default
        ColorKey& operator=(ColorKey const&);
        ColorKey(ColorKey const&);
        ColorKey();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk1be662;
    ::ll::UntypedStorage<8, 24> mUnk32605d;
    ::ll::UntypedStorage<4, 4>  mUnk4e6cf1;
    ::ll::UntypedStorage<8, 32> mUnk8e50dc;
    ::ll::UntypedStorage<4, 4>  mUnk87a5cf;
    // NOLINTEND

public:
    // prevent constructor by default
    StackedGraphBars& operator=(StackedGraphBars const&);
    StackedGraphBars(StackedGraphBars const&);
    StackedGraphBars();
};
