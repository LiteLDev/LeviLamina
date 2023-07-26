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
        PausedPacket& operator=(PausedPacket const&) = delete;
        PausedPacket(PausedPacket const&)            = delete;
        PausedPacket()                               = delete;

    public:
        /**
         * @symbol ??1PausedPacket\@NetworkConnection\@\@QEAA\@XZ
         */
        MCAPI ~PausedPacket(); // NOLINT
    };

public:
    // prevent constructor by default
    NetworkConnection& operator=(NetworkConnection const&) = delete;
    NetworkConnection(NetworkConnection const&)            = delete;
    NetworkConnection()                                    = delete;

public:
    /**
     * @symbol
     * ??0NetworkConnection\@\@QEAA\@AEBVNetworkIdentifier\@\@V?$shared_ptr\@VNetworkPeer\@\@\@std\@\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@3\@_NV?$NonOwnerPointer\@VIPacketObserver\@\@\@Bedrock\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI NetworkConnection(class NetworkIdentifier const&, class std::shared_ptr<class NetworkPeer>, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>, bool, class Bedrock::NonOwnerPointer<class IPacketObserver>, class Scheduler&); // NOLINT
    /**
     * @symbol ?disconnect\@NetworkConnection\@\@QEAAXXZ
     */
    MCAPI void disconnect(); // NOLINT
    /**
     * @symbol
     * ?receivePacket\@NetworkConnection\@\@QEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVNetworkSystem\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    MCAPI enum class NetworkPeer::DataStatus
    receivePacket(std::string&, class NetworkSystem&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&); // NOLINT
    /**
     * @symbol ?update\@NetworkConnection\@\@QEAAXXZ
     */
    MCAPI void update(); // NOLINT
    /**
     * @symbol ??1NetworkConnection\@\@QEAA\@XZ
     */
    MCAPI ~NetworkConnection(); // NOLINT
};
