#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class NetworkIdentifier;
class ResourcePackClientResponsePacket;
// clang-format on

class GameSpecificNetEventCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameSpecificNetEventCallback() = default;

    // vIndex: 1
    virtual void handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handle(::NetworkIdentifier const&, ::ResourcePackClientResponsePacket const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
