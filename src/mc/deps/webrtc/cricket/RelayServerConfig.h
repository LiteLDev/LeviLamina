#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/cricket/ProtocolType.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SocketAddress; }
// clang-format on

namespace cricket {

struct RelayServerConfig {
public:
    // prevent constructor by default
    RelayServerConfig& operator=(RelayServerConfig const&);

public:
    // NOLINTBEGIN
    // symbol: ??0RelayServerConfig@cricket@@QEAA@XZ
    MCAPI RelayServerConfig();

    // symbol: ??0RelayServerConfig@cricket@@QEAA@AEBU01@@Z
    MCAPI RelayServerConfig(struct cricket::RelayServerConfig const&);

    // symbol:
    // ??0RelayServerConfig@cricket@@QEAA@AEBVSocketAddress@rtc@@V?$basic_string_view@DU?$char_traits@D@std@@@std@@1W4ProtocolType@1@@Z
    MCAPI
    RelayServerConfig(class rtc::SocketAddress const&, std::string_view, std::string_view, ::cricket::ProtocolType);

    // symbol: ??1RelayServerConfig@cricket@@QEAA@XZ
    MCAPI ~RelayServerConfig();

    // NOLINTEND
};

}; // namespace cricket
