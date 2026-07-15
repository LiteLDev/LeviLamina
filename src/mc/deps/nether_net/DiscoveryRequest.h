#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct DiscoveryRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkcadee7;
    ::ll::UntypedStorage<8, 8>  mUnka7e97e;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryRequest& operator=(DiscoveryRequest const&);
    DiscoveryRequest(DiscoveryRequest const&);
    DiscoveryRequest();
};

} // namespace NetherNet::LanEvents
