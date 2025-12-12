#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

class BasicContextOwner {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkb67527;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicContextOwner& operator=(BasicContextOwner const&);
    BasicContextOwner(BasicContextOwner const&);
    BasicContextOwner();
};

} // namespace cereal
