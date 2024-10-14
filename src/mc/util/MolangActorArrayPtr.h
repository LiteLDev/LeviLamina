#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorArrayPtr {
public:
    // prevent constructor by default
    MolangActorArrayPtr& operator=(MolangActorArrayPtr const&);
    MolangActorArrayPtr(MolangActorArrayPtr const&);
    MolangActorArrayPtr();

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
