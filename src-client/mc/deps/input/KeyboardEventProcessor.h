#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Input {

class KeyboardEventProcessor {
public:
    // KeyboardEventProcessor inner types define
    enum class InputOrigin : int {
        Unknown  = 0,
        Hardware = 1,
        Virtual  = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~KeyboardEventProcessor();

    virtual void onKeyDown(int keyCode, ::Bedrock::Input::KeyboardEventProcessor::InputOrigin origin) = 0;

    virtual void onKeyUp(int keyCode) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
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
