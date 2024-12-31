#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/systems/ISystem.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class EntityStorageKeySystem : public ::ISystem {
public:
    // prevent constructor by default
    EntityStorageKeySystem& operator=(EntityStorageKeySystem const&);
    EntityStorageKeySystem(EntityStorageKeySystem const&);
    EntityStorageKeySystem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EntityStorageKeySystem() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string generateStorageKey(int64 actorId);

    MCAPI static bool
    getIsDirtySinceSerialization(::EntityContext& entity, ::std::string const& currentSerializedState);

    MCAPI static void setDirtyFromNonSerializedState(::EntityContext& entity);

    MCAPI static void setLastSerializedState(::EntityContext& entity, ::std::string const& currentSerializedState);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
