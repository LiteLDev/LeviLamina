#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct DiscoveryResponse {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk642b57;
    ::ll::UntypedStorage<8, 8>  mUnk8109b9;
    ::ll::UntypedStorage<8, 24> mUnk936b10;
    // NOLINTEND

public:
    // prevent constructor by default
    DiscoveryResponse& operator=(DiscoveryResponse const&);
    DiscoveryResponse(DiscoveryResponse const&);
    DiscoveryResponse();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DiscoveryResponse();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
