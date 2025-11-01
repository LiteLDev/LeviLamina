#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct NetworkRouteChange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf75962;
    ::ll::UntypedStorage<8, 56> mUnk46e4cb;
    // NOLINTEND

public:
    // prevent constructor by default
    NetworkRouteChange& operator=(NetworkRouteChange const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI NetworkRouteChange();

    MCNAPI NetworkRouteChange(::webrtc::NetworkRouteChange const&);

    MCNAPI ~NetworkRouteChange();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::webrtc::NetworkRouteChange const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
