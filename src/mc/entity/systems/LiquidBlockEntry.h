#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LiquidBlockEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk3d0108;
    ::ll::UntypedStorage<4, 12> mUnkb40470;
    ::ll::UntypedStorage<1, 1>  mUnk5f9718;
    // NOLINTEND

public:
    // prevent constructor by default
    LiquidBlockEntry& operator=(LiquidBlockEntry const&);
    LiquidBlockEntry(LiquidBlockEntry const&);
    LiquidBlockEntry();
};
