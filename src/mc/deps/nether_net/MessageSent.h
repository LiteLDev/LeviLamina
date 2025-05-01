#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::LanEvents {

struct MessageSent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk9b2f6f;
    ::ll::UntypedStorage<8, 8>  mUnk54701c;
    ::ll::UntypedStorage<8, 32> mUnk4609b4;
    ::ll::UntypedStorage<8, 32> mUnkc691b7;
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
