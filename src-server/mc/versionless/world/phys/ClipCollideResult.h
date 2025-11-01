#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClipCollideResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6f08d3;
    ::ll::UntypedStorage<4, 12> mUnk277fe7;
    ::ll::UntypedStorage<4, 12> mUnk2fc124;
    ::ll::UntypedStorage<4, 4> mUnk66f4c5;
    // NOLINTEND

public:
    // prevent constructor by default
    ClipCollideResult& operator=(ClipCollideResult const&);
    ClipCollideResult(ClipCollideResult const&);
    ClipCollideResult();

};
