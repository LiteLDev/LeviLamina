#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughDebugInterface.h"

namespace RakNet {

struct NatPunchthroughDebugInterface_Printf : public ::RakNet::NatPunchthroughDebugInterface {
public:
    // prevent constructor by default
    NatPunchthroughDebugInterface_Printf& operator=(NatPunchthroughDebugInterface_Printf const&);
    NatPunchthroughDebugInterface_Printf(NatPunchthroughDebugInterface_Printf const&);
    NatPunchthroughDebugInterface_Printf();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnClientMessage(char const*) /*override*/;

    // vIndex: 0
    virtual ~NatPunchthroughDebugInterface_Printf() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnClientMessage(char const*);
    // NOLINTEND
};

} // namespace RakNet
