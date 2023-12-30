#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class BasicPortAllocatorSession; }
namespace cricket { class PortInterface; }
namespace cricket { struct PortConfiguration; }
namespace cricket { struct RelayServerConfig; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class Network; }
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

class AllocationSequence {
public:
    // prevent constructor by default
    AllocationSequence& operator=(AllocationSequence const&);
    AllocationSequence(AllocationSequence const&);
    AllocationSequence();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1AllocationSequence@cricket@@UEAA@XZ
    virtual ~AllocationSequence();

    // symbol:
    // ??0AllocationSequence@cricket@@QEAA@PEAVBasicPortAllocatorSession@1@PEBVNetwork@rtc@@PEAUPortConfiguration@1@IV?$function@$$A6AXXZ@std@@@Z
    MCAPI
    AllocationSequence(class cricket::BasicPortAllocatorSession*, class rtc::Network const*, struct cricket::PortConfiguration*, uint, std::function<void(void)>);

    // symbol: ?Clear@AllocationSequence@cricket@@QEAAXXZ
    MCAPI void Clear();

    // symbol: ?DisableEquivalentPhases@AllocationSequence@cricket@@QEAAXPEBVNetwork@rtc@@PEAUPortConfiguration@2@PEAI@Z
    MCAPI void DisableEquivalentPhases(class rtc::Network const*, struct cricket::PortConfiguration*, uint*);

    // symbol: ?Init@AllocationSequence@cricket@@QEAAXXZ
    MCAPI void Init();

    // symbol: ?OnNetworkFailed@AllocationSequence@cricket@@QEAAXXZ
    MCAPI void OnNetworkFailed();

    // symbol: ?Start@AllocationSequence@cricket@@QEAAXXZ
    MCAPI void Start();

    // symbol: ?Stop@AllocationSequence@cricket@@QEAAXXZ
    MCAPI void Stop();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?CreateRelayPorts@AllocationSequence@cricket@@AEAAXXZ
    MCAPI void CreateRelayPorts();

    // symbol: ?CreateStunPorts@AllocationSequence@cricket@@AEAAXXZ
    MCAPI void CreateStunPorts();

    // symbol: ?CreateTCPPorts@AllocationSequence@cricket@@AEAAXXZ
    MCAPI void CreateTCPPorts();

    // symbol: ?CreateTurnPort@AllocationSequence@cricket@@AEAAXAEBURelayServerConfig@2@H@Z
    MCAPI void CreateTurnPort(struct cricket::RelayServerConfig const&, int);

    // symbol: ?CreateUDPPorts@AllocationSequence@cricket@@AEAAXXZ
    MCAPI void CreateUDPPorts();

    // symbol: ?OnPortDestroyed@AllocationSequence@cricket@@AEAAXPEAVPortInterface@2@@Z
    MCAPI void OnPortDestroyed(class cricket::PortInterface*);

    // symbol:
    // ?OnReadPacket@AllocationSequence@cricket@@AEAAXPEAVAsyncPacketSocket@rtc@@PEBD_KAEBVSocketAddress@4@AEB_J@Z
    MCAPI void
    OnReadPacket(class rtc::AsyncPacketSocket*, char const*, uint64, class rtc::SocketAddress const&, int64 const&);

    // symbol: ?Process@AllocationSequence@cricket@@AEAAXH@Z
    MCAPI void Process(int);

    // NOLINTEND
};

}; // namespace cricket
