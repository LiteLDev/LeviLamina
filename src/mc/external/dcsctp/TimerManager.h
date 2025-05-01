#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TimeoutTag; }
namespace dcsctp { class Timer; }
namespace dcsctp { struct TimerOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class TimerManager {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::dcsctp::Timer>
    CreateTimer(::std::string_view, ::std::function<::webrtc::TimeDelta()>, ::dcsctp::TimerOptions const&);

    MCNAPI void HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64>);

    MCNAPI ~TimerManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
