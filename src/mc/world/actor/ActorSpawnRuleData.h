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
    MCAPI ActorSpawnRuleData(::ActorSpawnRuleData&&);

    MCAPI ActorSpawnRuleData(::ActorSpawnRuleData const&);

    MCAPI ::ActorSpawnRuleData& operator=(::ActorSpawnRuleData&&);

    MCAPI ~ActorSpawnRuleData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ActorSpawnRuleData&&);

    MCAPI void* $ctor(::ActorSpawnRuleData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
