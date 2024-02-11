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
    // symbol: ??8WeakStorageEntity@@QEBA_NAEBV0@@Z
    MCAPI bool operator==(class WeakStorageEntity const& w) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0WeakStorageEntity@@IEAA@XZ
    MCAPI WeakStorageEntity();

    // symbol: ??0WeakStorageEntity@@IEAA@AEBVEntityContext@@@Z
    MCAPI explicit WeakStorageEntity(class EntityContext const&);

    // symbol: ??0WeakStorageEntity@@IEAA@AEBVOwnerStorageEntity@@@Z
    MCAPI explicit WeakStorageEntity(class OwnerStorageEntity const& ownerStorage);

    // symbol: ??0WeakStorageEntity@@IEAA@AEBVStackResultStorageEntity@@@Z
    MCAPI explicit WeakStorageEntity(class StackResultStorageEntity const& stackResultStorage);

    // symbol: ?_isSet@WeakStorageEntity@@IEBA_NXZ
    MCAPI bool _isSet() const;

    // symbol: ?_reset@WeakStorageEntity@@IEAAXXZ
    MCAPI void _reset();

    // NOLINTEND
};
