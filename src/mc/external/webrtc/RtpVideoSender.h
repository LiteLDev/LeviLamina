#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FecController; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class Frequency; }
namespace webrtc { class RateLimiter; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtpTransportControllerSendInterface; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class Transport; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct RtpConfig; }
namespace webrtc { struct RtpPayloadState; }
namespace webrtc { struct RtpSenderObservers; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class RtpVideoSender {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::DataRate
        CalculateOverheadRate(::webrtc::DataRate, ::webrtc::DataSize, ::webrtc::DataSize, ::webrtc::Frequency) const;

    MCAPI void ConfigureSsrcs(::std::map<uint, ::webrtc::RtpState> const&);

    MCAPI ::webrtc::DataRate GetPostEncodeOverhead() const;

    MCAPI bool IsActiveLocked();

    MCAPI bool NackEnabled() const;

    MCAPI
    RtpVideoSender(::webrtc::Clock*, ::std::map<uint, ::webrtc::RtpState> const&, ::std::map<uint, ::webrtc::RtpPayloadState> const&, ::webrtc::RtpConfig const&, int, ::webrtc::Transport*, ::webrtc::RtpSenderObservers const&, ::webrtc::RtpTransportControllerSendInterface*, ::webrtc::RtcEventLog*, ::webrtc::RateLimiter*, ::std::unique_ptr<::webrtc::FecController>, ::webrtc::FrameEncryptorInterface*, ::webrtc::CryptoOptions const&, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>, ::webrtc::FieldTrialsView const&, ::webrtc::TaskQueueFactory*);

    MCAPI void SetActiveModulesLocked(bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::Clock*, ::std::map<uint, ::webrtc::RtpState> const&, ::std::map<uint, ::webrtc::RtpPayloadState> const&, ::webrtc::RtpConfig const&, int, ::webrtc::Transport*, ::webrtc::RtpSenderObservers const&, ::webrtc::RtpTransportControllerSendInterface*, ::webrtc::RtcEventLog*, ::webrtc::RateLimiter*, ::std::unique_ptr<::webrtc::FecController>, ::webrtc::FrameEncryptorInterface*, ::webrtc::CryptoOptions const&, ::webrtc::scoped_refptr<::webrtc::FrameTransformerInterface>, ::webrtc::FieldTrialsView const&, ::webrtc::TaskQueueFactory*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForStreamFeedbackObserver();

    MCAPI static void** $vftableForEncodedImageCallback();

    MCAPI static void** $vftableForVCMProtectionCallback();

    MCAPI static void** $vftableForFecControllerOverride();
    // NOLINTEND
};

} // namespace webrtc
