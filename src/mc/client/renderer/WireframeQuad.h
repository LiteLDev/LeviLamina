#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WireframeQuad {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 48> mUnkd06193;
    ::ll::UntypedStorage<4, 4>  mUnk2fbf21;
    // NOLINTEND

public:
    // prevent constructor by default
    WireframeQuad& operator=(WireframeQuad const&);
    WireframeQuad(WireframeQuad const&);
    WireframeQuad();
};
