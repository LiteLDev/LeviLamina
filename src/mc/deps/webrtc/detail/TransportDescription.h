#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ConnectionRole.h"
#include "mc/deps/webrtc/detail/IceMode.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct IceParameters; }
namespace rtc { struct SSLFingerprint; }
// clang-format on

namespace cricket {

struct TransportDescription {
public:
    // prevent constructor by default
    TransportDescription& operator=(TransportDescription const&);

public:
    // NOLINTBEGIN
    // symbol: ?GetIceParameters@TransportDescription@cricket@@QEBA?AUIceParameters@2@XZ
    MCAPI struct cricket::IceParameters GetIceParameters() const;

    // symbol: ??0TransportDescription@cricket@@QEAA@XZ
    MCAPI TransportDescription();

    // symbol: ??0TransportDescription@cricket@@QEAA@AEBU01@@Z
    MCAPI TransportDescription(struct cricket::TransportDescription const&);

    // symbol: ??0TransportDescription@cricket@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@0@Z
    MCAPI TransportDescription(std::string_view, std::string_view);

    // symbol:
    // ??0TransportDescription@cricket@@QEAA@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@1W4IceMode@1@W4ConnectionRole@1@PEBUSSLFingerprint@rtc@@@Z
    MCAPI
    TransportDescription(std::vector<std::string> const&, std::string_view, std::string_view, ::cricket::IceMode, ::cricket::ConnectionRole, struct rtc::SSLFingerprint const*);

    // symbol: ??1TransportDescription@cricket@@QEAA@XZ
    MCAPI ~TransportDescription();

    // NOLINTEND
};

}; // namespace cricket
