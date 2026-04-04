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

    virtual void
    OnTransportFeedback(::webrtc::Timestamp receive_time, ::webrtc::rtcp::TransportFeedback const& feedback);

    virtual void OnReceiverEstimatedMaxBitrate(::webrtc::Timestamp receive_time, ::webrtc::DataRate bitrate);

    virtual void
    OnReport(::webrtc::Timestamp receive_time, ::rtc::ArrayView<::webrtc::ReportBlockData const> report_blocks);

    virtual void OnRttUpdate(::webrtc::Timestamp receive_time, ::webrtc::TimeDelta rtt);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
