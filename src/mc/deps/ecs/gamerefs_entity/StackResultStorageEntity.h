#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StackResultStorageEntity {
public:
    // prevent constructor by default
    StackResultStorageEntity& operator=(StackResultStorageEntity const&);
    StackResultStorageEntity(StackResultStorageEntity const&);
    StackResultStorageEntity();

    // protected:
    // NOLINTBEGIN
    MCAPI explicit StackResultStorageEntity(class OwnerStorageEntity const& ownerStorage);

    MCAPI StackResultStorageEntity(class StackResultStorageEntity&& other);

    MCAPI explicit StackResultStorageEntity(class WeakStorageEntity const& weakStorage);

    MCAPI class EntityContext& _getStackRef() const;

    MCAPI bool _hasValue() const;

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
