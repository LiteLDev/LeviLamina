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

class IceTransportInterface : public ::rtc::RefCountInterface {
public:
    // prevent constructor by default
    IceTransportInterface& operator=(IceTransportInterface const&);
    IceTransportInterface(IceTransportInterface const&);
    IceTransportInterface();

public:
    // NOLINTBEGIN
    // vIndex: 2, symbol: ??1IceTransportInterface@webrtc@@UEAA@XZ
    virtual ~IceTransportInterface();

    // NOLINTEND
};

}; // namespace webrtc
