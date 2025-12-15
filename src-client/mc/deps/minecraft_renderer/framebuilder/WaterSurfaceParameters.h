#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace mce::framebuilder {

struct WaterSurfaceParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk7601df;
    ::ll::UntypedStorage<4, 4> mUnk3be3a1;
    ::ll::UntypedStorage<4, 4> mUnkec5542;
    ::ll::UntypedStorage<4, 4> mUnk6146a7;
    ::ll::UntypedStorage<4, 4> mUnk6640e7;
    ::ll::UntypedStorage<4, 4> mUnk877384;
    ::ll::UntypedStorage<4, 4> mUnk14e086;
    ::ll::UntypedStorage<4, 4> mUnkc3f070;
    ::ll::UntypedStorage<4, 4> mUnk9641df;
    ::ll::UntypedStorage<4, 4> mUnkb4441d;
    ::ll::UntypedStorage<4, 4> mUnkba0146;
    // NOLINTEND

public:
    // prevent constructor by default
    WaterSurfaceParameters& operator=(WaterSurfaceParameters const&);
    WaterSurfaceParameters(WaterSurfaceParameters const&);
    WaterSurfaceParameters();
};

} // namespace mce::framebuilder
