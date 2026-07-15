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
    OwnerStorageEntity();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit OwnerStorageEntity(::EntityRegistry& registry);

    MCAPI ::OwnerStorageEntity& operator=(::OwnerStorageEntity&& other);

    MCAPI ~OwnerStorageEntity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::EntityRegistry& registry);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
