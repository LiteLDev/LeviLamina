#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21_10 {

struct DurabilityThreshold {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkee883e;
    ::ll::UntypedStorage<4, 4> mUnkaa685b;
    ::ll::UntypedStorage<4, 4> mUnkb9f3b8;
    // NOLINTEND

public:
    // prevent constructor by default
    DurabilityThreshold& operator=(DurabilityThreshold const&);
    DurabilityThreshold(DurabilityThreshold const&);
    DurabilityThreshold();
};

} // namespace SharedTypes::v1_21_10
