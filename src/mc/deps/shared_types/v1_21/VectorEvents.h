#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct VectorEvents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6ffd31;
    // NOLINTEND

public:
    // prevent constructor by default
    VectorEvents& operator=(VectorEvents const&);
    VectorEvents(VectorEvents const&);
    VectorEvents();
};

} // namespace SharedTypes::v1_21
