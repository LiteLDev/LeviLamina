#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkControllerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk2ff938;
    ::ll::UntypedStorage<8, 56> mUnk2c7d82;
    ::ll::UntypedStorage<8, 80> mUnk25c094;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkControllerConfig& operator=(NetworkControllerConfig const&);
    NetworkControllerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkControllerConfig(::webrtc::NetworkControllerConfig const&);

    MCNAPI ~NetworkControllerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::NetworkControllerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
