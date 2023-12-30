#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/rtc/RefCountInterface.h"
#include "mc/deps/webrtc/rtc/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class DtlsTransportInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    DtlsTransportInterface& operator=(DtlsTransportInterface const&);
    DtlsTransportInterface(DtlsTransportInterface const&);
    DtlsTransportInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1DtlsTransportInterface@webrtc@@UEAA@XZ
    virtual ~DtlsTransportInterface();

    // NOLINTEND
};

}; // namespace webrtc
