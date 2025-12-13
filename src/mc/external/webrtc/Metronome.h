#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class Metronome {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Metronome() = default;

    virtual void RequestCallOnNextTick(::absl::AnyInvocable<void() &&>);

    virtual ::webrtc::TimeDelta TickPeriod() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
