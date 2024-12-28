#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct NatPunchthroughDebugInterface {
public:
    // prevent constructor by default
    NatPunchthroughDebugInterface& operator=(NatPunchthroughDebugInterface const&);
    NatPunchthroughDebugInterface(NatPunchthroughDebugInterface const&);
    NatPunchthroughDebugInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NatPunchthroughDebugInterface();

    // vIndex: 1
    virtual void OnClientMessage(char const*) = 0;
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

} // namespace RakNet
