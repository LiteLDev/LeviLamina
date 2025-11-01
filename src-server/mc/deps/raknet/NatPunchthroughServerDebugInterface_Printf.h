#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/NatPunchthroughServerDebugInterface.h"

namespace RakNet {

struct NatPunchthroughServerDebugInterface_Printf : public ::RakNet::NatPunchthroughServerDebugInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual void OnServerMessage(char const*) /*override*/;

    // vIndex: 0
    virtual ~NatPunchthroughServerDebugInterface_Printf() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
