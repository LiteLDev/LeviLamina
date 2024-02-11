#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class EncryptedNetworkPeer : public ::NetworkPeer {
public:
    // prevent constructor by default
    EncryptedNetworkPeer& operator=(EncryptedNetworkPeer const&);
    EncryptedNetworkPeer(EncryptedNetworkPeer const&);
    EncryptedNetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EncryptedNetworkPeer@@UEAA@XZ
    virtual ~EncryptedNetworkPeer();

    // vIndex: 1, symbol:
    // ?sendPacket@EncryptedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@W4Compressibility@@@Z
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // vIndex: 2, symbol:
    // ?receivePacket@EncryptedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // vIndex: 3, symbol: ?getNetworkStatus@EncryptedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // vIndex: 7, symbol: ?isEncrypted@EncryptedNetworkPeer@@UEBA_NXZ
    virtual bool isEncrypted() const;

    // symbol:
    // ?enableEncryption@EncryptedNetworkPeer@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void enableEncryption(std::string const& symmetricKey);

    // NOLINTEND
};
