#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Input {

class KeyboardEventProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardEventProcessor();

    virtual void onKeyDown(int) = 0;

    virtual void onKeyUp(int) = 0;
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

} // namespace Bedrock::Input
