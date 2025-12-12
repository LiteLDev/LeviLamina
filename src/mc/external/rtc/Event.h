#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace rtc {

class Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk35a08b;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Event();

    MCNAPI Event(bool manual_reset, bool initially_signaled);

    MCNAPI void Reset();

    MCNAPI void Set();

    MCNAPI bool Wait(::webrtc::TimeDelta give_up_after, ::webrtc::TimeDelta);

    MCNAPI ~Event();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::webrtc::TimeDelta const& kForever();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(bool manual_reset, bool initially_signaled);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
