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
    // prevent constructor by default
    Metronome& operator=(Metronome const&);
    Metronome(Metronome const&);
    Metronome();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Metronome() = default;

    // vIndex: 1
    virtual void RequestCallOnNextTick(::absl::AnyInvocable<void() &&>);

    // vIndex: 2
    virtual ::webrtc::TimeDelta TickPeriod() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace webrtc
