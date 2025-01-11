#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ObserverInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnChanged() = 0;

    // vIndex: 1
    virtual ~ObserverInterface() = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
