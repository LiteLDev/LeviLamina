#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInfo {
public:
    // NOLINTBEGIN
    MCAPI ActorInfo();

    MCAPI ActorInfo(struct ActorInfo const&);

    MCAPI void load(class CompoundTag const* tag);

    MCAPI struct ActorInfo& operator=(struct ActorInfo const&);

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI ~ActorInfo();

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
