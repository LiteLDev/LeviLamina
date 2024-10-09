#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/entity/gamerefs_entity/StackResultStorageEntity.h"

class Actor;
class EntityRegistry;

class WeakStorageEntity {
public:
    WeakRef<EntityRegistry> mRegistry;
    class EntityId          mEntity;

    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        return StackResultStorageEntity(*this).tryUnwrap<Entity, IncludeRemoved>();
    }

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
};
