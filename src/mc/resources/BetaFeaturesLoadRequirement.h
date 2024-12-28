#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
// clang-format on

class BetaFeaturesLoadRequirement {
public:
    // prevent constructor by default
    BetaFeaturesLoadRequirement& operator=(BetaFeaturesLoadRequirement const&);
    BetaFeaturesLoadRequirement(BetaFeaturesLoadRequirement const&);
    BetaFeaturesLoadRequirement();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool satisfied(::IPackLoadContext const&, ::JsonBetaState canUseBeta);
    // NOLINTEND
};
