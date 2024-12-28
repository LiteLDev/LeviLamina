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
    ::ll::UntypedStorage<8, 64> mUnk2d6f91;
    // NOLINTEND

public:
    // prevent constructor by default
    TrialSpawnerConfigRegistry& operator=(TrialSpawnerConfigRegistry const&);
    TrialSpawnerConfigRegistry(TrialSpawnerConfigRegistry const&);

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
