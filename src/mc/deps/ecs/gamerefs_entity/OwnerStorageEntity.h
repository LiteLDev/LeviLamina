#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

class OwnerStorageEntity {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::optional<::EntityContext>> mContext;
    // NOLINTEND

public:
    // prevent constructor by default
    OwnerStorageEntity& operator=(OwnerStorageEntity const&);
    OwnerStorageEntity(OwnerStorageEntity const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OwnerStorageEntity();

    MCAPI OwnerStorageEntity(::OwnerStorageEntity&& other);

    MCAPI explicit OwnerStorageEntity(::EntityRegistry& registry);

    MCFOLD ::EntityContext& _getStackRef() const;

    MCFOLD bool _hasValue() const;

    MCAPI void _reset();

    MCAPI ::OwnerStorageEntity& operator=(::OwnerStorageEntity&& other);

    MCAPI ~OwnerStorageEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::OwnerStorageEntity&& other);

    MCAPI void* $ctor(::EntityRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
