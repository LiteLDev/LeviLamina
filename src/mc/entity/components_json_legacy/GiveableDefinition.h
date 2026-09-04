#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct GiveableTrigger;
// clang-format on

class GiveableDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::GiveableTrigger>> mTriggers;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addGiveableTrigger(::GiveableTrigger const& trigger);
    // NOLINTEND
};
