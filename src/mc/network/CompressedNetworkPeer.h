#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkPeer.h"

class CompressedNetworkPeer : public ::NetworkPeer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPRESSEDNETWORKPEER
public:
    CompressedNetworkPeer& operator=(CompressedNetworkPeer const&) = delete;
    CompressedNetworkPeer(CompressedNetworkPeer const&)            = delete;
    CompressedNetworkPeer()                                        = delete;
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
     * ?sendPacket\@CompressedNetworkPeer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility);
    /**
     * @vftbl 2
     * @symbol
     * ?receivePacket\@CompressedNetworkPeer\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus
    receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&);
    /**
     * @vftbl 3
     * @symbol ?getNetworkStatus\@CompressedNetworkPeer\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @symbol ??0CompressedNetworkPeer\@\@QEAA\@V?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCAPI CompressedNetworkPeer(class std::shared_ptr<class NetworkPeer>);
    /**
     * @symbol ?setCompressionEnabled\@CompressedNetworkPeer\@\@QEAAX_NUNetworkSettingOptions\@\@\@Z
     */
    MCAPI void setCompressionEnabled(bool, struct NetworkSettingOptions);
};
