#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPeer {
public:
    // NetworkPeer inner types declare
    // clang-format off
    struct NetworkStatus;
    // clang-format on

    // NetworkPeer inner types define
    enum class DataStatus : int {
        HasData        = 0x0,
        NoData         = 0x1,
        BrokenData     = 0x2,
        ConnectionLost = 0x3,
    };

    enum class Reliability : int {
        Reliable            = 0x0,
        ReliableOrdered     = 0x1,
        Unreliable          = 0x2,
        UnreliableSequenced = 0x3,
    };

    enum class NetworkLoad : int {
        Unrestricted = 0x0,
        Low          = 0x1,
        Medium       = 0x2,
        High         = 0x3,
    };

    using PacketRecvTimepoint = std::chrono::steady_clock::time_point;

    struct NetworkStatus {

    public:
        NetworkLoad mLoad;                   // this+0x0
        int         mCurrentPing;            // this+0x4
        int         mAveragePing;            // this+0x8
        int         mApproximateMaxBps;      // this+0xC
        float       mCurrentPacketLoss;      // this+0x10
        float       mAveragePacketLoss;      // this+0x14
        uint64_t    mTotalBytesReceived;     // this+0x18
        uint64_t    mTotalBytesSent;         // this+0x20
        uint64_t    mCurrentBytesSendBuffer; // this+0x28
        int         mICEState;               // this+0x30
        bool        mUsingRelays;            // this+0x34
    };

public:
    // prevent constructor by default
    NetworkPeer& operator=(NetworkPeer const&) = delete;
    NetworkPeer(NetworkPeer const&)            = delete;
    NetworkPeer()                              = delete;

    std::shared_ptr<NetworkPeer> mPeer; // this+0x8

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?sendPacket\@BatchedNetworkPeer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility) = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?receivePacket\@BatchedNetworkPeer\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus
    receivePacket(std::string&, std::shared_ptr<std::chrono::steady_clock::time_point> const&) = 0;
    /**
     * @vftbl 3
     * @symbol ?getNetworkStatus\@BatchedNetworkPeer\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkStatus getNetworkStatus() const = 0;
    /**
     * @vftbl 4
     * @symbol ?update\@NetworkPeer\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl 5
     * @symbol ?flush\@NetworkPeer\@\@UEAAX$$QEAV?$function\@$$A6AXXZ\@std\@\@\@Z
     */
    virtual void flush(std::function<void(void)>&&);
    /**
     * @vftbl 6
     * @symbol ?isLocal\@NetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isLocal() const;
    /**
     * @vftbl 7
     * @symbol ?isEncrypted\@NetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isEncrypted() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_NETWORKPEER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~NetworkPeer();
#endif
    // NOLINTEND
};
