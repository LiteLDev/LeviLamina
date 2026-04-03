#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CatmullRomSpline {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk2e0798;
    ::ll::UntypedStorage<8, 24> mUnkc28a35;
    ::ll::UntypedStorage<1, 1>  mUnk57b1b4;
    // NOLINTEND

public:
    // prevent constructor by default
    CatmullRomSpline& operator=(CatmullRomSpline const&);
    CatmullRomSpline(CatmullRomSpline const&);
    CatmullRomSpline();
};
