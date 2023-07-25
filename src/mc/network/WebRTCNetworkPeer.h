#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/network/NetworkPeer.h"

class WebRTCNetworkPeer : public ::NetworkPeer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WEBRTCNETWORKPEER
public:
    WebRTCNetworkPeer& operator=(WebRTCNetworkPeer const&) = delete;
    WebRTCNetworkPeer(WebRTCNetworkPeer const&)            = delete;
    WebRTCNetworkPeer()                                    = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol
     * ?sendPacket\@WebRTCNetworkPeer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility);
    /**
     * @vftbl 2
     * @symbol
     * ?receivePacket\@WebRTCNetworkPeer\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus
    receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&);
    /**
     * @vftbl 3
     * @symbol ?getNetworkStatus\@WebRTCNetworkPeer\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @vftbl 4
     * @symbol ?update\@WebRTCNetworkPeer\@\@UEAAXXZ
     */
    virtual void update();
    /**
     * @vftbl 6
     * @symbol ?isLocal\@WebRTCNetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isLocal() const;
    /**
     * @vftbl 7
     * @symbol ?isEncrypted\@WebRTCNetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isEncrypted() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_WEBRTCNETWORKPEER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~WebRTCNetworkPeer();
#endif
    /**
     * @symbol ??0WebRTCNetworkPeer\@\@QEAA\@$$QEAV?$NonOwnerPointer\@UNetherNetConnector\@\@\@Bedrock\@\@_K\@Z
     */
    MCAPI WebRTCNetworkPeer(class Bedrock::NonOwnerPointer<struct NetherNetConnector>&&, unsigned __int64);

    // private:
    /**
     * @symbol ?_updateConnectionStatus\@WebRTCNetworkPeer\@\@AEAAXXZ
     */
    MCAPI void _updateConnectionStatus();

private:
};
