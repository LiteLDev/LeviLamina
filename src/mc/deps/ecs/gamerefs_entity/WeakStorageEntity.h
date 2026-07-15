#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class OwnerStorageEntity;
// clang-format on

class WeakStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>> mRegistry;
    ::ll::TypedStorage<4, 4, ::EntityId>                   mEntity;
    // NOLINTEND

public:
    // prevent constructor by default
    WeakStorageEntity();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WeakStorageEntity(::OwnerStorageEntity const& ownerStorage);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OwnerStorageEntity const& ownerStorage);
    // NOLINTEND
};
