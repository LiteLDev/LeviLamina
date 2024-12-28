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
    // prevent constructor by default
    SctpSidAllocator& operator=(SctpSidAllocator const&);
    SctpSidAllocator(SctpSidAllocator const&);
    SctpSidAllocator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::StreamId> AllocateSid(::rtc::SSLRole);

    MCAPI void ReleaseSid(::webrtc::StreamId);

    MCAPI bool ReserveSid(::webrtc::StreamId);

    MCAPI ~SctpSidAllocator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
