#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sem_ver/SemVersion.h"

// auto generated forward declare list
// clang-format off
struct ActorSpawnConditionData;
// clang-format on

struct ActorSpawnRuleData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::SemVersion>                             mFormatVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                            mIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>                            mPopulationControl;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorSpawnConditionData>> mSpawnConditions;
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
