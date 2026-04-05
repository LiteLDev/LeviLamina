#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct TouchEventData {
public:
    // TouchEventData inner types define
    enum class EventType : int {
        TouchMove = 0,
        TouchDown = 1,
        TouchUp   = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk2c2108;
    ::ll::UntypedStorage<4, 4> mUnk8967ed;
    ::ll::UntypedStorage<4, 4> mUnk1d254f;
    ::ll::UntypedStorage<4, 4> mUnkee1a09;
    ::ll::UntypedStorage<1, 7> mUnk478d1b;
    // NOLINTEND

public:
    // prevent constructor by default
    TouchEventData& operator=(TouchEventData const&);
    TouchEventData(TouchEventData const&);
    TouchEventData();
};

} // namespace cohtml
