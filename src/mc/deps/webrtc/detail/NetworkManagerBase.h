#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/AdapterType.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/NetworkManager.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace rtc { class NetworkManager; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace rtc {

class NetworkManagerBase : public ::rtc::NetworkManager {
public:
    // prevent constructor by default
    NetworkManagerBase& operator=(NetworkManagerBase const&);
    NetworkManagerBase(NetworkManagerBase const&);
    NetworkManagerBase();

public:
    // NOLINTBEGIN
    // symbol:
    // ?GetAnyAddressNetworks@NetworkManagerBase@rtc@@UEAA?AV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::Network const*> GetAnyAddressNetworks();

    // symbol: ?GetDefaultLocalAddress@NetworkManagerBase@rtc@@UEBA_NHPEAVIPAddress@2@@Z
    MCVAPI bool GetDefaultLocalAddress(int, class rtc::IPAddress*) const;

    // symbol:
    // ?GetNetworks@NetworkManagerBase@rtc@@UEBA?AV?$vector@PEBVNetwork@rtc@@V?$allocator@PEBVNetwork@rtc@@@std@@@std@@XZ
    MCVAPI std::vector<class rtc::Network const*> GetNetworks() const;

    // symbol: ?enumeration_permission@NetworkManagerBase@rtc@@UEBA?AW4EnumerationPermission@NetworkManager@2@XZ
    MCVAPI ::rtc::NetworkManager::EnumerationPermission enumeration_permission() const;

    // symbol: ??1NetworkManagerBase@rtc@@UEAA@XZ
    MCVAPI ~NetworkManagerBase();

    // symbol: ??0NetworkManagerBase@rtc@@QEAA@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI explicit NetworkManagerBase(class webrtc::FieldTrialsView const*);

    // symbol: ?IsVpnMacAddress@NetworkManagerBase@rtc@@SA_NV?$ArrayView@$$CBE$0?BCGH@@2@@Z
    MCAPI static bool IsVpnMacAddress(class rtc::ArrayView<uchar const, -4711>);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol:
    // ?CreateNetwork@NetworkManagerBase@rtc@@IEBA?AV?$unique_ptr@VNetwork@rtc@@U?$default_delete@VNetwork@rtc@@@std@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@4@0AEBVIPAddress@2@HW4AdapterType@2@@Z
    MCAPI std::unique_ptr<class rtc::Network>
          CreateNetwork(std::string_view, std::string_view, class rtc::IPAddress const&, int, ::rtc::AdapterType) const;

    // symbol: ?GetNetworkFromAddress@NetworkManagerBase@rtc@@IEBAPEAVNetwork@2@AEBVIPAddress@2@@Z
    MCAPI class rtc::Network* GetNetworkFromAddress(class rtc::IPAddress const&) const;

    // symbol:
    // ?MergeNetworkList@NetworkManagerBase@rtc@@IEAAXV?$vector@V?$unique_ptr@VNetwork@rtc@@U?$default_delete@VNetwork@rtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VNetwork@rtc@@U?$default_delete@VNetwork@rtc@@@std@@@std@@@2@@std@@PEA_NPEAUStats@NetworkManager@2@@Z
    MCAPI void
    MergeNetworkList(std::vector<std::unique_ptr<class rtc::Network>>, bool*, struct rtc::NetworkManager::Stats*);

    // symbol: ?set_default_local_addresses@NetworkManagerBase@rtc@@IEAAXAEBVIPAddress@2@0@Z
    MCAPI void set_default_local_addresses(class rtc::IPAddress const&, class rtc::IPAddress const&);

    // NOLINTEND
};

}; // namespace rtc
