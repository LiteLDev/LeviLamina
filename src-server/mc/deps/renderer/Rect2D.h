#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct Rect2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke1b6b5;
    ::ll::UntypedStorage<4, 4> mUnk942677;
    ::ll::UntypedStorage<4, 4> mUnk98d6c9;
    ::ll::UntypedStorage<4, 4> mUnk2e853f;
    ::ll::UntypedStorage<4, 4> mUnk990783;
    ::ll::UntypedStorage<4, 4> mUnkf59447;
    // NOLINTEND

public:
    // prevent constructor by default
    Rect2D& operator=(Rect2D const&);
    Rect2D(Rect2D const&);
    Rect2D();
};
