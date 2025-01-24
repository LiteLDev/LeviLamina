#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class OwnerStorageEntity;
class WeakStorageEntity;
// clang-format on

class Actor;

class StackResultStorageEntity {
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
    // prevent constructor by default
    StackResultStorageEntity& operator=(StackResultStorageEntity const&);
    StackResultStorageEntity(StackResultStorageEntity const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StackResultStorageEntity(::StackResultStorageEntity&& other);

    MCAPI explicit StackResultStorageEntity(::OwnerStorageEntity const& ownerStorage);

    MCAPI explicit StackResultStorageEntity(::WeakStorageEntity const& weakStorage);

    MCFOLD ::EntityContext& _getStackRef() const;

    MCFOLD bool _hasValue() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::StackResultStorageEntity&& other);

    MCAPI void* $ctor(::OwnerStorageEntity const& ownerStorage);

    MCAPI void* $ctor(::WeakStorageEntity const& weakStorage);
    // NOLINTEND
};
