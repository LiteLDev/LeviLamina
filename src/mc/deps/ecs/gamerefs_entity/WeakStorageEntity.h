#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/ecs/gamerefs_entity/StackResultStorageEntity.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class Actor;

class WeakStorageEntity {
public:
    template <class Entity = Actor, bool IncludeRemoved = false>
    [[nodiscard]] optional_ref<Entity> tryUnwrap() const {
        return StackResultStorageEntity(*this).tryUnwrap<Entity, IncludeRemoved>();
    }

    WeakStorageEntity()                                      = default;
    WeakStorageEntity(::WeakStorageEntity&&)                 = default;
    WeakStorageEntity(::WeakStorageEntity const&)            = default;
    WeakStorageEntity& operator=(::WeakStorageEntity&&)      = default;
    WeakStorageEntity& operator=(::WeakStorageEntity const&) = default;

public:
    // member variables
    // NOLINTBEGIN
    ::WeakRef<::EntityRegistry> mRegistry;
    ::EntityId                  mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakStorageEntity& operator=(WeakStorageEntity const&);
    WeakStorageEntity(WeakStorageEntity const&);
    WeakStorageEntity();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::WeakStorageEntity& operator=(::WeakStorageEntity&&);
    // NOLINTEND
};
