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
    // prevent constructor by default
    NetworkLinkRtcpObserver& operator=(NetworkLinkRtcpObserver const&);
    NetworkLinkRtcpObserver(NetworkLinkRtcpObserver const&);
    NetworkLinkRtcpObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetworkLinkRtcpObserver();

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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnTransportFeedback(::webrtc::Timestamp, ::webrtc::rtcp::TransportFeedback const&);

    MCAPI void $OnReceiverEstimatedMaxBitrate(::webrtc::Timestamp, ::webrtc::DataRate);

    MCAPI void $OnReport(::webrtc::Timestamp, ::rtc::ArrayView<::webrtc::ReportBlockData const>);

    MCAPI void $OnRttUpdate(::webrtc::Timestamp, ::webrtc::TimeDelta);
    // NOLINTEND
};

} // namespace webrtc
