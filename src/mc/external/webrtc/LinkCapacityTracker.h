#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class LinkCapacityTracker {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk374897;
    ::ll::UntypedStorage<8, 8>  mUnk288b2e;
    ::ll::UntypedStorage<8, 8>  mUnked489c;
    ::ll::UntypedStorage<8, 8>  mUnkab965b;
    // NOLINTEND

public:
    // prevent constructor by default
    LinkCapacityTracker& operator=(LinkCapacityTracker const&);
    LinkCapacityTracker(LinkCapacityTracker const&);
    LinkCapacityTracker();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LinkCapacityTracker();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
