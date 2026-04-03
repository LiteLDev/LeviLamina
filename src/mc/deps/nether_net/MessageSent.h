#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct MessageSent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9b2f6f;
    ::ll::UntypedStorage<8, 24> mUnk54701c;
    ::ll::UntypedStorage<8, 32> mUnk54897a;
    ::ll::UntypedStorage<8, 24> mUnk60e741;
    // NOLINTEND

public:
    // prevent constructor by default
    MessageSent& operator=(MessageSent const&);
    MessageSent(MessageSent const&);
    MessageSent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MessageSent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace NetherNet::LanEvents
