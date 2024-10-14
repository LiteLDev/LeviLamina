#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorArrayPtr {
public:
    std::vector<class Actor*> mActors;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangActorArrayPtr(std::vector<class Actor*>);

    MCAPI ~MolangActorArrayPtr();

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
