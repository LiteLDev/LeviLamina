#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSelectorArgs {
public:
    // NOLINTBEGIN
    MCAPI ActorSelectorArgs();

    MCAPI ActorSelectorArgs(struct ActorSelectorArgs&&);

    MCAPI ActorSelectorArgs(struct ActorSelectorArgs const&);

    MCAPI struct ActorSelectorArgs& operator=(struct ActorSelectorArgs&&);

    MCAPI struct ActorSelectorArgs& operator=(struct ActorSelectorArgs const&);

    MCAPI ~ActorSelectorArgs();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    MCAPI static std::pair<int, int> const& DEFAULT_LEVEL();

    MCAPI static std::pair<float, float> const& DEFAULT_X_ROTATION();

    MCAPI static std::pair<float, float> const& DEFAULT_Y_ROTATION();

    // NOLINTEND
};
