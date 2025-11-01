#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/CallStatsObserver.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataRate; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class RemoteBitrateEstimator : public ::webrtc::CallStatsObserver {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ~RemoteBitrateEstimator() /*override*/ = default;

    // vIndex: 2
    virtual void IncomingPacket(::webrtc::RtpPacketReceived const&) = 0;

    // vIndex: 3
    virtual void RemoveStream(uint) = 0;

    // vIndex: 4
    virtual ::webrtc::DataRate LatestEstimate() const = 0;

    // vIndex: 5
    virtual ::webrtc::TimeDelta Process() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
