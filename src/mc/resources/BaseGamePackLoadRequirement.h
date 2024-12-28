#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/JsonBetaState.h"

// auto generated forward declare list
// clang-format off
class IPackLoadContext;
// clang-format on

class BaseGamePackLoadRequirement {
public:
    // prevent constructor by default
    BaseGamePackLoadRequirement& operator=(BaseGamePackLoadRequirement const&);
    BaseGamePackLoadRequirement(BaseGamePackLoadRequirement const&);
    BaseGamePackLoadRequirement();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool satisfied(::IPackLoadContext const& context, ::JsonBetaState);
    // NOLINTEND
};
