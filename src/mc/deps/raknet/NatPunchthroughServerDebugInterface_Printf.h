#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughServerDebugInterface.h"

namespace RakNet {

struct NatPunchthroughServerDebugInterface_Printf : public ::RakNet::NatPunchthroughServerDebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void OnServerMessage(char const*) /*override*/;

    virtual ~NatPunchthroughServerDebugInterface_Printf() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace RakNet
