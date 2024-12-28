#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkControlUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk208d94;
    ::ll::UntypedStorage<8, 40> mUnk295a0a;
    ::ll::UntypedStorage<8, 24> mUnkd83f86;
    ::ll::UntypedStorage<8, 80> mUnk8ca302;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkControlUpdate& operator=(NetworkControlUpdate const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkControlUpdate();

    MCAPI NetworkControlUpdate(::webrtc::NetworkControlUpdate const&);

    MCAPI ~NetworkControlUpdate();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::NetworkControlUpdate const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
