#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISceneStack {
public:
    // ISceneStack inner types declare
    // clang-format off
    struct SceneElement;
    struct PendingSceneStackChange;
    // clang-format on

    // ISceneStack inner types define
    enum class FlushMode : int {};

    struct SceneElement {};

    struct PendingSceneStackChange {
    public:
        // PendingSceneStackChange inner types define
        enum class Kind : int {};
    };
};
