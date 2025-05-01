#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamId; }
// clang-format on

namespace webrtc {

struct SctpSidAllocator {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::StreamId> AllocateSid(::rtc::SSLRole);

    MCNAPI void ReleaseSid(::webrtc::StreamId);

    MCNAPI bool ReserveSid(::webrtc::StreamId);

    MCNAPI ~SctpSidAllocator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
