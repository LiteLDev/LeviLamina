#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/Compressibility.h"

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
        NetworkStatus& operator=(NetworkStatus const&);
        NetworkStatus(NetworkStatus const&);
        NetworkStatus();
    };

public:
    // prevent constructor by default
    NetworkPeer& operator=(NetworkPeer const&);
    NetworkPeer(NetworkPeer const&);
    NetworkPeer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?sendPacket@CompressedNetworkPeer@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Reliability@NetworkPeer@@W4Compressibility@@@Z
    virtual void sendPacket(std::string const&, ::NetworkPeer::Reliability, ::Compressibility) = 0;

    // vIndex: 2, symbol:
    // ?receivePacket@CompressedNetworkPeer@@UEAA?AW4DataStatus@NetworkPeer@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$shared_ptr@V?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@chrono@std@@@5@@Z
    virtual ::NetworkPeer::DataStatus
    receivePacket(std::string&, std::shared_ptr<std::chrono::steady_clock::time_point> const&) = 0;

    // vIndex: 3, symbol: ?getNetworkStatus@CompressedNetworkPeer@@UEBA?AUNetworkStatus@NetworkPeer@@XZ
    virtual struct NetworkPeer::NetworkStatus getNetworkStatus() const = 0;

    // vIndex: 4, symbol: ?update@NetworkPeer@@UEAAXXZ
    virtual void update();

    // vIndex: 5, symbol: ?flush@NetworkPeer@@UEAAX$$QEAV?$function@$$A6AXXZ@std@@@Z
    virtual void flush(std::function<void(void)>&&);

    // vIndex: 6, symbol: ?isLocal@NetworkPeer@@UEBA_NXZ
    virtual bool isLocal() const;

    // vIndex: 7, symbol: ?isEncrypted@NetworkPeer@@UEBA_NXZ
    virtual bool isEncrypted() const;

    // symbol: ??1NetworkPeer@@UEAA@XZ
    MCVAPI ~NetworkPeer();

    // NOLINTEND
};
