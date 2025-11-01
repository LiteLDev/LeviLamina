#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::Legacy::Spawn {

struct SpawnAboveBlockFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnkdd4fa2;
    ::ll::UntypedStorage<4, 4> mUnke69066;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnAboveBlockFilter& operator=(SpawnAboveBlockFilter const&);
    SpawnAboveBlockFilter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SpawnAboveBlockFilter(::SharedTypes::Legacy::Spawn::SpawnAboveBlockFilter const&);

    MCNAPI ~SpawnAboveBlockFilter();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::Legacy::Spawn::SpawnAboveBlockFilter const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
