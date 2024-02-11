#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContext.h"

class Actor;

class OwnerStorageEntity {
public:
    std::optional<EntityContext> mContext;

    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        if (_hasValue()) {
            return Entity::tryGetFromEntity(_getStackRef(), IncludeRemoved);
        }
        return nullptr;
    }

    [[nodiscard]] inline operator bool() const { return _hasValue(); } // NOLINT

public:
    // prevent constructor by default
    OwnerStorageEntity& operator=(OwnerStorageEntity const&);
    OwnerStorageEntity(OwnerStorageEntity const&);

    // protected:
    // NOLINTBEGIN
    // symbol: ??0OwnerStorageEntity@@IEAA@XZ
    MCAPI OwnerStorageEntity();

    // symbol: ??0OwnerStorageEntity@@IEAA@AEAVEntityRegistry@@@Z
    MCAPI explicit OwnerStorageEntity(class EntityRegistry&);

    // symbol: ??0OwnerStorageEntity@@IEAA@$$QEAV0@@Z
    MCAPI OwnerStorageEntity(class OwnerStorageEntity&& other);

    // symbol: ?_getStackRef@OwnerStorageEntity@@IEBAAEAVEntityContext@@XZ
    MCAPI class EntityContext& _getStackRef() const;

    // symbol: ?_hasValue@OwnerStorageEntity@@IEBA_NXZ
    MCAPI bool _hasValue() const;

    // symbol: ?_reset@OwnerStorageEntity@@IEAAXXZ
    MCAPI void _reset();

    // symbol: ??4OwnerStorageEntity@@IEAAAEAV0@$$QEAV0@@Z
    MCAPI class OwnerStorageEntity& operator=(class OwnerStorageEntity&& other);

    // symbol: ??1OwnerStorageEntity@@IEAA@XZ
    MCAPI ~OwnerStorageEntity();

    // NOLINTEND
};
