#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Compressibility.h"
#include "mc/network/NetworkPeer.h"

class CompressedNetworkPeer : public ::NetworkPeer {
public:
    // prevent constructor by default
    CompressedNetworkPeer& operator=(CompressedNetworkPeer const&);
    CompressedNetworkPeer(CompressedNetworkPeer const&);
    CompressedNetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CompressedNetworkPeer@@UEAA@XZ
    virtual ~CompressedNetworkPeer() = default;

    // vIndex: 1, symbol:
    // ?sendPacket@CompressedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@W4Compressibility@@@Z
    virtual void
    sendPacket(std::string const& data, ::NetworkPeer::Reliability reliability, ::Compressibility compressible);

    // vIndex: 2, symbol:
    // ?receivePacket@CompressedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string& outData, std::shared_ptr<std::chrono::steady_clock::time_point> const&);

    // vIndex: 3, symbol: ?getNetworkStatus@CompressedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const;

    // symbol: ??0CompressedNetworkPeer@@QEAA@V?$shared_ptr@VNetworkPeer@@@std@@@Z
    MCAPI explicit CompressedNetworkPeer(std::shared_ptr<class NetworkPeer> peer);

    // symbol: ?setCompressionEnabled@CompressedNetworkPeer@@QEAAX_NUNetworkSettingOptions@@@Z
    MCAPI void setCompressionEnabled(bool val, struct NetworkSettingOptions options);

    // NOLINTEND
};
