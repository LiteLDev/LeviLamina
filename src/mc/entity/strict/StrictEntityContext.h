#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/entity/EntityContext.h"

class StrictEntityContext {
public:
    // StrictEntityContext inner types declare
    // clang-format off
    struct Hash;
    // clang-format on

    // StrictEntityContext inner types define
    struct Hash {
    public:
        // prevent constructor by default
        Hash& operator=(Hash const&);
        Hash(Hash const&);
        Hash();

    public:
        // NOLINTBEGIN
        MCAPI uint64 operator()(class StrictEntityContext const&) const;

        // NOLINTEND
    };

public:
    EntityId mEntity;     // this+0x0
    uint     mRegistryId; // this+0x4

    // prevent constructor by default
    StrictEntityContext& operator=(StrictEntityContext const&);
    StrictEntityContext(StrictEntityContext const&);

public:
    // NOLINTBEGIN
    MCAPI StrictEntityContext();

    MCAPI explicit StrictEntityContext(class EntityContext const& entity);

    MCAPI StrictEntityContext(class StrictEntityContext&& other);

    MCAPI StrictEntityContext(class EntityRegistry& registry, class EntityId entity);

    MCAPI bool isNull() const;

    MCAPI bool operator!=(class StrictEntityContext const& other) const;

    MCAPI class StrictEntityContext& operator=(class StrictEntityContext&& other);

    MCAPI bool operator==(class StrictEntityContext const& other) const;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI class EntityId _getEntityId() const;

    MCAPI uint _getRegistryId() const;

    // NOLINTEND
};
