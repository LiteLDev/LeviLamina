#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class NetworkMask; }
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace rtc {

class NetworkManager {
public:
    // NetworkManager inner types declare
    // clang-format off
    struct Stats;
    // clang-format on

    // NetworkManager inner types define
    enum class EnumerationPermission {};

    struct Stats {
    public:
        // prevent constructor by default
        Stats& operator=(Stats const&);
        Stats(Stats const&);
        Stats();
    };

public:
    // prevent constructor by default
    NetworkManager& operator=(NetworkManager const&);
    NetworkManager(NetworkManager const&);
    NetworkManager();

public:
    // NOLINTBEGIN
    // symbol: ?DumpNetworks@NetworkManager@rtc@@UEAAXXZ
    MCVAPI void DumpNetworks();

    // symbol: ?GetDefaultLocalAddress@NetworkManager@rtc@@UEBA_NHPEAVIPAddress@2@@Z
    MCVAPI bool GetDefaultLocalAddress(int, class rtc::IPAddress*) const;

    // symbol: ?GetMdnsResponder@NetworkManager@rtc@@UEBAPEAVMdnsResponderInterface@webrtc@@XZ
    MCVAPI class webrtc::MdnsResponderInterface* GetMdnsResponder() const;

    // symbol: ?Initialize@NetworkManager@rtc@@UEAAXXZ
    MCVAPI void Initialize();

    // symbol: ?enumeration_permission@NetworkManager@rtc@@UEBA?AW4EnumerationPermission@12@XZ
    MCVAPI ::rtc::NetworkManager::EnumerationPermission enumeration_permission() const;

    // symbol:
    // ?set_vpn_list@NetworkManager@rtc@@UEAAXAEBV?$vector@VNetworkMask@rtc@@V?$allocator@VNetworkMask@rtc@@@std@@@std@@@Z
    MCVAPI void set_vpn_list(std::vector<class rtc::NetworkMask> const&);

    // symbol: ??1NetworkManager@rtc@@UEAA@XZ
    MCVAPI ~NetworkManager();

    // NOLINTEND
};

}; // namespace rtc
