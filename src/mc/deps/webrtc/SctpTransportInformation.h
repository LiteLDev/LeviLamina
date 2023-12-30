#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/SctpTransportState.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DtlsTransportInterface; }
// clang-format on

namespace webrtc {

class SctpTransportInformation {
public:
    // prevent constructor by default
    SctpTransportInformation();

public:
    // NOLINTBEGIN
    // symbol: ??0SctpTransportInformation@webrtc@@QEAA@AEBV01@@Z
    MCAPI SctpTransportInformation(class webrtc::SctpTransportInformation const&);

    // symbol: ??0SctpTransportInformation@webrtc@@QEAA@W4SctpTransportState@1@@Z
    MCAPI explicit SctpTransportInformation(::webrtc::SctpTransportState);

    // symbol:
    // ??0SctpTransportInformation@webrtc@@QEAA@W4SctpTransportState@1@V?$scoped_refptr@VDtlsTransportInterface@webrtc@@@rtc@@V?$optional@N@std@@V?$optional@H@6@@Z
    MCAPI
    SctpTransportInformation(::webrtc::SctpTransportState, class rtc::scoped_refptr<class webrtc::DtlsTransportInterface>, std::optional<double>, std::optional<int>);

    // symbol: ??4SctpTransportInformation@webrtc@@QEAAAEAV01@AEBV01@@Z
    MCAPI class webrtc::SctpTransportInformation& operator=(class webrtc::SctpTransportInformation const&);

    // symbol: ??1SctpTransportInformation@webrtc@@QEAA@XZ
    MCAPI ~SctpTransportInformation();

    // NOLINTEND
};

}; // namespace webrtc
