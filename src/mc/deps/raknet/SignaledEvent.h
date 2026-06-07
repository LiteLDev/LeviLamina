#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

class SignaledEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk673ff6;
    // NOLINTEND

public:
    // prevent constructor by default
    SignaledEvent& operator=(SignaledEvent const&);
    SignaledEvent(SignaledEvent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void CloseEvent();

    MCAPI void InitEvent();

    MCAPI void SetEvent();

    MCAPI SignaledEvent();

    MCAPI void WaitOnEvent(int timeoutMs);

    MCAPI ~SignaledEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace RakNet
