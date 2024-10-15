#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

class Actor;

class OwnerStorageEntity {
public:
    std::optional<EntityContext> mContext;

    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        if (*this) {
            return Entity::tryGetFromEntity(const_cast<EntityContext&>(*mContext), IncludeRemoved);
        }
        return nullptr;
    }

    [[nodiscard]] inline operator bool() const noexcept { return mContext.has_value(); }

public:
    // prevent constructor by default
    OwnerStorageEntity& operator=(OwnerStorageEntity const&);
    OwnerStorageEntity(OwnerStorageEntity const&);

    // protected:
    // NOLINTBEGIN
    MCAPI OwnerStorageEntity();

    MCAPI explicit OwnerStorageEntity(class EntityRegistry& registry);

    MCAPI OwnerStorageEntity(class OwnerStorageEntity&& other);

    MCAPI class EntityContext& _getStackRef() const;

    MCAPI bool _hasValue() const;

    MCAPI void _reset();

    MCAPI class OwnerStorageEntity& operator=(class OwnerStorageEntity&& other);

    MCAPI ~OwnerStorageEntity();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void* ctor$(class EntityRegistry& registry);

    MCAPI void* ctor$(class OwnerStorageEntity&& other);

    MCAPI void dtor$();

    // NOLINTEND
};
