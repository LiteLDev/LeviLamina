#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct SpawnAboveBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkdd4fa2;
    ::ll::UntypedStorage<4, 4>  mUnke69066;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnAboveBlockFilter& operator=(SpawnAboveBlockFilter const&);
    SpawnAboveBlockFilter(SpawnAboveBlockFilter const&);
    SpawnAboveBlockFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SpawnAboveBlockFilter();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::Legacy::Spawn
