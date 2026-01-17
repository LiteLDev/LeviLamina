#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct MouseEventData {
public:
    // MouseEventData inner types define
    enum class EventType : int {
        MouseMove  = 0,
        MouseDown  = 1,
        MouseUp    = 2,
        MouseWheel = 3,
        MouseLeave = 4,
    };

    enum class MouseButton : int {
        ButtonNone    = 0,
        ButtonLeft    = 0,
        ButtonMiddle  = 1,
        ButtonRight   = 2,
        ButtonBack    = 3,
        ButtonForward = 4,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7e1623;
    ::ll::UntypedStorage<4, 4> mUnk9203d7;
    ::ll::UntypedStorage<4, 4> mUnk340791;
    ::ll::UntypedStorage<4, 4> mUnk2490bc;
    ::ll::UntypedStorage<4, 4> mUnk3fa94e;
    ::ll::UntypedStorage<4, 4> mUnk58890a;
    ::ll::UntypedStorage<4, 4> mUnk8a94da;
    ::ll::UntypedStorage<4, 4> mUnkfd65b6;
    ::ll::UntypedStorage<1, 7> mUnke2d279;
    ::ll::UntypedStorage<1, 5> mUnk5849fe;
    // NOLINTEND

public:
    // prevent constructor by default
    MouseEventData& operator=(MouseEventData const&);
    MouseEventData(MouseEventData const&);
    MouseEventData();
};

} // namespace cohtml
