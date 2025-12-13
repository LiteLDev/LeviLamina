#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct StreamDataCounters; }
// clang-format on

namespace webrtc {

class StreamDataCountersCallback {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StreamDataCountersCallback() = default;

    virtual void DataCountersUpdated(::webrtc::StreamDataCounters const&, uint) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
