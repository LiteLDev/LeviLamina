#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
// clang-format on

class LegacyCreatorFeaturesLoadRequirement {
public:
    // prevent constructor by default
    LegacyCreatorFeaturesLoadRequirement& operator=(LegacyCreatorFeaturesLoadRequirement const&);
    LegacyCreatorFeaturesLoadRequirement(LegacyCreatorFeaturesLoadRequirement const&);
    LegacyCreatorFeaturesLoadRequirement();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool satisfied(::IPackLoadContext const& context, ::JsonBetaState);
    // NOLINTEND
};
