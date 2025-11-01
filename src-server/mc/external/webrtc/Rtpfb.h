#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcpPacket.h"

namespace webrtc::rtcp {

class Rtpfb : public ::webrtc::rtcp::RtcpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkce9a35;
    // NOLINTEND

public:
    // prevent constructor by default
    Rtpfb& operator=(Rtpfb const&);
    Rtpfb(Rtpfb const&);
    Rtpfb();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Rtpfb() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateCommonFeedback(uchar* payload) const;

    MCNAPI void ParseCommonFeedback(uchar const* payload);
    // NOLINTEND

};

}
