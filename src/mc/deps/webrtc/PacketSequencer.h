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
    // prevent constructor by default
    PacketSequencer& operator=(PacketSequencer const&);
    PacketSequencer(PacketSequencer const&);
    PacketSequencer();

public:
    // NOLINTBEGIN
    // symbol: ?CanSendPaddingOnMediaSsrc@PacketSequencer@webrtc@@QEBA_NXZ
    MCAPI bool CanSendPaddingOnMediaSsrc() const;

    // symbol: ??0PacketSequencer@webrtc@@QEAA@IV?$optional@I@std@@_NPEAVClock@1@@Z
    MCAPI PacketSequencer(uint, std::optional<uint>, bool, class webrtc::Clock*);

    // symbol: ?PopulateRtpState@PacketSequencer@webrtc@@QEBAXAEAURtpState@2@@Z
    MCAPI void PopulateRtpState(struct webrtc::RtpState&) const;

    // symbol: ?Sequence@PacketSequencer@webrtc@@QEAAXAEAVRtpPacketToSend@2@@Z
    MCAPI void Sequence(class webrtc::RtpPacketToSend&);

    // symbol: ?SetRtpState@PacketSequencer@webrtc@@QEAAXAEBURtpState@2@@Z
    MCAPI void SetRtpState(struct webrtc::RtpState const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?PopulatePaddingFields@PacketSequencer@webrtc@@AEAAXAEAVRtpPacketToSend@2@@Z
    MCAPI void PopulatePaddingFields(class webrtc::RtpPacketToSend&);

    // symbol: ?UpdateLastPacketState@PacketSequencer@webrtc@@AEAAXAEBVRtpPacketToSend@2@@Z
    MCAPI void UpdateLastPacketState(class webrtc::RtpPacketToSend const&);

    // NOLINTEND
};

}; // namespace webrtc
