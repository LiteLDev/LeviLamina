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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkbdac31;
    ::ll::UntypedStorage<8, 32> mUnk4203a7;
    ::ll::UntypedStorage<8, 40> mUnk3e63f5;
    ::ll::UntypedStorage<8, 64> mUnk6f8e87;
    ::ll::UntypedStorage<8, 64> mUnkb772b0;
    ::ll::UntypedStorage<8, 8> mUnk6095c0;
    ::ll::UntypedStorage<8, 8> mUnkcf6123;
    ::ll::UntypedStorage<4, 4> mUnka74756;
    ::ll::UntypedStorage<1, 1> mUnk86f63a;
    ::ll::UntypedStorage<4, 4> mUnka76e6d;
    // NOLINTEND

public:
    // prevent constructor by default
    Timer& operator=(Timer const&);
    Timer(Timer const&);
    Timer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void Start();

    MCNAPI void Stop();

    MCNAPI Timer(::webrtc::StrongAlias<::dcsctp::TimerIDTag, uint> id, ::std::string_view name, ::std::function<::webrtc::TimeDelta()> on_expired, ::std::function<void()> unregister_handler, ::std::unique_ptr<::dcsctp::Timeout> timeout, ::dcsctp::TimerOptions const& options);

    MCNAPI void Trigger(::webrtc::StrongAlias<::dcsctp::TimerGenerationTag, uint> generation);

    MCNAPI ~Timer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::StrongAlias<::dcsctp::TimerIDTag, uint> id, ::std::string_view name, ::std::function<::webrtc::TimeDelta()> on_expired, ::std::function<void()> unregister_handler, ::std::unique_ptr<::dcsctp::Timeout> timeout, ::dcsctp::TimerOptions const& options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
