#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSpawnRuleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk6c0b21;
    ::ll::UntypedStorage<8, 32> mUnkc611ea;
    ::ll::UntypedStorage<8, 32> mUnk2ec7ef;
    ::ll::UntypedStorage<8, 24> mUnk92659c;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorSpawnRuleData& operator=(ActorSpawnRuleData const&);
    ActorSpawnRuleData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ActorSpawnRuleData(::ActorSpawnRuleData&&);

    MCNAPI ActorSpawnRuleData(::ActorSpawnRuleData const&);

    MCNAPI ::ActorSpawnRuleData& operator=(::ActorSpawnRuleData&&);

    MCNAPI ~ActorSpawnRuleData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ActorSpawnRuleData&&);

    MCNAPI void* $ctor(::ActorSpawnRuleData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
