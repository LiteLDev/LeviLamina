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
    MCAPI void* ctor$(class StackResultStorageEntity&& other);

    MCAPI void* ctor$(class WeakStorageEntity const& weakStorage);

    MCAPI void* ctor$(class OwnerStorageEntity const& ownerStorage);

    // NOLINTEND
};
