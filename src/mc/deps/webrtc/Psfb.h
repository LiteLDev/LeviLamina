#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtcpPacket.h"
#include "mc/deps/webrtc/detail/ArrayView.h"
#include "mc/deps/webrtc/detail/FunctionView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class RtcpPacket; }
// clang-format on

namespace webrtc::rtcp {

class Psfb : public ::webrtc::rtcp::RtcpPacket {
public:
    // prevent constructor by default
    Psfb& operator=(Psfb const&);
    Psfb(Psfb const&);
    Psfb();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1Psfb@rtcp@webrtc@@UEAA@XZ
    virtual ~Psfb() = default;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ?CreateCommonFeedback@Psfb@rtcp@webrtc@@IEBAXPEAE@Z
    MCAPI void CreateCommonFeedback(uchar*) const;

    // symbol: ?ParseCommonFeedback@Psfb@rtcp@webrtc@@IEAAXPEBE@Z
    MCAPI void ParseCommonFeedback(uchar const*);

    // NOLINTEND
};

}; // namespace webrtc::rtcp
