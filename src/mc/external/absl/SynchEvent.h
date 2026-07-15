#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl {

struct SynchEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkf06c28;
    ::ll::UntypedStorage<8, 8> mUnk4052c4;
    ::ll::UntypedStorage<8, 8> mUnk62ceaf;
    ::ll::UntypedStorage<8, 8> mUnkb437f0;
    ::ll::UntypedStorage<8, 8> mUnk805f04;
    ::ll::UntypedStorage<1, 1> mUnk4b1dae;
    ::ll::UntypedStorage<1, 1> mUnk6000a5;
    // NOLINTEND

public:
    // prevent constructor by default
    SynchEvent& operator=(SynchEvent const&);
    SynchEvent(SynchEvent const&);
    SynchEvent();
};

} // namespace absl
