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
    // vIndex: 0, symbol: __gen_??1GameSpecificNetEventCallback@@UEAA@XZ
    virtual ~GameSpecificNetEventCallback() = default;

    // vIndex: 1, symbol:
    // ?handle@GameSpecificNetEventCallback@@UEAAXAEBVNetworkIdentifier@@AEBVResourcePackClientResponsePacket@@@Z
    virtual void handle(class NetworkIdentifier const&, class ResourcePackClientResponsePacket const&);

    // NOLINTEND
};
