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
        // member functions
        // NOLINTBEGIN
        MCAPI RtpSenderContext(::webrtc::TaskQueueBase&, ::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::TaskQueueBase&, ::webrtc::RtpRtcpInterface::Configuration const&);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::webrtc::RTCPSender::FeedbackState GetFeedbackState();

    MCAPI void MaybeSendRtcp();

    MCAPI void MaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp);

    MCAPI explicit ModuleRtpRtcpImpl2(::webrtc::RtpRtcpInterface::Configuration const&);

    MCAPI void PeriodicUpdate();

    MCAPI void ScheduleMaybeSendRtcpAtOrAfterTimestamp(::webrtc::Timestamp, ::webrtc::TimeDelta);

    MCAPI void ScheduleRtcpSendEvaluation(::webrtc::TimeDelta);

    MCAPI bool StorePackets() const;

    MCAPI bool TimeToSendFullNackList(int64) const;

    MCAPI int64 rtt_ms() const;

    MCAPI void set_rtt_ms(int64);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::webrtc::ModuleRtpRtcpImpl2>
    Create(::webrtc::RtpRtcpInterface::Configuration const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::RtpRtcpInterface::Configuration const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForRtpRtcpInterface();

    MCAPI static void** $vftableForModuleRtpRtcp();
    // NOLINTEND
};

} // namespace webrtc
