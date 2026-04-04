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
    virtual ~GameSpecificNetEventCallback() = default;

    virtual void handle(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $handle(::NetworkIdentifier const& source, ::ResourcePackClientResponsePacket const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
