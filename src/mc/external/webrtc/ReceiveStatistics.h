#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/ReceiveStatisticsProvider.h"
#include "mc/external/webrtc/RtpPacketSinkInterface.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamStatistician; }
// clang-format on

namespace webrtc {

class ReceiveStatistics : public ::webrtc::ReceiveStatisticsProvider, public ::webrtc::RtpPacketSinkInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReceiveStatistics() /*override*/ = default;

    virtual ::webrtc::StreamStatistician* GetStatistician(uint) const = 0;

    virtual void SetMaxReorderingThreshold(int) = 0;

    virtual void SetMaxReorderingThreshold(uint, int) = 0;

    virtual void EnableRetransmitDetection(uint, bool) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
