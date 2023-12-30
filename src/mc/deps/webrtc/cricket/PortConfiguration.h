#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct RelayServerConfig; }
namespace rtc { class SocketAddress; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace cricket {

struct PortConfiguration {
public:
    // prevent constructor by default
    PortConfiguration& operator=(PortConfiguration const&);
    PortConfiguration(PortConfiguration const&);
    PortConfiguration();

public:
    // NOLINTBEGIN
    // symbol: ?AddRelay@PortConfiguration@cricket@@QEAAXAEBURelayServerConfig@2@@Z
    MCAPI void AddRelay(struct cricket::RelayServerConfig const&);

    // symbol:
    // ?GetRelayServerAddresses@PortConfiguration@cricket@@QEBA?AV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@std@@W4ProtocolType@2@@Z
    MCAPI std::set<class rtc::SocketAddress> GetRelayServerAddresses(::cricket::ProtocolType) const;

    // symbol:
    // ??0PortConfiguration@cricket@@QEAA@AEBV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@1PEBVFieldTrialsView@webrtc@@@Z
    MCAPI
    PortConfiguration(std::set<class rtc::SocketAddress> const&, std::string_view, std::string_view, class webrtc::FieldTrialsView const*);

    // symbol:
    // ?StunServers@PortConfiguration@cricket@@QEAA?AV?$set@VSocketAddress@rtc@@U?$less@VSocketAddress@rtc@@@std@@V?$allocator@VSocketAddress@rtc@@@4@@std@@XZ
    MCAPI std::set<class rtc::SocketAddress> StunServers();

    // symbol: ?SupportsProtocol@PortConfiguration@cricket@@QEBA_NAEBURelayServerConfig@2@W4ProtocolType@2@@Z
    MCAPI bool SupportsProtocol(struct cricket::RelayServerConfig const&, ::cricket::ProtocolType) const;

    // NOLINTEND
};

}; // namespace cricket
