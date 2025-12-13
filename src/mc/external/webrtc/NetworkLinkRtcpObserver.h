#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class TransportFeedback; }
// clang-format on

namespace webrtc {

class NetworkLinkRtcpObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NetworkLinkRtcpObserver() = default;

    virtual void OnTransportFeedback(::webrtc::Timestamp, ::webrtc::rtcp::TransportFeedback const&);

    virtual void OnReceiverEstimatedMaxBitrate(::webrtc::Timestamp, ::webrtc::DataRate);

    virtual void OnReport(::webrtc::Timestamp, ::rtc::ArrayView<::webrtc::ReportBlockData const>);

    virtual void OnRttUpdate(::webrtc::Timestamp, ::webrtc::TimeDelta);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
