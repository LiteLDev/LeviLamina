#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct MessageReceived {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk8571db;
    ::ll::UntypedStorage<8, 24> mUnk3bf291;
    ::ll::UntypedStorage<8, 32> mUnkb1a7e4;
    ::ll::UntypedStorage<8, 24> mUnkd18a2d;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageReceived& operator=(MessageReceived const&);
    MessageReceived(MessageReceived const&);
    MessageReceived();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MessageReceived();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
