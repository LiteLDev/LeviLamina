#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::worldgen {

struct StructureSpawnOverride {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk621d33;
    ::ll::UntypedStorage<8, 32> mUnkc86748;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureSpawnOverride& operator=(StructureSpawnOverride const&);
    StructureSpawnOverride(StructureSpawnOverride const&);
    StructureSpawnOverride();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~StructureSpawnOverride();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::worldgen
