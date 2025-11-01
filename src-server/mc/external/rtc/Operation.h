#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc::rtc_operations_chain_internal {

class Operation {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Operation();

    // vIndex: 1
    virtual void Run() = 0;
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
