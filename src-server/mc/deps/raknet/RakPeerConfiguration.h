#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct RakPeerConfiguration {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkbd8bc4;
    // NOLINTEND

public:
    // prevent constructor by default
    RakPeerConfiguration& operator=(RakPeerConfiguration const&);
    RakPeerConfiguration(RakPeerConfiguration const&);
    RakPeerConfiguration();

};

}
