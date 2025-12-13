#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnChanged() = 0;

    virtual ~ObserverInterface();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
