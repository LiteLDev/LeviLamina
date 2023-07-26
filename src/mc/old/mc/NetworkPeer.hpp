/**
 * @file  NetworkPeer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkPeer.
 *
 */
class NetworkPeer {

#define AFTER_EXTRA
// Add Member There
public:
enum class Reliability : int {
    Reliable = 0x0,
    ReliableOrdered = 0x1,
    Unreliable = 0x2,
    UnreliableSequenced = 0x3,
};

enum class DataStatus : int {
        HasData = 0x0,
        NoData = 0x1,
        BrokenData = 0x2,
		
};

enum class NetworkLoad : __int32 {
    Unrestricted = 0x0,
    Low = 0x1,
    Medium = 0x2,
    High = 0x3,
};

struct NetworkStatus {
    NetworkLoad mLoad;
    int mCurrentPing;
    int mAveragePing;
    int mApproximateMaxBps;
    float mCurrentPacketLoss;
    float mAveragePacketLoss;
    unsigned __int64 mTotalBytesReceived;
    unsigned __int64 mTotalBytesSent;
    unsigned __int64 unk40;
    int unk48;
    bool unk52;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKPEER
public:
    class NetworkPeer& operator=(class NetworkPeer const &) = delete;
    NetworkPeer(class NetworkPeer const &) = delete;
    NetworkPeer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NetworkPeer();
    /**
     * @vftbl  1
     * @symbol  ?sendPacket\@RakNetNetworkPeer\@RakNetConnector\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void sendPacket(std::string const &, enum class NetworkPeer::Reliability, enum class Compressibility) = 0;
    /**
     * @vftbl  2
     * @symbol  ?receivePacket\@RakNetNetworkPeer\@RakNetConnector\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@6\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &) = 0;
    /**
     * @vftbl  3
     * @symbol  ?getNetworkStatus\@RakNetNetworkPeer\@RakNetConnector\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const = 0;
    /**
     * @vftbl  4
     * @symbol  ?update\@NetworkPeer\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl  5
     * @symbol  ?flush\@NetworkPeer\@\@UEAAX$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(class std::function<void (void)> &&);
    /**
     * @vftbl  6
     * @symbol  ?isLocal\@NetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isLocal() const;
    /**
     * @vftbl  7
     * @symbol  ?isEncrypted\@NetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isEncrypted() const;

};