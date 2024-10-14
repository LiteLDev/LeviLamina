#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

struct MolangActorIdArrayPtr {
public:
    std::vector<ActorUniqueID> mActorIds;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangActorIdArrayPtr(std::vector<struct ActorUniqueID> actorIds);

    MCAPI ~MolangActorIdArrayPtr();

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
