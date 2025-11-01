#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace History {

struct NonPlayerComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkb77e40;
    ::ll::UntypedStorage<8, 56> mUnke31458;
    // NOLINTEND

public:
    // prevent constructor by default
    NonPlayerComponents& operator=(NonPlayerComponents const&);
    NonPlayerComponents(NonPlayerComponents const&);
    NonPlayerComponents();

};

}
