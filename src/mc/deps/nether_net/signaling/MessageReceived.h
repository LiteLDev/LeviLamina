#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk940828;
    ::ll::UntypedStorage<8, 32> mUnka95625;
    ::ll::UntypedStorage<8, 32> mUnk698719;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageReceived& operator=(MessageReceived const&);
    MessageReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MessageReceived(::NetherNet::SignalingEvents::MessageReceived const&);

    MCNAPI ~MessageReceived();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NetherNet::SignalingEvents::MessageReceived const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
