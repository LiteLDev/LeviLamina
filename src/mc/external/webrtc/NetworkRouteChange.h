#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkRouteChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkf75962;
    ::ll::UntypedStorage<8, 56> mUnk46e4cb;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkRouteChange& operator=(NetworkRouteChange const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetworkRouteChange();

    MCAPI NetworkRouteChange(::webrtc::NetworkRouteChange const&);

    MCAPI ~NetworkRouteChange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::webrtc::NetworkRouteChange const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
