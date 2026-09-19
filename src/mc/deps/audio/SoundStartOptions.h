#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Audio {

class SoundStartOptions {
public:
    // SoundStartOptions inner types declare
    // clang-format off
    class AfterDelay;
    struct OnSignal;
    struct WhenReady;
    // clang-format on

    // SoundStartOptions inner types define
    class AfterDelay {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkd1c7bc;
        // NOLINTEND

    public:
        // prevent constructor by default
        AfterDelay& operator=(AfterDelay const&);
        AfterDelay(AfterDelay const&);
        AfterDelay();
    };

    struct OnSignal {};

    struct WhenReady {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkc80c9f;
    // NOLINTEND

public:
    // prevent constructor by default
    SoundStartOptions& operator=(SoundStartOptions const&);
    SoundStartOptions(SoundStartOptions const&);
    SoundStartOptions();
};

} // namespace Audio
