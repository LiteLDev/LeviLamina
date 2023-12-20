#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/RefCountInterface.h"
#include "mc/deps/webrtc/detail/RefCountReleaseStatus.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RefCountInterface; }
namespace webrtc { class SessionDescriptionInterface; }
// clang-format on

namespace webrtc {

class SctpTransportInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    SctpTransportInterface& operator=(SctpTransportInterface const&);
    SctpTransportInterface(SctpTransportInterface const&);
    SctpTransportInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1SctpTransportInterface@webrtc@@UEAA@XZ
    virtual ~SctpTransportInterface();

    // NOLINTEND
};

}; // namespace webrtc
