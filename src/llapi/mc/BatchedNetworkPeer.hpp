/**
 * @file  BatchedNetworkPeer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BatchedNetworkPeer.
 *
 */
class BatchedNetworkPeer : public NetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BATCHEDNETWORKPEER
public:
    class BatchedNetworkPeer& operator=(class BatchedNetworkPeer const &) = delete;
    BatchedNetworkPeer(class BatchedNetworkPeer const &) = delete;
    BatchedNetworkPeer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~BatchedNetworkPeer();
    /**
     * @vftbl  1
     * @symbol  ?sendPacket\@BatchedNetworkPeer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void sendPacket(std::string const &, enum class NetworkPeer::Reliability, enum class Compressibility);
    /**
     * @vftbl  2
     * @symbol  ?receivePacket\@BatchedNetworkPeer\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /**
     * @vftbl  3
     * @symbol  ?getNetworkStatus\@BatchedNetworkPeer\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @vftbl  4
     * @symbol  ?update\@BatchedNetworkPeer\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl  5
     * @symbol  ?flush\@BatchedNetworkPeer\@\@UEAAX$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class std::function<void (void)> &&);
    /**
     * @symbol  ??0BatchedNetworkPeer\@\@QEAA\@V?$shared_ptr\@VNetworkPeer\@\@\@std\@\@AEAVScheduler\@\@\@Z
     */
    MCAPI BatchedNetworkPeer(class std::shared_ptr<class NetworkPeer>, class Scheduler &);
    /**
     * @symbol  ?setAsyncEnabled\@BatchedNetworkPeer\@\@QEAAX_N\@Z
     */
    MCAPI void setAsyncEnabled(bool);

//private:
    /**
     * @symbol  ?_startSendTask\@BatchedNetworkPeer\@\@AEAAXXZ
     */
    MCAPI void _startSendTask();

private:

};