#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityId;
class EntityRegistry;
class OwnerStorageEntity;
class StackResultStorageEntity;
// clang-format on

class WeakStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>> mRegistry;
    ::ll::TypedStorage<4, 4, ::EntityId>                   mEntity;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI WeakStorageEntity();

    MCAPI explicit WeakStorageEntity(::EntityContext const& stackRef);

    MCAPI explicit WeakStorageEntity(::OwnerStorageEntity const& stackResultStorage);

    MCAPI explicit WeakStorageEntity(::StackResultStorageEntity const&);

    MCAPI bool _isSet() const;

    MCAPI void _reset();

    MCAPI bool operator==(::WeakStorageEntity const& w) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::EntityContext const& stackRef);

    MCAPI void* $ctor(::OwnerStorageEntity const& stackResultStorage);

    MCAPI void* $ctor(::StackResultStorageEntity const&);
    // NOLINTEND
};
