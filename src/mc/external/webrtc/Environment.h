#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class Environment {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka6946a;
    ::ll::UntypedStorage<8, 8> mUnke4be1f;
    ::ll::UntypedStorage<8, 8> mUnkf8547f;
    ::ll::UntypedStorage<8, 8> mUnkaef482;
    ::ll::UntypedStorage<8, 8> mUnkec98dc;
    // NOLINTEND

public:
    // prevent constructor by default
    Environment& operator=(Environment const&);
    Environment(Environment const&);
    Environment();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Environment();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
