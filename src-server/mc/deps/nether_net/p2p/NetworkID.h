#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::P2P {

struct NetworkID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk9df456;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkID& operator=(NetworkID const&);
    NetworkID(NetworkID const&);
    NetworkID();

};

}
