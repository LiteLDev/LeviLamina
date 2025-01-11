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
    MCAPI void AddRembModuleCandidate(::webrtc::RtcpFeedbackSenderInterface*, bool);

    MCAPI void AddSendRtpModule(::webrtc::RtpRtcpInterface*, bool);

    MCAPI void AddSendRtpModuleToMap(::webrtc::RtpRtcpInterface*, uint);

    MCAPI void DetermineActiveRembModule();

    MCAPI void MaybeRemoveRembModuleCandidate(::webrtc::RtcpFeedbackSenderInterface*, bool);

    MCAPI PacketRouter();

    MCAPI void RegisterNotifyBweCallback(::absl::AnyInvocable<
                                         void(::webrtc::RtpPacketToSend const&, ::webrtc::PacedPacketInfo const&)>);

    MCAPI void RemoveSendRtpModule(::webrtc::RtpRtcpInterface*);

    MCAPI void RemoveSendRtpModuleFromMap(uint);

    MCAPI bool SupportsRtxPayloadPadding() const;

    MCAPI void UnsetActiveRembModule();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
