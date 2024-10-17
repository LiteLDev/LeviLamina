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
    MCAPI void* ctor$(struct ActorInfo const&);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
