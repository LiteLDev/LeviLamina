#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SpawnActorEntry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 272> mUnkb4f434;
    ::ll::UntypedStorage<4, 4> mUnk424a8e;
    ::ll::UntypedStorage<1, 1> mUnk1fba8d;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnActorEntry& operator=(SpawnActorEntry const&);
    SpawnActorEntry(SpawnActorEntry const&);
    SpawnActorEntry();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SpawnActorEntry();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
