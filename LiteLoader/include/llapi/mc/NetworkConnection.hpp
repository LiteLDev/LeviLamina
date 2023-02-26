/**
 * @file  NetworkConnection.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkConnection.
 *
 */
class NetworkConnection {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKCONNECTION
public:
    class NetworkConnection& operator=(class NetworkConnection const &) = delete;
    NetworkConnection(class NetworkConnection const &) = delete;
    NetworkConnection() = delete;
#endif

public:
    /**
     * @symbol  ??0NetworkConnection\@\@QEAA\@AEBVNetworkIdentifier\@\@V?$shared_ptr\@VNetworkPeer\@\@\@std\@\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@3\@_NV?$NonOwnerPointer\@VIPacketObserver\@\@\@Bedrock\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI NetworkConnection(class NetworkIdentifier const &, class std::shared_ptr<class NetworkPeer>, class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>, bool, class Bedrock::NonOwnerPointer<class IPacketObserver>, class Scheduler &);
    /**
     * @symbol  ?disconnect\@NetworkConnection\@\@QEAAXXZ
     */
    MCAPI void disconnect();
    /**
     * @symbol  ?receivePacket\@NetworkConnection\@\@QEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVNetworkHandler\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    MCAPI enum class NetworkPeer::DataStatus receivePacket(std::string &, class NetworkHandler &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /**
     * @symbol  ?update\@NetworkConnection\@\@QEAAXXZ
     */
    MCAPI void update();
    /**
     * @symbol  ??1NetworkConnection\@\@QEAA\@XZ
     */
    MCAPI ~NetworkConnection();

};