#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/NetworkPeer.h"

class NetworkConnection {
public:
    // NetworkConnection inner types declare
    // clang-format off
    struct PausedPacket;
    // clang-format on

    // NetworkConnection inner types define
    struct PausedPacket {
    public:
        // prevent constructor by default
        PausedPacket& operator=(PausedPacket const&);
        PausedPacket(PausedPacket const&);
        PausedPacket();

    public:
        // NOLINTBEGIN
        // symbol: ??1PausedPacket@NetworkConnection@@QEAA@XZ
        MCAPI ~PausedPacket();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    NetworkConnection& operator=(NetworkConnection const&);
    NetworkConnection(NetworkConnection const&);
    NetworkConnection();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0NetworkConnection@@QEAA@AEBVNetworkIdentifier@@V?$shared_ptr@VNetworkPeer@@@std@@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@3@_NV?$NonOwnerPointer@VIPacketObserver@@@Bedrock@@AEAVScheduler@@3@Z
    MCAPI NetworkConnection(
        class NetworkIdentifier const&,
        std::shared_ptr<class NetworkPeer>,
        std::chrono::steady_clock::time_point,
        bool,
        class Bedrock::NonOwnerPointer<class IPacketObserver>,
        class Scheduler&,
        bool
    );

    // symbol:
    // ?receivePacket@NetworkConnection@@QEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
    MCAPI ::NetworkPeer::DataStatus
    receivePacket(std::string&, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // symbol: ??1NetworkConnection@@QEAA@XZ
    MCAPI ~NetworkConnection();

    // NOLINTEND
};
