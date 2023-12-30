#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/AdapterType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class IPAddress; }
namespace rtc { class InterfaceAddress; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class MdnsResponderInterface; }
// clang-format on

namespace rtc {

class Network {
public:
    // prevent constructor by default
    Network& operator=(Network const&);
    Network(Network const&);
    Network();

public:
    // NOLINTBEGIN
    // symbol: ?GetBestIP@Network@rtc@@QEBA?AVIPAddress@2@XZ
    MCAPI class rtc::IPAddress GetBestIP() const;

    // symbol: ?GetCost@Network@rtc@@QEBAGAEBVFieldTrialsView@webrtc@@@Z
    MCAPI ushort GetCost(class webrtc::FieldTrialsView const&) const;

    // symbol: ?GetMdnsResponder@Network@rtc@@QEBAPEAVMdnsResponderInterface@webrtc@@XZ
    MCAPI class webrtc::MdnsResponderInterface* GetMdnsResponder() const;

    // symbol:
    // ??0Network@rtc@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0AEBVIPAddress@1@HW4AdapterType@1@PEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    Network(std::string_view, std::string_view, class rtc::IPAddress const&, int, ::rtc::AdapterType, class webrtc::FieldTrialsView const*);

    // symbol:
    // ?SetIPs@Network@rtc@@QEAA_NAEBV?$vector@VInterfaceAddress@rtc@@V?$allocator@VInterfaceAddress@rtc@@@std@@@std@@_N@Z
    MCAPI bool SetIPs(std::vector<class rtc::InterfaceAddress> const&, bool);

    // symbol: ?ToString@Network@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string ToString() const;

    // symbol: ??1Network@rtc@@QEAA@XZ
    MCAPI ~Network();

    // symbol: ?GuessAdapterFromNetworkCost@Network@rtc@@SA?AU?$pair@W4AdapterType@rtc@@_N@std@@H@Z
    MCAPI static std::pair<::rtc::AdapterType, bool> GuessAdapterFromNetworkCost(int);

    // NOLINTEND
};

}; // namespace rtc
