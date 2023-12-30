#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc::rtcp {

class Rtpfb : public ::webrtc::rtcp::RtcpPacket {
public:
    // prevent constructor by default
    Rtpfb& operator=(Rtpfb const&);
    Rtpfb(Rtpfb const&);
    Rtpfb();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Rtpfb@rtcp@webrtc@@UEAA@XZ
    virtual ~Rtpfb() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?CreateCommonFeedback@Rtpfb@rtcp@webrtc@@IEBAXPEAE@Z
    MCAPI void CreateCommonFeedback(uchar*) const;

    // symbol: ?ParseCommonFeedback@Rtpfb@rtcp@webrtc@@IEAAXPEBE@Z
    MCAPI void ParseCommonFeedback(uchar const*);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
