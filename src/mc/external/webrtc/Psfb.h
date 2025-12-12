#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcpPacket.h"

namespace webrtc::rtcp {

class Psfb : public ::webrtc::rtcp::RtcpPacket {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3d8a02;
    // NOLINTEND

public:
    // prevent constructor by default
    Psfb& operator=(Psfb const&);
    Psfb(Psfb const&);
    Psfb();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Psfb() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void CreateCommonFeedback(uchar* payload) const;

    MCNAPI void ParseCommonFeedback(uchar const* payload);
    // NOLINTEND
};

} // namespace webrtc::rtcp
