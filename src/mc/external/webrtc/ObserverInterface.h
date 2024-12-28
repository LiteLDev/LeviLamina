#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class ObserverInterface {
public:
    // prevent constructor by default
    ObserverInterface& operator=(ObserverInterface const&);
    ObserverInterface(ObserverInterface const&);
    ObserverInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual void OnChanged() = 0;

    // vIndex: 1
    virtual ~ObserverInterface();
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

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
