#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/NetworkPeer.h"

class EncryptedNetworkPeer : public ::NetworkPeer {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDNETWORKPEER
public:
    EncryptedNetworkPeer& operator=(EncryptedNetworkPeer const&) = delete;
    EncryptedNetworkPeer(EncryptedNetworkPeer const&)            = delete;
    EncryptedNetworkPeer()                                       = delete;
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
     * ?sendPacket\@EncryptedNetworkPeer\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4Reliability\@NetworkPeer\@\@W4Compressibility\@\@\@Z
     */
    virtual void sendPacket(std::string const&, enum class NetworkPeer::Reliability, enum class Compressibility);
    /**
     * @vftbl 2
     * @symbol
     * ?receivePacket\@EncryptedNetworkPeer\@\@UEAA?AW4DataStatus\@NetworkPeer\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$shared_ptr\@V?$time_point\@Usteady_clock\@chrono\@std\@\@V?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@23\@\@chrono\@std\@\@\@5\@\@Z
     */
    virtual enum class NetworkPeer::DataStatus
    receivePacket(std::string&, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const&);
    /**
     * @vftbl 3
     * @symbol ?getNetworkStatus\@EncryptedNetworkPeer\@\@UEBA?AUNetworkStatus\@NetworkPeer\@\@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @vftbl 7
     * @symbol ?isEncrypted\@EncryptedNetworkPeer\@\@UEBA_NXZ
     */
    virtual bool isEncrypted() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ENCRYPTEDNETWORKPEER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~EncryptedNetworkPeer();
#endif
    /**
     * @symbol ??0EncryptedNetworkPeer\@\@QEAA\@V?$shared_ptr\@VNetworkPeer\@\@\@std\@\@\@Z
     */
    MCAPI EncryptedNetworkPeer(class std::shared_ptr<class NetworkPeer>);
    /**
     * @symbol
     * ?enableEncryption\@EncryptedNetworkPeer\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void enableEncryption(std::string const&);
};
