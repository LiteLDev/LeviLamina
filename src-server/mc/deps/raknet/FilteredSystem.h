#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct FilteredSystem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkedf821;
    ::ll::UntypedStorage<4, 4> mUnkee4d85;
    // NOLINTEND

public:
    // prevent constructor by default
    FilteredSystem& operator=(FilteredSystem const&);
    FilteredSystem(FilteredSystem const&);
    FilteredSystem();
};

} // namespace RakNet
