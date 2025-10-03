#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorMigratedDefinitionCustomData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkfa609a;
    ::ll::UntypedStorage<8, 8>  mUnk687c37;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorMigratedDefinitionCustomData& operator=(ActorMigratedDefinitionCustomData const&);
    ActorMigratedDefinitionCustomData(ActorMigratedDefinitionCustomData const&);
    ActorMigratedDefinitionCustomData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorMigratedDefinitionCustomData(::ActorMigratedDefinitionCustomData&&);

    MCNAPI ~ActorMigratedDefinitionCustomData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorMigratedDefinitionCustomData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
