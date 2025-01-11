#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class EntityId;
class EntityRegistry;
// clang-format on

class StrictEntityContext {
public:
    // StrictEntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // StrictEntityContext inner types define
    struct Hash {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI uint64 operator()(::StrictEntityContext const& entity) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityId> mEntity;
    ::ll::TypedStorage<4, 4, uint>       mRegistryId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StrictEntityContext();

    MCAPI explicit StrictEntityContext(::EntityContext const& entity);

    MCAPI StrictEntityContext(::StrictEntityContext&& other);

    MCAPI StrictEntityContext(::EntityRegistry& registry, ::EntityId entity);

    MCAPI ::EntityId _getEntityId() const;

    MCFOLD uint _getRegistryId() const;

    MCAPI bool isNull() const;

    MCAPI bool operator!=(::StrictEntityContext const& other) const;

    MCAPI ::StrictEntityContext& operator=(::StrictEntityContext&& other);

    MCAPI bool operator==(::StrictEntityContext const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::EntityContext const& entity);

    MCAPI void* $ctor(::StrictEntityContext&& other);

    MCAPI void* $ctor(::EntityRegistry& registry, ::EntityId entity);
    // NOLINTEND
};
