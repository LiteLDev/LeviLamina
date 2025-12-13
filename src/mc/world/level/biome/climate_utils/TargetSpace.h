#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct TargetSpace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk67e5cc;
    // NOLINTEND

public:
    // prevent constructor by default
    TargetSpace& operator=(TargetSpace const&);
    TargetSpace(TargetSpace const&);
    TargetSpace();
};

} // namespace ClimateUtils
