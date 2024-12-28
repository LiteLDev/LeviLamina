#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::SignalingEvents {

struct TurnAuthReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnkdd8891;
    ::ll::UntypedStorage<8, 24> mUnk49428f;
    // NOLINTEND

public:
    // prevent constructor by default
    TurnAuthReceived& operator=(TurnAuthReceived const&);
    TurnAuthReceived(TurnAuthReceived const&);
    TurnAuthReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TurnAuthReceived();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::SignalingEvents
