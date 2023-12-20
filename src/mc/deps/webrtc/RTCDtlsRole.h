#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RTCDtlsRole {
public:
    // prevent constructor by default
    RTCDtlsRole& operator=(RTCDtlsRole const&);
    RTCDtlsRole(RTCDtlsRole const&);
    RTCDtlsRole();

public:
    // NOLINTBEGIN
    // symbol: ?kClient@RTCDtlsRole@webrtc@@2QEBDEB
    MCAPI static char const* const kClient;

    // symbol: ?kServer@RTCDtlsRole@webrtc@@2QEBDEB
    MCAPI static char const* const kServer;

    // symbol: ?kUnknown@RTCDtlsRole@webrtc@@2QEBDEB
    MCAPI static char const* const kUnknown;

    // NOLINTEND
};

}; // namespace webrtc
