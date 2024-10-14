#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WeakStorageEntity {
public:
    // prevent constructor by default
    WeakStorageEntity& operator=(WeakStorageEntity const&);
    WeakStorageEntity(WeakStorageEntity const&);

public:
    // NOLINTBEGIN
    MCAPI bool operator==(class WeakStorageEntity const& w) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI WeakStorageEntity();

    MCAPI explicit WeakStorageEntity(class EntityContext const& stackRef);

    MCAPI explicit WeakStorageEntity(class OwnerStorageEntity const& ownerStorage);

    MCAPI explicit WeakStorageEntity(class StackResultStorageEntity const& stackResultStorage);

    MCAPI bool _isSet() const;

    MCAPI void _reset();

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
