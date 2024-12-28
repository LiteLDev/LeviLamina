#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PixelCalc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaea8db;
    ::ll::UntypedStorage<4, 4> mUnk4bda50;
    // NOLINTEND

public:
    // prevent constructor by default
    PixelCalc& operator=(PixelCalc const&);
    PixelCalc(PixelCalc const&);
    PixelCalc();
};
