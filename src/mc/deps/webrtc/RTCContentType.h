#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCContentType {
public:
    // prevent constructor by default
    RTCContentType& operator=(RTCContentType const&);
    RTCContentType(RTCContentType const&);
    RTCContentType();

public:
    // NOLINTBEGIN
    // symbol: ?kScreenshare@RTCContentType@webrtc@@2QEBDEB
    MCAPI static char const* const kScreenshare;

    // symbol: ?kUnspecified@RTCContentType@webrtc@@2QEBDEB
    MCAPI static char const* const kUnspecified;

    // NOLINTEND
};

}; // namespace webrtc
