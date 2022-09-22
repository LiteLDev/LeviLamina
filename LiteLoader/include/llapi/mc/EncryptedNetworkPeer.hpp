/**
 * @file  EncryptedNetworkPeer.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "NetworkPeer.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EncryptedNetworkPeer.
 *
 */
class EncryptedNetworkPeer : public NetworkPeer {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENCRYPTEDNETWORKPEER
public:
    class EncryptedNetworkPeer& operator=(class EncryptedNetworkPeer const &) = delete;
    EncryptedNetworkPeer(class EncryptedNetworkPeer const &) = delete;
    EncryptedNetworkPeer() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~EncryptedNetworkPeer();
    /**
     * @vftbl  1
     * @symbol ?sendPacket@EncryptedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@HW4Compressibility@@@Z
     */
    virtual void sendPacket(std::string const &, enum NetworkPeer::Reliability, int, enum Compressibility);
    /**
     * @hash   -438445829
     * @vftbl  2
     * @symbol ?receivePacket@EncryptedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
     */
    virtual enum NetworkPeer::DataStatus receivePacket(std::string &, class std::shared_ptr<class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>> const &);
    /**
     * @hash   1013726018
     * @vftbl  3
     * @symbol ?getNetworkStatus@EncryptedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
     */
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;
    /**
     * @hash   697778230
     * @symbol ??0EncryptedNetworkPeer@@QEAA@V?$shared_ptr@VNetworkPeer@@@std@@@Z
     */
    MCAPI EncryptedNetworkPeer(class std::shared_ptr<class NetworkPeer>);
    /**
     * @hash   -763081332
     * @symbol ?enableEncryption@EncryptedNetworkPeer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI void enableEncryption(std::string const &);

};