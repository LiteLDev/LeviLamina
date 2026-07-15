#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class CompoundMeasurement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkaceeb0;
    ::ll::UntypedStorage<8, 32> mUnk5e940f;
    ::ll::UntypedStorage<8, 48> mUnk4585e8;
    ::ll::UntypedStorage<1, 1>  mUnk5f6365;
    ::ll::UntypedStorage<8, 8>  mUnkc6ce7b;
    ::ll::UntypedStorage<8, 8>  mUnkaeec3d;
    ::ll::UntypedStorage<8, 8>  mUnk97f62b;
    // NOLINTEND

public:
    // prevent constructor by default
    CompoundMeasurement& operator=(CompoundMeasurement const&);
    CompoundMeasurement(CompoundMeasurement const&);
    CompoundMeasurement();
};

} // namespace Social::Events
