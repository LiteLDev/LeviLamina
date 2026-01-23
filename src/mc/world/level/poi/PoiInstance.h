#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct PoiInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkccca34;
    ::ll::UntypedStorage<8, 8>  mUnkd79750;
    ::ll::UntypedStorage<1, 1>  mUnkbc4185;
    // NOLINTEND

public:
    // prevent constructor by default
    PoiInstance& operator=(PoiInstance const&);
    PoiInstance(PoiInstance const&);
    PoiInstance();
};

} // namespace Poi
