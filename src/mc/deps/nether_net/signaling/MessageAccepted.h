#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct MessageAccepted {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb211bf;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageAccepted& operator=(MessageAccepted const&);
    MessageAccepted(MessageAccepted const&);
    MessageAccepted();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MessageAccepted();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
