#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TrialSpawnerConfig;
// clang-format on

class TrialSpawnerConfigRegistry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::TrialSpawnerConfig>> mAliasesToConfig;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TrialSpawnerConfigRegistry();

    MCAPI ::TrialSpawnerConfig const& getConfig(::std::string const& registryKey) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND
};
