#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeyComponent {
public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent();

public:
    // NOLINTBEGIN
    MCAPI explicit EntityStorageKeyComponent(std::string const& storageKey);

    MCAPI void addAdditionalSaveData(class Actor const& owner, class CompoundTag& tag) const;

    MCAPI void readAdditionalSaveData(class Actor& owner, class CompoundTag const& tag);

    MCAPI ~EntityStorageKeyComponent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& storageKey);

    MCAPI void dtor$();

    // NOLINTEND
};
