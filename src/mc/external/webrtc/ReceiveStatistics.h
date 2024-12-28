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
    // prevent constructor by default
    ReceiveStatistics& operator=(ReceiveStatistics const&);
    ReceiveStatistics(ReceiveStatistics const&);
    ReceiveStatistics();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ReceiveStatistics() /*override*/;

    // vIndex: 2
    virtual ::webrtc::StreamStatistician* GetStatistician(uint) const = 0;

    // vIndex: 4
    virtual void SetMaxReorderingThreshold(int) = 0;

    // vIndex: 3
    virtual void SetMaxReorderingThreshold(uint, int) = 0;

    // vIndex: 5
    virtual void EnableRetransmitDetection(uint, bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
