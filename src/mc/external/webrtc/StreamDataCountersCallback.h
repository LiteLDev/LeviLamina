#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { struct StreamDataCounters; }
// clang-format on

namespace webrtc {

class StreamDataCountersCallback {
public:
    // prevent constructor by default
    StreamDataCountersCallback& operator=(StreamDataCountersCallback const&);
    StreamDataCountersCallback(StreamDataCountersCallback const&);
    StreamDataCountersCallback();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StreamDataCountersCallback() = default;

    // vIndex: 1
    virtual void DataCountersUpdated(::webrtc::StreamDataCounters const&, uint) = 0;
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
