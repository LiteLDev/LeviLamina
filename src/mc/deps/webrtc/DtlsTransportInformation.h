#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/DtlsTransportTlsRole.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class SSLCertChain; }
// clang-format on

namespace webrtc {

class DtlsTransportInformation {
public:
    // prevent constructor by default
    DtlsTransportInformation& operator=(DtlsTransportInformation const&);
    DtlsTransportInformation();

public:
    // NOLINTBEGIN
    // symbol: ??0DtlsTransportInformation@webrtc@@QEAA@AEBV01@@Z
    MCAPI DtlsTransportInformation(class webrtc::DtlsTransportInformation const&);

    // symbol: ??0DtlsTransportInformation@webrtc@@QEAA@W4DtlsTransportState@1@@Z
    MCAPI explicit DtlsTransportInformation(::webrtc::DtlsTransportState);

    // symbol:
    // ??0DtlsTransportInformation@webrtc@@QEAA@W4DtlsTransportState@1@V?$optional@W4DtlsTransportTlsRole@webrtc@@@std@@V?$optional@H@4@22V?$unique_ptr@VSSLCertChain@rtc@@U?$default_delete@VSSLCertChain@rtc@@@std@@@4@@Z
    MCAPI
    DtlsTransportInformation(::webrtc::DtlsTransportState, std::optional<::webrtc::DtlsTransportTlsRole>, std::optional<int>, std::optional<int>, std::optional<int>, std::unique_ptr<class rtc::SSLCertChain>);

    // symbol: ??4DtlsTransportInformation@webrtc@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class webrtc::DtlsTransportInformation& operator=(class webrtc::DtlsTransportInformation&&);

    // symbol: ??1DtlsTransportInformation@webrtc@@QEAA@XZ
    MCAPI ~DtlsTransportInformation();

    // NOLINTEND
};

}; // namespace webrtc
