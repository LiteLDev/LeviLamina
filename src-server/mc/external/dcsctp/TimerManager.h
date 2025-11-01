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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk9bc522;
    ::ll::UntypedStorage<8, 16> mUnkca67e3;
    ::ll::UntypedStorage<4, 4> mUnk4dd664;
    // NOLINTEND

public:
    // prevent constructor by default
    TimerManager& operator=(TimerManager const&);
    TimerManager(TimerManager const&);
    TimerManager();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::unique_ptr<::dcsctp::Timer> CreateTimer(::std::string_view name, ::std::function<::webrtc::TimeDelta()> on_expired, ::dcsctp::TimerOptions const& options);

    MCNAPI void HandleTimeout(::webrtc::StrongAlias<::dcsctp::TimeoutTag, uint64> timeout_id);

    MCNAPI ~TimerManager();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
