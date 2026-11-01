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
    MCNAPI static ::std::string generateStorageKey(int64 actorId);

    MCNAPI static bool
    getIsDirtySinceSerialization(::EntityContext& entity, ::std::string const& currentSerializedState);

    MCNAPI static void setDirtyFromNonSerializedState(::EntityContext& entity);

    MCNAPI static void setLastSerializedState(::EntityContext& entity, ::std::string const& currentSerializedState);
    // NOLINTEND
};
