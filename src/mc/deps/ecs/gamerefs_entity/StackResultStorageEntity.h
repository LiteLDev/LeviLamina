#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
class OwnerStorageEntity;
class WeakStorageEntity;
// clang-format on

class Actor;

class StackResultStorageEntity : public ::std::optional<::EntityContext> {
public:
    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        if (*this) {
            return Entity::tryGetFromEntity(const_cast<EntityContext&>(**this), IncludeRemoved);
        }
        return nullptr;
    }

public:
    // prevent constructor by default
    StackResultStorageEntity& operator=(StackResultStorageEntity const&);
    StackResultStorageEntity(StackResultStorageEntity const&);
    StackResultStorageEntity() = default;

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit StackResultStorageEntity(nullptr_t);

    MCAPI explicit StackResultStorageEntity(::EntityContext const& entity);
#endif

    MCAPI StackResultStorageEntity(::StackResultStorageEntity&& other);

    MCAPI explicit StackResultStorageEntity(::OwnerStorageEntity const& ownerStorage);

    MCAPI explicit StackResultStorageEntity(::WeakStorageEntity const& weakStorage);

    MCFOLD ::EntityContext& _getStackRef() const;

    MCFOLD bool _hasValue() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCFOLD void* $ctor(nullptr_t);

    MCAPI void* $ctor(::EntityContext const& entity);
#endif

    MCFOLD void* $ctor(::StackResultStorageEntity&& other);

    MCAPI void* $ctor(::OwnerStorageEntity const& ownerStorage);

    MCAPI void* $ctor(::WeakStorageEntity const& weakStorage);
    // NOLINTEND
};
