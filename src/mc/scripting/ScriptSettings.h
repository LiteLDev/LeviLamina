#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptSettings {
public:
    // prevent constructor by default
    ScriptSettings& operator=(ScriptSettings const&);

public:
    // NOLINTBEGIN
    MCAPI ScriptSettings();

    MCAPI ScriptSettings(struct ScriptSettings const&);

    MCAPI ~ScriptSettings();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
