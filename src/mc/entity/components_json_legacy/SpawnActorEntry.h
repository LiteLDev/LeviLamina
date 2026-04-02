#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components_json_legacy/SpawnActorParameters.h"

struct SpawnActorEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 272, ::SpawnActorParameters> mParams;
    ::ll::TypedStorage<4, 4, int>                      mSpawnTimer;
    ::ll::TypedStorage<1, 1, bool>                     mStopSpawning;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SpawnActorEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
