#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/EntityId.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
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
        MCNAPI uint64 operator()(::StrictEntityContext const& entity) const;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::EntityId> mEntity;
    ::ll::TypedStorage<4, 4, uint>       mRegistryId;
    // NOLINTEND

public:
    // prevent constructor by default
    StrictEntityContext& operator=(StrictEntityContext const&);
    StrictEntityContext(StrictEntityContext const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StrictEntityContext();

    MCNAPI explicit StrictEntityContext(::EntityContext const& entity);

    MCNAPI StrictEntityContext(::StrictEntityContext&& other);

    MCNAPI StrictEntityContext(::EntityRegistry const& registry, ::EntityId entity);

    MCNAPI ::EntityId _getEntityId() const;

    MCNAPI uint _getRegistryId() const;

    MCNAPI bool isNull() const;

    MCNAPI bool operator!=(::StrictEntityContext const& other) const;

    MCNAPI ::StrictEntityContext& operator=(::StrictEntityContext&& other);

    MCNAPI bool operator==(::StrictEntityContext const& other) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::EntityContext const& entity);

    MCNAPI void* $ctor(::StrictEntityContext&& other);

    MCNAPI void* $ctor(::EntityRegistry const& registry, ::EntityId entity);
    // NOLINTEND
};
