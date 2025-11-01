#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MobEffectImmunityDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<uint>> mMobEffects;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addEffectByName(::std::string const& name);
    // NOLINTEND

};
