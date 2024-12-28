#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class FecControllerOverride {
public:
    // prevent constructor by default
    FecControllerOverride& operator=(FecControllerOverride const&);
    FecControllerOverride(FecControllerOverride const&);
    FecControllerOverride();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void SetFecAllowed(bool) = 0;

    // vIndex: 1
    virtual ~FecControllerOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
