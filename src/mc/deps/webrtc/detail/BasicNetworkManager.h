#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/NetworkBindingResult.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace rtc { class NetworkMask; }
namespace rtc { class NetworkMonitorFactory; }
namespace rtc { class SocketFactory; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace rtc {

class BasicNetworkManager {
public:
    // prevent constructor by default
    BasicNetworkManager& operator=(BasicNetworkManager const&);
    BasicNetworkManager(BasicNetworkManager const&);
    BasicNetworkManager();

public:
    // NOLINTBEGIN
    // symbol: ?BindSocketToNetwork@BasicNetworkManager@rtc@@UEAA?AW4NetworkBindingResult@2@HAEBVIPAddress@2@@Z
    MCVAPI ::rtc::NetworkBindingResult BindSocketToNetwork(int, class rtc::IPAddress const&);

    // symbol: ?DumpNetworks@BasicNetworkManager@rtc@@UEAAXXZ
    MCVAPI void DumpNetworks();

    // symbol: ?StartUpdating@BasicNetworkManager@rtc@@UEAAXXZ
    MCVAPI void StartUpdating();

    // symbol: ?StopUpdating@BasicNetworkManager@rtc@@UEAAXXZ
    MCVAPI void StopUpdating();

    // symbol:
    // ?set_vpn_list@BasicNetworkManager@rtc@@UEAAXAEBV?$vector@VNetworkMask@rtc@@V?$allocator@VNetworkMask@rtc@@@std@@@std@@@Z
    MCVAPI void set_vpn_list(std::vector<class rtc::NetworkMask> const&);

    // symbol: ??1BasicNetworkManager@rtc@@UEAA@XZ
    MCVAPI ~BasicNetworkManager();

    // symbol:
    // ??0BasicNetworkManager@rtc@@QEAA@PEAVNetworkMonitorFactory@1@PEAVSocketFactory@1@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    BasicNetworkManager(class rtc::NetworkMonitorFactory*, class rtc::SocketFactory*, class webrtc::FieldTrialsView const*);

    // symbol: ?IsConfiguredVpn@BasicNetworkManager@rtc@@QEBA_NVIPAddress@2@H@Z
    MCAPI bool IsConfiguredVpn(class rtc::IPAddress, int) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?CreateNetworks@BasicNetworkManager@rtc@@IEBA_N_NPEAV?$vector@V?$unique_ptr@VNetwork@rtc@@U?$default_delete@VNetwork@rtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VNetwork@rtc@@U?$default_delete@VNetwork@rtc@@@std@@@std@@@2@@std@@@Z
    MCAPI bool CreateNetworks(bool, std::vector<std::unique_ptr<class rtc::Network>>*) const;

    // symbol: ?IsIgnoredNetwork@BasicNetworkManager@rtc@@IEBA_NAEBVNetwork@2@@Z
    MCAPI bool IsIgnoredNetwork(class rtc::Network const&) const;

    // symbol: ?QueryDefaultLocalAddress@BasicNetworkManager@rtc@@IEBA?AVIPAddress@2@H@Z
    MCAPI class rtc::IPAddress QueryDefaultLocalAddress(int) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?OnNetworksChanged@BasicNetworkManager@rtc@@AEAAXXZ
    MCAPI void OnNetworksChanged();

    // symbol: ?StartNetworkMonitor@BasicNetworkManager@rtc@@AEAAXXZ
    MCAPI void StartNetworkMonitor();

    // symbol: ?StopNetworkMonitor@BasicNetworkManager@rtc@@AEAAXXZ
    MCAPI void StopNetworkMonitor();

    // symbol: ?UpdateNetworksContinually@BasicNetworkManager@rtc@@AEAAXXZ
    MCAPI void UpdateNetworksContinually();

    // symbol: ?UpdateNetworksOnce@BasicNetworkManager@rtc@@AEAAXXZ
    MCAPI void UpdateNetworksOnce();

    // NOLINTEND
};

}; // namespace rtc
