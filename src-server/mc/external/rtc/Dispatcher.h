#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class Dispatcher {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Dispatcher();

    // vIndex: 1
    virtual uint GetRequestedEvents() = 0;

    // vIndex: 2
    virtual void OnEvent(uint, int) = 0;

    // vIndex: 3
    virtual void* GetWSAEvent() = 0;

    // vIndex: 4
    virtual uint64 GetSocket() = 0;

    // vIndex: 5
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

}
