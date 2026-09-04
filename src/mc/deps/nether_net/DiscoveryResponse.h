#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct DiscoveryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk642b57;
    ::ll::UntypedStorage<8, 8>  mUnk438db8;
    ::ll::UntypedStorage<8, 24> mUnkcef483;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryResponse& operator=(DiscoveryResponse const&);
    DiscoveryResponse(DiscoveryResponse const&);
    DiscoveryResponse();
};

} // namespace NetherNet::LanEvents
