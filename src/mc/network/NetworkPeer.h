#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NetworkPeer {
public:
    // NetworkPeer inner types declare
    // clang-format off
    struct NetworkStatus;
    // clang-format on

    // NetworkPeer inner types define
    enum class DataStatus {};

    enum class Reliability {};

    struct NetworkStatus {

    public:
        // prevent constructor by default
        NetworkStatus& operator=(NetworkStatus const&) = delete;
        NetworkStatus(NetworkStatus const&)            = delete;
        NetworkStatus()                                = delete;
    };

public:
    // prevent constructor by default
    NetworkPeer& operator=(NetworkPeer const&) = delete;
    NetworkPeer(NetworkPeer const&)            = delete;
    NetworkPeer()                              = delete;

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
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const = 0;
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
