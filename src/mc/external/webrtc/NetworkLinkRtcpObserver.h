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
    // vIndex: 0
    virtual ~NetworkLinkRtcpObserver() = default;

    // vIndex: 1
    virtual void OnTransportFeedback(::webrtc::Timestamp, ::webrtc::rtcp::TransportFeedback const&);

    // vIndex: 2
    virtual void OnReceiverEstimatedMaxBitrate(::webrtc::Timestamp, ::webrtc::DataRate);

    // vIndex: 3
    virtual void OnReport(::webrtc::Timestamp, ::rtc::ArrayView<::webrtc::ReportBlockData const>);

    // vIndex: 4
    virtual void OnRttUpdate(::webrtc::Timestamp, ::webrtc::TimeDelta);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
