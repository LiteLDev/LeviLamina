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
    // prevent constructor by default
    StreamStatistician& operator=(StreamStatistician const&);
    StreamStatistician(StreamStatistician const&);
    StreamStatistician();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StreamStatistician() = default;

    // vIndex: 1
    virtual ::webrtc::RtpReceiveStats GetStats() const = 0;

    // vIndex: 2
    virtual ::std::optional<int> GetFractionLostInPercent() const = 0;

    // vIndex: 3
    virtual ::webrtc::StreamDataCounters GetReceiveStreamDataCounters() const = 0;

    // vIndex: 4
    virtual uint BitrateReceived() const = 0;
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
