#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelComponent {
public:
    // prevent constructor by default
    LevelComponent& operator=(LevelComponent const&);
    LevelComponent(LevelComponent const&);
    LevelComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit LevelComponent(std::unique_ptr<class ILevel> level);

    MCAPI class ILevel& getLevel();

    MCAPI ~LevelComponent();

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
