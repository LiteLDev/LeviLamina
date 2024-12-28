#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/storage/AllExperiments.h"

// auto generated forward declare list
// clang-format off
class BaseGamePackLoadRequirement;
class BetaFeaturesLoadRequirement;
class ExperimentLoadRequirement;
class LegacyCreatorFeaturesLoadRequirement;
// clang-format on

class PackLoadRequirement {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkf641e4;
    // NOLINTEND

public:
    // prevent constructor by default
    PackLoadRequirement& operator=(PackLoadRequirement const&);
    PackLoadRequirement(PackLoadRequirement const&);
    PackLoadRequirement();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit PackLoadRequirement(::AllExperiments requirement);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::AllExperiments requirement);
    // NOLINTEND
};
