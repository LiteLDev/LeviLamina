#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtcpFeedbackSenderInterface; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpRtcpInterface; }
namespace webrtc { struct PacedPacketInfo; }
// clang-format on

namespace webrtc {

class PacketRouter {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddRembModuleCandidate(::webrtc::RtcpFeedbackSenderInterface*, bool);

    MCNAPI void AddSendRtpModule(::webrtc::RtpRtcpInterface*, bool);

    MCNAPI void AddSendRtpModuleToMap(::webrtc::RtpRtcpInterface*, uint);

    MCNAPI void DetermineActiveRembModule();

    MCNAPI void MaybeRemoveRembModuleCandidate(::webrtc::RtcpFeedbackSenderInterface*, bool);

    MCNAPI PacketRouter();

    MCNAPI void RegisterNotifyBweCallback(::absl::AnyInvocable<
                                          void(::webrtc::RtpPacketToSend const&, ::webrtc::PacedPacketInfo const&)>);

    MCNAPI void RemoveSendRtpModule(::webrtc::RtpRtcpInterface*);

    MCNAPI void RemoveSendRtpModuleFromMap(uint);

    MCNAPI bool SupportsRtxPayloadPadding() const;

    MCNAPI void UnsetActiveRembModule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
