#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
// clang-format on

class EntityStorageKeySystem {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string generateStorageKey(int64 actorId);

    MCAPI static bool
    getIsDirtySinceSerialization(::EntityContext& entity, ::std::string const& currentSerializedState);

    MCAPI static void setDirtyFromNonSerializedState(::EntityContext& entity);

    MCAPI static void setLastSerializedState(::EntityContext& entity, ::std::string const& currentSerializedState);
    // NOLINTEND
};
