#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveRequestComponent {
public:
    // prevent constructor by default
    MoveRequestComponent& operator=(MoveRequestComponent const&);
    MoveRequestComponent(MoveRequestComponent const&);
    MoveRequestComponent();

public:
    // NOLINTBEGIN
    MCAPI MoveRequestComponent(struct MoveRequestComponent&&);

    MCAPI struct MoveRequestComponent& operator=(struct MoveRequestComponent&&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
