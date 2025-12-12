#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SceneStack {
public:
    // SceneStack inner types declare
    // clang-format off
    class SceneStackEvent;
    class PushScreenEvent;
    class PopScreenEvent;
    class PopRangeOfTypeScreenEvent;
    class FlushScreenEvent;
    class ReloadScreenEvent;
    // clang-format on

    // SceneStack inner types define
    class SceneStackEvent {
    public:
        // SceneStackEvent inner types define
        enum class EventType : int {};
    };

    class PushScreenEvent {};

    class PopScreenEvent {};

    class PopRangeOfTypeScreenEvent {};

    class FlushScreenEvent {};

    class ReloadScreenEvent {};
};
