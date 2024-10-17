#pragma once

#include "mc/_HeaderOutputPredefine.h"

class GameSpecificNetEventCallback {
public:
    // prevent constructor by default
    GameSpecificNetEventCallback& operator=(GameSpecificNetEventCallback const&);
    GameSpecificNetEventCallback(GameSpecificNetEventCallback const&);
    GameSpecificNetEventCallback();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameSpecificNetEventCallback() = default;

    // vIndex: 1
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void handle$(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);

    // NOLINTEND
};
