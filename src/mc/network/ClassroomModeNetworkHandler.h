#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/MinecraftPacketIds.h"

class ClassroomModeNetworkHandler {
public:
    // prevent constructor by default
    ClassroomModeNetworkHandler& operator=(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler(ClassroomModeNetworkHandler const&);
    ClassroomModeNetworkHandler();

public:
    // NOLINTBEGIN
    // symbol: ?allowIncomingPacketId@ClassroomModeNetworkHandler@@UEAA_NAEBVNetworkIdentifier@@W4MinecraftPacketIds@@@Z
    MCVAPI bool allowIncomingPacketId(class NetworkIdentifier const& id, ::MinecraftPacketIds packetId);

    // symbol:
    // ?onWebsocketRequest@ClassroomModeNetworkHandler@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0V?$function@$$A6AXXZ@3@@Z
    MCVAPI void onWebsocketRequest(
        std::string const&    serverAddress,
        std::string const&    payload,
        std::function<void()> errorCallback
    );

    // symbol: ??0ClassroomModeNetworkHandler@@QEAA@_N@Z
    MCAPI explicit ClassroomModeNetworkHandler(bool isDedicatedServer);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_connect@ClassroomModeNetworkHandler@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _connect(std::string const& address);

    // NOLINTEND
};
