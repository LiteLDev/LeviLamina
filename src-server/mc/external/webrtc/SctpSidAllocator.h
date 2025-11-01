#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/rtc/SSLRole.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class StreamId; }
// clang-format on

namespace webrtc {

class SctpSidAllocator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnke260d1;
    ::ll::UntypedStorage<1, 1>  mUnkeb1dce;
    // NOLINTEND

public:
    // prevent constructor by default
    SctpSidAllocator& operator=(SctpSidAllocator const&);
    SctpSidAllocator(SctpSidAllocator const&);
    SctpSidAllocator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::StreamId> AllocateSid(::rtc::SSLRole role);

    MCNAPI void ReleaseSid(::webrtc::StreamId sid);

    MCNAPI bool ReserveSid(::webrtc::StreamId sid);

    MCNAPI ~SctpSidAllocator();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
