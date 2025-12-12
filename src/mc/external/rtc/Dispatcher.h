#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class Dispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Dispatcher();

    virtual uint GetRequestedEvents() = 0;

    virtual void OnEvent(uint, int) = 0;

    virtual void* GetWSAEvent() = 0;

    virtual uint64 GetSocket() = 0;

    virtual bool CheckSignalClose() = 0;
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

} // namespace rtc
