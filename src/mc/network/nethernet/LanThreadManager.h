#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace NetherNet { struct DiscoveryResponsePacket; }
namespace NetherNet { struct NetworkID; }
namespace NetherNet { struct ThreadInit; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace NetherNet {

class LanThreadManager {
public:
    // prevent constructor by default
    LanThreadManager& operator=(LanThreadManager const&);
    LanThreadManager(LanThreadManager const&);

public:
    // NOLINTBEGIN
    // symbol: ??1LanThreadManager@NetherNet@@UEAA@XZ
    MCVAPI ~LanThreadManager();

    // symbol: ?DisableBroadcastDiscovery@LanThreadManager@NetherNet@@QEAAXUNetworkID@2@@Z
    MCAPI void DisableBroadcastDiscovery(struct NetherNet::NetworkID);

    // symbol: ?EnableBroadcastDiscovery@LanThreadManager@NetherNet@@QEAAXUNetworkID@2@@Z
    MCAPI void EnableBroadcastDiscovery(struct NetherNet::NetworkID);

    // symbol:
    // ?Initialize@LanThreadManager@NetherNet@@QEAAXPEBDAEBUThreadInit@2@_KGV?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@std@@@Z
    MCAPI void Initialize(char const*, struct NetherNet::ThreadInit const&, uint64, ushort, std::chrono::milliseconds);

    // symbol: ?IsBroadcastDiscoveryEnabled@LanThreadManager@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool IsBroadcastDiscoveryEnabled(struct NetherNet::NetworkID);

    // symbol: ?IsNetworkIdOnLan@LanThreadManager@NetherNet@@QEAA_NUNetworkID@2@@Z
    MCAPI bool IsNetworkIdOnLan(struct NetherNet::NetworkID);

    // symbol: ??0LanThreadManager@NetherNet@@QEAA@XZ
    MCAPI LanThreadManager();

    // symbol:
    // ?SendLanBroadcastResponse@LanThreadManager@NetherNet@@QEAAXAEBVSocketAddress@rtc@@AEBUDiscoveryResponsePacket@2@@Z
    MCAPI void
    SendLanBroadcastResponse(class rtc::SocketAddress const&, struct NetherNet::DiscoveryResponsePacket const&);

    // symbol:
    // ?SendSignalingMessageTo@LanThreadManager@NetherNet@@QEAAXUNetworkID@2@0AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@$$QEAV?$function@$$A6AXVerror_code@std@@@Z@5@@Z
    MCAPI void
    SendSignalingMessageTo(struct NetherNet::NetworkID, struct NetherNet::NetworkID, std::string const&, std::function<void(std::error_code)>&&);

    // symbol: ?Shutdown@LanThreadManager@NetherNet@@QEAAXXZ
    MCAPI void Shutdown();

    // symbol: ?Suspend@LanThreadManager@NetherNet@@QEAAXXZ
    MCAPI void Suspend();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?BroadcastTask@LanThreadManager@NetherNet@@AEAAXXZ
    MCAPI void BroadcastTask();

    // symbol: ?OnNetworksDiscovered@LanThreadManager@NetherNet@@AEAAXXZ
    MCAPI void OnNetworksDiscovered();

    // symbol: ?OnPacket@LanThreadManager@NetherNet@@AEAAXPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@AEB_J@Z
    MCAPI void
    OnPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64 const&);

    // symbol: ?SendLanBroadcastRequest@LanThreadManager@NetherNet@@AEAAXUNetworkID@2@@Z
    MCAPI void SendLanBroadcastRequest(struct NetherNet::NetworkID);

    // NOLINTEND
};

}; // namespace NetherNet
