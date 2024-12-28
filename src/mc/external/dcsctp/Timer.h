#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/StrongAlias.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class Timeout; }
namespace dcsctp { class TimerGenerationTag; }
namespace dcsctp { class TimerIDTag; }
namespace dcsctp { struct TimerOptions; }
namespace webrtc { class TimeDelta; }
// clang-format on

namespace dcsctp {

class Timer {
public:
    // prevent constructor by default
    Timer& operator=(Timer const&);
    Timer(Timer const&);
    Timer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void Start();

    MCAPI void Stop();

    MCAPI
    Timer(::webrtc::StrongAlias<::dcsctp::TimerIDTag, uint>, ::std::string_view, ::std::function<::webrtc::TimeDelta()>, ::std::function<void()>, ::std::unique_ptr<::dcsctp::Timeout>, ::dcsctp::TimerOptions const&);

    MCAPI void Trigger(::webrtc::StrongAlias<::dcsctp::TimerGenerationTag, uint>);

    MCAPI ~Timer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::webrtc::StrongAlias<::dcsctp::TimerIDTag, uint>, ::std::string_view, ::std::function<::webrtc::TimeDelta()>, ::std::function<void()>, ::std::unique_ptr<::dcsctp::Timeout>, ::dcsctp::TimerOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace dcsctp
