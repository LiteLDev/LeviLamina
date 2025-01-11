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
    MCAPI bool CanSendPaddingOnMediaSsrc() const;

    MCAPI PacketSequencer(uint, ::std::optional<uint>, bool, ::webrtc::Clock*);

    MCAPI void PopulatePaddingFields(::webrtc::RtpPacketToSend&);

    MCAPI void PopulateRtpState(::webrtc::RtpState&) const;

    MCAPI void Sequence(::webrtc::RtpPacketToSend&);

    MCAPI void SetRtpState(::webrtc::RtpState const&);

    MCAPI void UpdateLastPacketState(::webrtc::RtpPacketToSend const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint, ::std::optional<uint>, bool, ::webrtc::Clock*);
    // NOLINTEND
};

} // namespace webrtc
