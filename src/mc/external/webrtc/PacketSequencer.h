#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class PacketSequencer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool CanSendPaddingOnMediaSsrc() const;

    MCNAPI PacketSequencer(uint, ::std::optional<uint>, bool, ::webrtc::Clock*);

    MCNAPI void PopulatePaddingFields(::webrtc::RtpPacketToSend&);

    MCNAPI void PopulateRtpState(::webrtc::RtpState&) const;

    MCNAPI void Sequence(::webrtc::RtpPacketToSend&);

    MCNAPI void SetRtpState(::webrtc::RtpState const&);

    MCNAPI void UpdateLastPacketState(::webrtc::RtpPacketToSend const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(uint, ::std::optional<uint>, bool, ::webrtc::Clock*);
    // NOLINTEND
};

} // namespace webrtc
