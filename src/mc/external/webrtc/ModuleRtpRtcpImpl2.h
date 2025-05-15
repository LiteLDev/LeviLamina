#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RTCPSender.h"
#include "mc/external/webrtc/RtpRtcpInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class ModuleRtpRtcpImpl2 {
public:
    // ModuleRtpRtcpImpl2 inner types declare
    // clang-format off
    struct RtpSenderContext;
    // clang-format on

    // ModuleRtpRtcpImpl2 inner types define
    struct RtpSenderContext {
    public:
        // prevent constructor by default
        RtpSenderContext();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RtpSenderContext(::webrtc::TaskQueueBase&, ::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::TaskQueueBase&, ::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    ModuleRtpRtcpImpl2();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCPSender::FeedbackState GetFeedbackState();

    MCNAPI void MaybeSendRtcp();

    MCNAPI void MaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp);

    MCNAPI explicit ModuleRtpRtcpImpl2(::webrtc::RtpRtcpInterface::Configuration const&);

    MCNAPI void PeriodicUpdate();

    MCNAPI void ScheduleMaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp, ::webrtc::TimeDelta);

    MCNAPI void ScheduleRtcpSendEvaluation(::webrtc::TimeDelta);

    MCNAPI bool StorePackets() const;

    MCNAPI bool TimeToSendFullNackList(int64) const;

    MCNAPI int64 rtt_ms() const;

    MCNAPI void set_rtt_ms(int64);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>
    Create(::webrtc::RtpRtcpInterface::Configuration const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForRtpRtcpInterface();

    MCNAPI static void** $vftableForModuleRtpRtcp();
    // NOLINTEND
};

} // namespace webrtc
