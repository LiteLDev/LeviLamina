#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct MessageDelivered {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk63b3ea;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageDelivered& operator=(MessageDelivered const&);
    MessageDelivered(MessageDelivered const&);
    MessageDelivered();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageDelivered();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
