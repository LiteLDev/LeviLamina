#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct RtpReceiveStats; }
namespace webrtc { struct StreamDataCounters; }
// clang-format on

namespace webrtc {

class StreamStatistician {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StreamStatistician() = default;

    virtual ::webrtc::RtpReceiveStats GetStats() const = 0;

    virtual ::std::optional<int> GetFractionLostInPercent() const = 0;

    virtual ::webrtc::StreamDataCounters GetReceiveStreamDataCounters() const = 0;

    virtual uint BitrateReceived() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
