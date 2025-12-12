#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct DamageCondition;
// clang-format on

class HurtOnConditionDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk553feb;
    // NOLINTEND

public:
    // prevent constructor by default
    HurtOnConditionDefinition& operator=(HurtOnConditionDefinition const&);
    HurtOnConditionDefinition(HurtOnConditionDefinition const&);
    HurtOnConditionDefinition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addDamageCondition(::DamageCondition const& damageCondition);
    // NOLINTEND
};
