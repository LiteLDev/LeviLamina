#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorEntry {
public:
    // prevent constructor by default
    SpawnActorEntry& operator=(SpawnActorEntry const&);
    SpawnActorEntry(SpawnActorEntry const&);
    SpawnActorEntry();

public:
    // NOLINTBEGIN
    MCAPI ~SpawnActorEntry();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
