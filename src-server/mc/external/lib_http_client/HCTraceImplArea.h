#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HCTraceImplArea {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7af279;
    ::ll::UntypedStorage<4, 4> mUnk50c68b;
    // NOLINTEND

public:
    // prevent constructor by default
    HCTraceImplArea& operator=(HCTraceImplArea const&);
    HCTraceImplArea(HCTraceImplArea const&);
    HCTraceImplArea();
};
