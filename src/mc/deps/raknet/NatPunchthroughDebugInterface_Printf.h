#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughDebugInterface.h"

namespace RakNet {

struct NatPunchthroughDebugInterface_Printf : public ::RakNet::NatPunchthroughDebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnClientMessage(char const*) /*override*/;

    virtual ~NatPunchthroughDebugInterface_Printf() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
