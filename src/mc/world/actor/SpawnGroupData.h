#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MobSpawnRules;
// clang-format on

class SpawnGroupData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                  mIdentifier;
    ::ll::TypedStorage<8, 24, ::std::vector<::MobSpawnRules>> mSpawnRules;
    // NOLINTEND

public:
    // prevent constructor by default
    SpawnGroupData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SpawnGroupData(::std::string const& identifier, ::MobSpawnRules& spawnRules);

    MCAPI ~SpawnGroupData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& identifier, ::MobSpawnRules& spawnRules);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
