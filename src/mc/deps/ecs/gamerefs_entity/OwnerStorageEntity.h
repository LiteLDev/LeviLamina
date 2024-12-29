#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityRegistry;
// clang-format on

class Actor;

class OwnerStorageEntity {
public:
    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        if (*this) {
            return Entity::tryGetFromEntity(const_cast<EntityContext&>(*mContext), IncludeRemoved);
        }
        return nullptr;
    }

    [[nodiscard]] inline operator bool() const noexcept { return mContext.has_value(); }

public:
    // member variables
    // NOLINTBEGIN
    ::std::optional<::EntityContext> mContext;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnerStorageEntity();

    MCAPI OwnerStorageEntity(::OwnerStorageEntity&& other);

    MCAPI explicit OwnerStorageEntity(::EntityRegistry& registry);

    MCAPI ::EntityContext& _getStackRef() const;

    MCAPI bool _hasValue() const;

    MCAPI void _reset();

    MCAPI ::OwnerStorageEntity& operator=(::OwnerStorageEntity&& other);

    MCAPI ~OwnerStorageEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::OwnerStorageEntity&& other);

    MCAPI void* $ctor(::EntityRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
