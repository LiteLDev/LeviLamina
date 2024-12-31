#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtcpPacketTypeCounter; }
// clang-format on

namespace webrtc {

class RtcpPacketTypeCounterObserver {
public:
    // prevent constructor by default
    RtcpPacketTypeCounterObserver& operator=(RtcpPacketTypeCounterObserver const&);
    RtcpPacketTypeCounterObserver(RtcpPacketTypeCounterObserver const&);
    RtcpPacketTypeCounterObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcpPacketTypeCounterObserver() = default;

    // vIndex: 1
    virtual void RtcpPacketTypesCounterUpdated(uint, ::webrtc::RtcpPacketTypeCounter const&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
