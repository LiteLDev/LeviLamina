#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet {

class RtcThreadManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb04ae0;
    ::ll::UntypedStorage<8, 8>  mUnk8b9d08;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcThreadManager& operator=(RtcThreadManager const&);
    RtcThreadManager(RtcThreadManager const&);
    RtcThreadManager();
};

} // namespace NetherNet
