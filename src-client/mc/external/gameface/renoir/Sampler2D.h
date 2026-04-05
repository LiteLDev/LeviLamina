#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

struct Sampler2D {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk95b8ce;
    ::ll::UntypedStorage<4, 4> mUnk66373b;
    ::ll::UntypedStorage<4, 4> mUnk28b64e;
    // NOLINTEND

public:
    // prevent constructor by default
    Sampler2D& operator=(Sampler2D const&);
    Sampler2D(Sampler2D const&);
    Sampler2D();
};

} // namespace renoir
