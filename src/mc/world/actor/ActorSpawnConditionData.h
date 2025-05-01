#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSpawnConditionData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>   mUnke7ee7e;
    ::ll::UntypedStorage<8, 64>  mUnk9bc0ae;
    ::ll::UntypedStorage<8, 392> mUnk4bca28;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnConditionData& operator=(ActorSpawnConditionData const&);
    ActorSpawnConditionData(ActorSpawnConditionData const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSpawnConditionData();

    MCNAPI ~ActorSpawnConditionData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
