#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkControllerConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk2c7d82;
    ::ll::UntypedStorage<8, 80> mUnk25c094;
    ::ll::UntypedStorage<8, 8>  mUnkd89e49;
    ::ll::UntypedStorage<8, 8>  mUnk14218d;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkControllerConfig& operator=(NetworkControllerConfig const&);
    NetworkControllerConfig();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkControllerConfig(::webrtc::NetworkControllerConfig const&);

    MCAPI ~NetworkControllerConfig();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::NetworkControllerConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
